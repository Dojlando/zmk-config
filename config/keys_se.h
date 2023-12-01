// https://github.com/zmkfirmware/zmk/issues/177#issuecomment-1306247821
#pragma once
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Aliases
#define SE_SECT GRAVE  // §
#define SE_1    N1    // 1
#define SE_2    N2    // 2
#define SE_3    N3    // 3
#define SE_4    N4    // 4
#define SE_5    N5    // 5
#define SE_6    N6    // 6
#define SE_7    N7    // 7
#define SE_8    N8    // 8
#define SE_9    N9    // 9
#define SE_0    N0    // 0
#define SE_PLUS MINUS // +
#define SE_ACUT PLUS // ´
#define SE_Q    Q    // Q
#define SE_W    W    // W
#define SE_E    E    // E
#define SE_R    R    // R
#define SE_T    T    // T
#define SE_Y    Y    // Y
#define SE_U    U    // U
#define SE_I    I    // I
#define SE_O    O    // O
#define SE_P    P    // P
#define SE_ARNG LEFT_BRACKET // Å
#define SE_DIAE RIGHT_BRACKET // ¨ (dead)
#define SE_A    A    // A
#define SE_S    S    // S
#define SE_D    D    // D
#define SE_F    F    // F
#define SE_G    G    // G
#define SE_H    H    // H
#define SE_J    J    // J
#define SE_K    K    // K
#define SE_L    L    // L
#define SE_ODIA SEMICOLON // Ö
#define SE_ADIA SINGLE_QUOTE // Ä
#define SE_QUOT NON_US_HASH // '
#define SE_LABK NON_US_BACKSLASH // <
#define SE_Z    Z    // Z
#define SE_X    X    // X
#define SE_C    C    // C
#define SE_V    V    // V
#define SE_B    B    // B
#define SE_N    N    // N
#define SE_M    M    // M
#define SE_COMM COMMA // ,
#define SE_DOT  PERIOD  // .
#define SE_MINS SLASH // -
#define SE_DEG  LS(SE_SECT) // °
#define SE_EXLM LS(SE_1)    // !
#define SE_DQUO LS(SE_2)    // "
#define SE_HASH LS(SE_3)    // #
#define SE_EURO LS(SE_4)    // €
#define SE_PERC LS(SE_5)    // %
#define SE_AMPR LS(SE_6)    // &
#define SE_SLSH LS(SE_7)    // /
#define SE_LPRN LS(SE_8)    // (
#define SE_RPRN LS(SE_9)    // )
#define SE_EQL  LS(SE_0)    // =
#define SE_QUES LS(SE_PLUS) // ?
#define SE_GRV  LS(SE_ACUT) // `
#define SE_CIRC LS(SE_DIAE) // ^ (dead)
#define SE_ASTR LS(SE_QUOT) // *
#define SE_RABK LS(SE_LABK) // >
#define SE_SCLN LS(SE_COMM) // ;
#define SE_COLN LS(SE_DOT)  // :
#define SE_UNDS LS(SE_MINS) // _
#define SE_PILC RA(SE_SECT) // ¶
#define SE_COPY RA(SE_1)    // ©
#define SE_TM   RA(SE_2)    // ™
#define SE_PND  RA(SE_3)    // £
#define SE_DLR  RA(SE_4)    // $
#define SE_INFN RA(SE_5)    // ∞
#define SE_PIPE RA(SE_7)    // |
#define SE_LBRC RA(SE_8)    // [
#define SE_RBRC RA(SE_9)    // ]
#define SE_AEQL RA(SE_0)    // ≈
#define SE_PLMN RA(SE_PLUS) // ±
#define SE_BULT RA(SE_Q)    // •
#define SE_OMEG RA(SE_W)    // Ω
#define SE_EACU RA(SE_E)    // É
#define SE_REGD RA(SE_R)    // ®
#define SE_DAGG RA(SE_T)    // †
#define SE_MICR RA(SE_Y)    // µ
#define SE_UDIA RA(SE_U)    // Ü
#define SE_DLSI RA(SE_I)    // ı
#define SE_OE   RA(SE_O)    // Œ
#define SE_PI   RA(SE_P)    // π
#define SE_DOTA RA(SE_ARNG) // ˙
#define SE_TILD RA(SE_DIAE) // ~ (dead)
#define SE_APPL RA(SE_A)    //  (Apple logo)
#define SE_SS   RA(SE_S)    // ß
#define SE_PDIF RA(SE_D)    // ∂
#define SE_FHK  RA(SE_F)    // ƒ
#define SE_CEDL RA(SE_G)    // ¸
#define SE_OGON RA(SE_H)    // ˛
#define SE_SQRT RA(SE_J)    // √
#define SE_FORD RA(SE_K)    // ª
#define SE_FI   RA(SE_L)    // ﬁ
#define SE_OSTR RA(SE_ODIA) // Ø
#define SE_AE   RA(SE_ADIA) // Æ
#define SE_AT   RA(SE_QUOT) // @
#define SE_LTEQ RA(SE_LABK) // ≤
#define SE_DIV  RA(SE_Z)    // ÷
#define SE_CCED RA(SE_C)    // Ç
#define SE_LSAQ RA(SE_V)    // ‹
#define SE_RSAQ RA(SE_B)    // ›
#define SE_LSQU RA(SE_N)    // ‘
#define SE_RSQU RA(SE_M)    // ’
#define SE_SLQU RA(SE_COMM) // ‚
#define SE_ELLP RA(SE_DOT)  // …
#define SE_NDSH RA(SE_MINS) // –
#define SE_IEXL LS(RA(SE_1))    // ¡
#define SE_YEN  LS(RA(SE_3))    // ¥
#define SE_CENT LS(RA(SE_4))    // ¢
#define SE_PERM LS(RA(SE_5))    // ‰
#define SE_BSLS LS(RA(SE_7))    // (backslash)
#define SE_LCBR LS(RA(SE_8))    // {
#define SE_RCBR LS(RA(SE_9))    // }
#define SE_NEQL LS(RA(SE_0))    // ≠
#define SE_IQUE LS(RA(SE_PLUS)) // ¿
#define SE_DACU LS(RA(SE_W))    // ˝
#define SE_DDAG LS(RA(SE_T))    // ‡
#define SE_STIL LS(RA(SE_Y))    // ˜
#define SE_DCIR LS(RA(SE_I))    // ˆ
#define SE_NARP LS(RA(SE_P))    // ∏
#define SE_RNGA LS(RA(SE_ARNG)) // ˚
#define SE_LOZN LS(RA(SE_A))    // ◊
#define SE_NARS LS(RA(SE_S))    // ∑
#define SE_INCR LS(RA(SE_D))    // ∆
#define SE_INTG LS(RA(SE_F))    // ∫
#define SE_MACR LS(RA(SE_G))    // ¯
#define SE_BREV LS(RA(SE_H))    // ˘
#define SE_NOT  LS(RA(SE_J))    // ¬
#define SE_MORD LS(RA(SE_K))    // º
#define SE_FL   LS(RA(SE_L))    // ﬂ
#define SE_GTEQ LS(RA(SE_LABK)) // ≥
#define SE_FRSL LS(RA(SE_Z))    // ⁄
#define SE_CARN LS(RA(SE_X))    // ˇ
#define SE_LDAQ LS(RA(SE_V))    // «
#define SE_RDAQ LS(RA(SE_B))    // »
#define SE_LDQU LS(RA(SE_N))    // “
#define SE_RDQU LS(RA(SE_M))    // ”
#define SE_DLQU LS(RA(SE_COMM)) // „
#define SE_MDDT LS(RA(SE_DOT))  // ·
#define SE_MDSH LS(RA(SE_MINS)) // —
