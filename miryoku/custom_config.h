// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_CLIPBOARD_MAC

/ {
    combos {
        compatible = "zmk,combos";
        
        // AltGr + русские буквы (позиции для 36-клавишной Chocofi)
        combo_altgr_kh {
            bindings = <&kp J>;              // х в русской раскладке
            key-positions = <33 3>;          // правый AltGr + p
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_altgr_hard {
            bindings = <&kp RBKT>;           // ъ в русской раскладке  
            key-positions = <33 15>;         // правый AltGr + m
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_altgr_shch {
            bindings = <&kp O>;              // щ в русской раскладке
            key-positions = <33 18>;         // правый AltGr + i
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_altgr_yo {
            bindings = <&kp GRAVE>;          // ё в русской раскладке
            key-positions = <31 13>;         // левый AltGr + t
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_altgr_e {
            bindings = <&kp SQT>;            // э в русской раскладке
            key-positions = <33 5>;          // правый AltGr + j
            timeout-ms = <50>;
            layers = <0>;
        };
    };
};
