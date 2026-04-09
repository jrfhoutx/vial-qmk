# Viktus Design Krona

![Krona](https://i.imgur.com/FrIc6r5.png)

The Viktus Krona is a WKL TKL + left macro column designed by BlindAssassin111. The board supports ANSI and ISO modifiers, split backspace, stepped/non-stepped caps lock as well as a 10u spacebar. It also has a single RGB LED which can be used as a LED indicator.

* Keyboard Maintainer: [keebnewb](https://github.com/thompson-ele)
* Hardware Supported: Krona
* Hardware Availability: <https://www.Viktus.Design>

Make example for this keyboard (after setting up your build environment):

    make viktus/krona:default

Flashing example for this keyboard:

    make viktus/krona:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
