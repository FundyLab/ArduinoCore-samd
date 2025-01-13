# Arduino Core for SAMD21 CPU for FundyLab boards

This repository contains the source code and configuration files of the Arduino Core
for Atmel's SAMD21 processor (used on the Arduino/Genuino Zero boards).

This adds support for the FundyLab SAMD Boards such as fundylab_plain_samd21
branched from Adafruit GitHub reposirtory below. -Thank you Ada!
https://github.com/adafruit/ArduinoCore-samd

FundyLab plain board:
"plain" means no LED accesses by bootloader.
As a result, you can use PA17, PB03, PA27 ports(case SAMD21G18A) on your Arduino sketch.

## Changed
Changed the product name to FundyLab's products
Changed the CMSIS version used 
Changed some other customizations such as FundlLab plain
Deleted "post_install.bat"

## Bugs or Issues

* AREF must be tied to 3.3V for dac to work. This is a bug in the SAMD51 silicon.
* USB host mode doesn't work yet

If you find a bug you can submit an issue here on github:

https://github.com/adafruit/ArduinoCore-samd

or if it is an issue with the upstream:

https://github.com/arduino/ArduinoCore-samd/issues

Before posting a new issue, please check if the same problem has been already reported by someone else
to avoid duplicates.

## License and credits

This core has been developed by Arduino LLC in collaboration with Atmel.

```
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
```
