/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "hal.h"

#include "led.h"


void led_set(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // output high (all teensy pins are set as outputs by default by ChibiOS)
        // palSetPadMode(TEENSY_PIN13_IOPORT, TEENSY_PIN13, PAL_MODE_OUTPUT_PUSHPULL);
        palSetPad(TEENSY_PIN13_IOPORT, TEENSY_PIN13);

        // lit the backstuff
        palSetPad(TEENSY_PIN20_IOPORT, TEENSY_PIN20); // R1
        palSetPad(TEENSY_PIN21_IOPORT, TEENSY_PIN21); // R2
        // palSetPad(TEENSY_PIN18_IOPORT, TEENSY_PIN18); // C3
        // palSetPad(TEENSY_PIN22_IOPORT, TEENSY_PIN22); // C2
        // palSetPad(TEENSY_PIN23_IOPORT, TEENSY_PIN23); // C1
        // palClearPad(TEENSY_PIN18_IOPORT, TEENSY_PIN18);

    } else {
        // output low (all teensy pins are set as outputs by default by ChibiOS)        // Hi-Z
        palClearPad(TEENSY_PIN13_IOPORT, TEENSY_PIN13);

        palClearPad(TEENSY_PIN20_IOPORT, TEENSY_PIN20); // R1
        palClearPad(TEENSY_PIN21_IOPORT, TEENSY_PIN21); // R2

    }
}
