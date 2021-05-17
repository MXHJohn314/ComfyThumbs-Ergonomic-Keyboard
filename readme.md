# Comfy Thumbs

An ortholinear keyboard inspired by comfortable and efficient thumb use and keycap compatibility. Has either 90 keys, or 76 without the function row.

### The Default Keymap
<h5><b>Comfy Thumbs Rev 1</b></h5>


[Check out the Gist on Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/36e706f383088aca6e862086f8b5e326)
![Default Keymap](https://raw.githubusercontent.com/GalacticWafer/ComfyThumbs/master/layout.jpg)

<p>

### 97.98% Keycap Compatibility

This is the most keycap-compatible, split, ortholinear, tenkey-less keyboard. Space and Backspace are the only keys that are not traditionally-sized. That means you won't need to buy/use different keycaps for Left  & Right Shift, Enter, Tab, Backslash, Command, Ctrl, Alt, OS, and Application keys.

<p>

### Use your thumbs without hurting them

Inspired by bad thumb cluster designs of other split keyboards, The ComfyThumbs board maximizes thumb use and comfort simultaneously. The thumbs naturally rest on either Space or Backspace, with shift, Ctrl, Alt and OS keys all within 1u radius of resting position. Note that there are two thumb rows, and the rows with Space/Backspace have a higher profile with the help of stem raisers. Using SA keycaps for this row is another option to get this profile difference, but we like keycap compatibility :)


### Still want layers?
The bottom left and right Fn keys can be used to access any QMK keyboard layers desired by using the pinky side of the palm to hold down the key (palming).
</p>



Keyboard Maintainer: [GalacticWafer](https://github.com/GalacticWafer)  
Hardware Supported: ATmega32u4  

### Compiling the Firmware

Make example for this keyboard (after setting up your build environment):

| Buld Method        |Command|
|-------------|-----------|
| MSys2|make comfythumbs:default |
|Linux (including WSL)|qmk compile -kb comfythumbs -km default|

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
