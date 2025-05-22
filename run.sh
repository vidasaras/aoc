#!/bin/sh

qemu-system-x86_64 -enable-kvm -cpu host -m 512M -display sdl -hda c.img
