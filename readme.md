# Comfy Thumbs

An ortholinear keyboard inspired by comfortable and efficient thumb use and keycap compatibility. Has 89 keys.

### The Default Keymap
<h5><b>Comfy Thumbs Rev 1</b></h5>


![Default Keymap](https://raw.githubusercontent.com/GalacticWafer/ComfyThumbs/master/layout.jpg)


<p> Comfy Thumbs is a mostly-ortholinear keyboard, with the intention of maximizing thumb comfort, without sacrificing utility. Thumbs are responsible for pressing four major keys (Space, Backspace, and both Shift keys) as well as six less often-used keys (left and right control, alt and OS keys). The thumbs natrually rest on the Space and Backspace keys, and there is an extra \"palm row\" of keys at the bottom.</p>

<p> This keyboard takes advantage of different keycap and switch height to ensure that the shift keys do not encounter interference from accidental thumb presses of nearby keys. This also helps the user know where their hands are without having to look at the keyboard. Here is the breakdown:
</p>

| Keys        |Switch Type| keycap profile   |
|-------------|-----------|------------------|
| Space and BackSpace|MX |SA (high profile)|
|Navigation keys|Kaihl Choc |Kaihl Choc (low profile)|
|Everything else|MX| MX (regular)

*  The navigation keys are Home, PgUp, PgDn, End, Left, Up, Down, and Right.


<p>The bottom left and right Fn keys can be used to access any other keyboard layers desired by using the pinky side of the palm to hold down the key (palming).</p>

<p>Keycap compatibility is also a major goal of this layout, which is usually difficult to accommodate with orthonlinear layouts. Here, only the space and backspace keys need to be a different size. The arrows represent which way the switches should face for backlight compatibility.</p>


Keyboard Maintainer: [GalacticWafer](https://github.com/GalacticWafer)  
Hardware Supported: ATmega32u4  

### Arduino Pro Micro Pinout

| Rows        | 0  | 1  | 2  | 3  | 4  |
|-------------|----|----|----|----|----|
| Arduino pin | 6  | 7  | 8  | 10 | 16 |
| QMK pin     | D7 | E6 | B4 | B6 | B2 |

| Columns     | 0  | 1  | 2  | 3  | 4  | 5  | 6   | 7   | 8  | 9  | 10 | 11 |
|-------------|----|----|----|----|----|----|-----|-----|----|----|----|----|
| Arduino pin | A3 | A2 | A1 | A0 | 15 | 14 | TX0 | RXI | 2  | 3  | 4  | 5  |
| QMK pin     | F4 | F5 | F6 | F7 | B1 | B3 | D3  | D2  | D1 | D0 | D4 | C6 |

|             | Backlight |
|-------------|-----------|
| Arduino pin | 9         |
| QMK pin     | B5        |

### Compiling the Firmware

Make example for this keyboard (after setting up your build environment):

    make comfythumbs

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
