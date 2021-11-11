<p align="center">
  <img src="/.github/preview.png" alt="slock blur example">
</p>

<p align="center"><b>slock - simple screen locker</b></p>

<p align="center">simple screen locker utility for X.</p>

---

## Requirements

In order to build slock you need the Xlib header files.

---

## Installation

Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

```sh
make clean install
```

---

## Patches

+ alpha : for transprency (blur).
+ xft + message : for fonts
+ [quick cancel](https://tools.suckless.org/slock/patches/quickcancel/) :
+ [xresources](https://tools.suckless.org/slock/patches/xresources/) : XResources loading.
+ [caps](https://tools.suckless.org/slock/patches/capscolor/) : for CAPS colouring.


---

## Running slock

Simply invoke the 'slock' command. To get out of it, enter your password.

---

## Blur effect

Use a compositor, like picom, with blur for transparency.
