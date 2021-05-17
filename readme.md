# Comfy Thumbs

An ortholinear keyboard inspired by comfortable and efficient thumb use and keycap compatibility. Has 89 keys.

### The Default Keymap
<h5><b>Comfy Thumbs Rev 1</b></h5>


[Check out the Gist on Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/36e706f383088aca6e862086f8b5e326)
![Default Keymap](https://raw.githubusercontent.com/GalacticWafer/ComfyThumbs/master/layout.jpg)

<p> Comfy Thumbs is a mostly-ortholinear keyboard, with the intention of maximizing thumb comfort, without sacrificing utility. Thumbs are responsible for pressing four major keys (Space, Backspace, and both Shift keys) as well as six less frequently-used keys (left and right Control, Alt and OS keys). The thumbs naturally rest on the Space and Backspace keys, and there is an extra "palm row" of keys at the bottom.</p>

<p>
Keeping all the keys you're used to, and keycap compatibility is a must. No other split ortholinear layout does this!
<p> 
This keyboard is fully compatible with most keycap sets you can buy. 

<p> 
The top row of thumb keys sits higher than the bottom row with the help of stem raisers.

</p>

| Keys        |Switch Type| keycap profile   |
|-------------|-----------|------------------|
| Space and BackSpace|MX |SA (high profile)|
|Navigation keys|Kaihl Choc |Kaihl Choc (low profile)|
|Everything else|MX| MX (regular)

<p>
The bottom left and right Fn keys can be used to access any QMK keyboard layers desired by using the pinky side of the palm to hold down the key (palming).
</p>



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
