# RT-N56U Padavan Fan Control
This repo contains the Arduino code, scripts, and kernel modules to turn a fan on or off from an ASUS RT-N56U running Padavan.

# Arduino
Simply clone the repo onto your computer and upload the `.ino` file to an Arduino Uno.

# RT-N56U
0. Ensure that your router is running a Linux 3.4.110 mips kernel in Padavan. Please upgrade your firmware if needed. You can download pre-built images from the [RT-N56U Padavan](https://bitbucket.org/padavan/rt-n56u/downloads/) page.
1. Copy the contents of the `scripts` folder to `/opt/bin/`.
2. Copy the contents of the `modules` folder to `/opt/lib/modules`, creating the directories as needed with `mkdir`.
3. Add `/opt/bin/loadfancontrolmodules` to your `/etc/storage/started_script.sh`. Optionally, you can add `/opt/bin/autofan > /dev/null &` to it to automatically start the fan control software on boot.
4. Reboot your router.
