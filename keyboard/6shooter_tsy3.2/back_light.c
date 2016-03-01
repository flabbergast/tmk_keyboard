/*
Copyright 2013 Mathias Andersson <wraul@dbox.se>

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
#include "backlight.h"

/* Backlight pin configuration
 * 2x3 matrix
 * R1 R2   C1 C2 C3
 * 20 21   23 22 18
 * on: R-high, C-low
 */
void backlight_set(uint8_t level)
{
    // all teensy pins are set as outputs by default by ChibiOS

    if(level & (1<<0)) {
        palSetPad(TEENSY_PIN20_IOPORT, TEENSY_PIN20); // R1
        palSetPad(TEENSY_PIN21_IOPORT, TEENSY_PIN21); // R2
        // palClearPad(TEENSY_PIN18_IOPORT, TEENSY_PIN18); // C3
        // palClearPad(TEENSY_PIN22_IOPORT, TEENSY_PIN22); // C2
        // palClearPad(TEENSY_PIN23_IOPORT, TEENSY_PIN23); // C1
    } else {
        palClearPad(TEENSY_PIN20_IOPORT, TEENSY_PIN20); // R1
        palClearPad(TEENSY_PIN21_IOPORT, TEENSY_PIN21); // R2
    }
}
