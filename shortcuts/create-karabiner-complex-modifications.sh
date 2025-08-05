#!/usr/bin/env bash

cat > ~/.config/karabiner/assets/complex_modifications/direct_en_ru.json <<'EOF'
{
  "title": "Direct EN/RU switch",
  "rules": [
    {
      "description": "F18 → English layout",
      "manipulators": [
        {
          "type": "basic",
          "from": { "key_code": "f18", "modifiers": { "optional": ["any"] } },
          "to": [ { "select_input_source": { "language": "^en$" } } ]
        }
      ]
    },
    {
      "description": "F19 → Russian layout",
      "manipulators": [
        {
          "type": "basic",
          "from": { "key_code": "f19", "modifiers": { "optional": ["any"] } },
          "to": [ { "select_input_source": { "language": "^ru$" } } ]
        }
      ]
    }
  ]
}
EOF
