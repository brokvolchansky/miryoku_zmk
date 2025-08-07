# Copyright 2023 Manna Harbour
# https://github.com/manna-harbour/miryoku

* Miryoku ZMK [[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/logos/miryoku-roa-32.png]]

[[https://raw.githubusercontent.com/brokvolchansky/miryoku_zmk/refs/heads/master/layout/Miryoku%20Layer%20Reference.png]]

[[https://github.com/manna-harbour/miryoku/][Miryoku]] is an ergonomic, minimal, orthogonal, and universal keyboard layout.  [[https://github.com/manna-harbour/miryoku_zmk][Miryoku ZMK]] is the Miryoku implementation for [[https://zmkfirmware.dev/][ZMK]].

This document describes Miryoku ZMK only.  For Miryoku documentation, implementations, and discussions and support, see [[https://github.com/manna-harbour/miryoku/][Miryoku]].

See the [[docs/quickstart][Miryoku ZMK Quickstart Guide]] to have a personalised build running on your keyboard in a few minutes without installing any software or editing any files.

## This repo
is a clone of the Miryoku repository customized for Chocofi keyboard by [Beekeeb Chocofi](https://shop.beekeeb.com/product/chocofi-36-keys-kailh-low-profile-choc-v1-mechanical-ergonomic-hotswap-split-keyboard-diy-kit/).
It can be built locally as well as with help of github actions.

The differences in the default settings I use are: 
- the [layout](.github/workflows/anton.yml) changed to QWERTY;
- added Russian layer with helpers for Karabiner;
- added possibility to build it locally;
- nice-view changed to [nice-view-gem](https://github.com/M165437/nice-view-gem).

Some [settings](config/corne.keymap) for russian layer you could find a bit weird — you are free to change them as you wish in your clone.

I appreciate [guys from Beekeeb.com](https://shop.beekeeb.com/contact/), [Manna Houbre](https://github.com/manna-harbour/manna-harbour/tree/main/contact) and [M165437](https://github.com/M165437) who did a lot of work to let me type this device with pleasure!
