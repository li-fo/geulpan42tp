## BOM

### Base

![GeulPan42TP](../imgs/geulpan42tp_011.png)

| Part  | Qty | Memo |
| ------------- | ------------- | ------------- | 
| YD-RP2040  | 2  | -  |
| PJ321A  | 2 | -  |

### TrackPoint

![GeulPan42TP](../imgs/geulpan42tp_012.png)

TrackPoint Module : 2-piece Tracpoint for X240, X250, X260 X270

| Part  | Qty | Size or Spec |
| ------------- | ------------- | ------------- | 
| 4.7k  | 2  | 1206  |
| 100k  | 1 | 1206  |
| 2.2uF  | 1  | 1206  |
| FFC 12 Pin Connector  | 1  | under contact |
| FFC 8 Pin Connector  | 2  | under contact |
| FFC 8 Pin Cable*  | 1  | reverse direction(right side, default) <br> forward direction (left side)  |
| 6x6x3.5  | 6  | -  |

If you're not using an FFC cable, you can also solder it as shown in the picture.

![GeulPan42TP](../imgs/geulpan42tp_026.jpg)

### Case & PalmRest

| Part  | Qty | Size |
| ------------- | ------------- | ------------- | 
| Bolt  | 10  | M3 6mm  |
| Bumpon  | 12  | SJ5032 or 10mm  |
| Mganet | 6  | 6mm x 2mm  |

### Keycaps for Trackpoint

![GeulPan42TP](../imgs/geulpan42tp_021.jpg)

I have modified and created the [KLP Lame Sallde for MX](https://github.com/braindefender/KLP-Lame-Keycaps) keycap. The print settings are as follows:

| Option  | Value | Memo |
| ------------- | ------------- | ------------- | 
| Layer Height  | 0.1 | -   |
| Support  | Tree Support  | -  |

### Sodering Option

![GeulPan42TP](../imgs/geulpan42tp_031.png)

I'm primarily using the trackpoint attached on the right side by default, but I've made it possible to choose between master and slave for those who want to attach the trackpoint on the left side. However, I haven't tested it with the trackpoint mounted on the left side. 


1. Master or Slave
    -  I have set it up so that the side with the trackpoint installed is the master, and the side without it is the slave. Power is supplied from the master to the slave.
    - By default, the right side is the master and the left side is the slave
    - The default soldering position is marked as "▲"

2. Mouse Button 
    - The default soldering position is marked as "▲" and Using Trackpoint Mouse Button.
    - You can use either the trackpoint's mouse buttons or the QMK mouse buttons.If the trackpoint mouse operation is not smooth, you can switch to the QMK mouse buttons.
    - If using QMK mouse buttons, the left and right buttons can be used immediately by changing their soldering positions.
    - To use the middle mouse button as a QMK mouse button, you need to desolder the RGB section of the yd-rp2040 board.

   