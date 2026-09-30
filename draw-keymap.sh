#!/usr/bin/env bash
# Regenerate my_keymap.yaml and my_keymap.svg from the ZMK keymap using keymap-drawer.
# Requires uv (https://docs.astral.sh/uv/).
set -euo pipefail

cd "$(dirname "$0")"
tmp="$(mktemp -d)"
trap 'rm -rf "$tmp"' EXIT

# Parse a copy of the keymap without keys_se.h next to it, so SE_* keycodes stay
# unexpanded and can be mapped to the Swedish glyphs from the header comments.
cp config/splitkb_aurora_corne.keymap "$tmp/"

python3 - config/keys_se.h > "$tmp/config.yaml" <<'PY'
import json, re, sys
glyphs = {}
for line in open(sys.argv[1], encoding="utf-8"):
    m = re.match(r"#define (SE_\w+)\s.*//\s*(.+?)(?: \(dead\))?\s*$", line)
    if m:
        glyphs[m[1]] = m[2]
glyphs.update(SE_BSLS="\\", SE_APPL="Apple")
print("parse_config:\n  zmk_keycode_map:")
for key, glyph in glyphs.items():
    print(f"    {key}: {json.dumps(glyph, ensure_ascii=False)}")
PY

uvx --from keymap-drawer keymap -c "$tmp/config.yaml" parse -c 12 \
  -z "$tmp/splitkb_aurora_corne.keymap" > my_keymap.yaml
uvx --from keymap-drawer keymap -c "$tmp/config.yaml" draw my_keymap.yaml > my_keymap.svg
