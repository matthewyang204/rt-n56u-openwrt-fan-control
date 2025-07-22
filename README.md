# RT-N56U OpenWRT Fan Control
This repo contains the Arduino code, scripts, and kernel modules to turn a fan on or off from an ASUS RT-N56U running OpenWRT.

# Requirements
- `opkg` (Entware package manager)
- Python 3.6+
- `bash`
- A relatively recent OpenWRT release
- `ch341` kernel module

# Arduino
Simply clone the repo onto your computer and upload the `.ino` file to an Arduino Uno.

# RT-N56U
1. Copy the contents of the `scripts` folder to `/usr/local/bin/`.
2. Put the `fancontrol` script in `init` in `/etc/init.d/`, then make it executable with `chmod +x /etc/init.d/fancontrol`. Enable it at boot with `/etc/init.d/fancontrol enable`, and start it immediately with `/etc/init.d/fancontrol start`.

# License
This project is licensed with a GPLv3 license. See the LICENSE file for more details.
