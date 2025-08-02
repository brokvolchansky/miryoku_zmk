// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_CLIPBOARD_MAC

/ {
    combos {
        compatible = "zmk,combos";
        
        // ЛЕВЫЙ Ctrl + русские буквы (позиция 10 при MAC)
        combo_lctrl_kh {
            bindings = <&kp J>;              // х в русской раскладке
            key-positions = <10 9>;          // LCTRL + p
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_lctrl_hard {
            bindings = <&kp RBKT>;           // ъ в русской раскладке  
            key-positions = <10 24>;         // LCTRL + m
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_lctrl_shch {
            bindings = <&kp O>;              // щ в русской раскладке
            key-positions = <10 8>;          // LCTRL + i
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_lctrl_yo {
            bindings = <&kp GRAVE>;          // ё в русской раскладке
            key-positions = <10 13>;         // LCTRL + t
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_lctrl_e {
            bindings = <&kp SQT>;            // э в русской раскладке
            key-positions = <10 23>;         // LCTRL + j
            timeout-ms = <50>;
            layers = <0>;
        };

        // ПРАВЫЙ Ctrl + русские буквы (позиция 18 при MAC)
        combo_rctrl_kh {
            bindings = <&kp J>;              // х в русской раскладке
            key-positions = <18 9>;          // RCTRL + p
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_rctrl_hard {
            bindings = <&kp RBKT>;           // ъ в русской раскладке  
            key-positions = <18 24>;         // RCTRL + m
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_rctrl_shch {
            bindings = <&kp O>;              // щ в русской раскладке
            key-positions = <18 8>;          // RCTRL + i
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_rctrl_yo {
            bindings = <&kp GRAVE>;          // ё в русской раскладке
            key-positions = <18 13>;         // RCTRL + t
            timeout-ms = <50>;
            layers = <0>;
        };
        
        combo_rctrl_e {
            bindings = <&kp SQT>;            // э в русской раскладке
            key-positions = <18 23>;         // RCTRL + j
            timeout-ms = <50>;
            layers = <0>;
        };
    };
};
