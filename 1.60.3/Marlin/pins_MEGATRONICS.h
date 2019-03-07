/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * MegaTronics pin assignments
 */

#ifndef __AVR_ATmega2560__
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME         "Megatronics"
#define LARGE_FLASH        true

//
// Limit Switches
//
#define X_MIN_PIN          41
#define X_MAX_PIN          37
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  19
#endif

//
// Steppers
//
#define X_STEP_PIN         26
#define X_DIR_PIN          28
#define X_ENABLE_PIN       24

#define Y_STEP_PIN         60 // A6
#define Y_DIR_PIN          61 // A7
#define Y_ENABLE_PIN       22

#define Z_STEP_PIN         54 // A0
#define Z_DIR_PIN          55 // A1
#define Z_ENABLE_PIN       56 // A2

#define E0_STEP_PIN        31
#define E0_DIR_PIN         32
#define E0_ENABLE_PIN      38

#define E1_STEP_PIN        34
#define E1_DIR_PIN         36
#define E1_ENABLE_PIN      30

//
// Temperature Sensors
//
#if TEMP_SENSOR_0 == -1
  #define TEMP_0_PIN        8   // Analog Input
#else
  #define TEMP_0_PIN       13   // Analog Input
#endif
#define TEMP_1_PIN         15   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN        9
#define HEATER_1_PIN        8
#define HEATER_BED_PIN     10

#define FAN_PIN             7   // IO pin. Buffer needed

//
// Misc. Functions
//
#define SDSS               53
#define LED_PIN            13
#define PS_ON_PIN          12
#define CASE_LIGHT_PIN      2

//
// LCD / Controller
//
#define BEEPER_PIN         33

#if DISABLED(ULTRA_LCD) && DISABLED(NEWPANEL)

  #define LCD_PINS_RS     16
  #define LCD_PINS_ENABLE 17
  #define LCD_PINS_D4     23
  #define LCD_PINS_D5     25
  #define LCD_PINS_D6     27
  #define LCD_PINS_D7     29

  // Buttons directly attached using AUX-2
  #define BTN_EN1         59
  #define BTN_EN2         64
  #define BTN_ENC         43

  #define SD_DETECT_PIN   -1   // RAMPS doesn't use this

#endif // ULTRA_LCD && NEWPANEL

//
// M3/M4/M5 - Spindle/Laser Control
//
#define SPINDLE_LASER_PWM_PIN     3  // MUST BE HARDWARE PWM
#define SPINDLE_LASER_ENABLE_PIN  4  // Pin should have a pullup!
#define SPINDLE_DIR_PIN          11
