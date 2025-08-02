// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_CLIPBOARD_MAC

/ {
    combos {
        compatible = "zmk,combos";
        
        // Ctrl + русские буквы для Mac (при MIRYOKU_CLIPBOARD_MAC Ctrl на позиции 10)
        combo_ctrl_kh {
            bindings = <&kp J>;              // х в русской раскладке
            key-positions = <10 9>;          // LCTRL (Q при MAC) + p
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_ctrl_hard {
            bindings = <&kp RBKT>;           // ъ в русской раскладке  
            key-positions = <10 24>;         // LCTRL (Q при MAC) + m
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_ctrl_shch {
            bindings = <&kp O>;              // щ в русской раскладке
            key-positions = <10 8>;          // LCTRL (Q при MAC) + i
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_ctrl_yo {
            bindings = <&kp GRAVE>;          // ё в русской раскладке
            key-positions = <10 13>;         // LCTRL (Q при MAC) + t
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_ctrl_e {
            bindings = <&kp SQT>;            // э в русской раскладке
            key-positions = <10 23>;         // LCTRL (Q при MAC) + j
            timeout-ms = <50>;
            layers = <0>;
        };
    };
};
