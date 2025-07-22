# RT-N56U OpenWRT Fan Control
This repo contains the Arduino code, scripts, and kernel modules to turn a fan on or off from an ASUS RT-N56U running OpenWRT.

# Requirements
- `opkg` (Entware package manager)
- Python 3.6+
- `bash`
- A relatively recent OpenWRT release

# Arduino
Simply clone the repo onto your computer and upload the `.ino` file to an Arduino Uno.

# RT-N56U
1. Copy the contents of the `scripts` folder to `/usr/local/bin/`.
2. Copy the contents of the `modules` folder to `/opt/lib/modules`, creating the directories as needed with `mkdir`.
3. Add `/usr/local/bin/holdfancontroller &` and `/usr/local/bin/loadfancontrolmodules` in respective order to your `/etc/storage/started_script.sh`. Optionally, you can add `/usr/local/bin/autofan > /dev/null &` to it to automatically start the fan control software on boot.
4. Reboot your router.

# License
This project is licensed with a GPLv3 license. See the LICENSE file for more details.
