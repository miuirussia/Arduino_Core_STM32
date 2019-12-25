/*
 *******************************************************************************
 * Copyright (c) 2019, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define ARCH_STM32

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

// Left side
#define PB9 0
#define PB8 1
#define PB7 2 // SDA
#define PB6 3 // SCL
#define PB5 4
#define PB4 5
#define PB3 6
#define PA15 7
#define PA10 8
#define PA9 9
#define PA8 10
#define PB15 11
#define PB14 12
#define PB13 13
#define PB12 14

// Right side
#define PA0 15
#define PA1 16
#define PA2 17
#define PA3 18
#define PB0 19
#define PB1 20
#define PB10 21

// SPI1
#define PA4 22
#define PA5 23
#define PA6 24
#define PA7 25

// NeoPixel
#define PC13 26

// This must be a literal
// It is used with preprocessor tests (e.g. #if NUM_DIGITAL_PINS > 3)
// so an enum will not work.
#define NUM_DIGITAL_PINS        27

#define NUM_ANALOG_INPUTS       4
#define NUM_ANALOG_FIRST        15

// On-board LED pin number
#define LED_BUILTIN             PB0
#define LED_GREEN               LED_BUILTIN

// On-board user button
// #define USER_BTN                x

// Below SPI and I2C definitions already done in the core
// Could be redefined here if differs from the default one
// SPI Definitions
#define PIN_SPI_SS              PA4
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6
#define PIN_SPI_SCK             PA5

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PB6

// Timer Definitions (optional)
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
// #define TIMER_TONE              TIM6
// #define TIMER_SERVO             TIM7

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#define SERIAL_UART_INSTANCE    1

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PB9
#define PIN_SERIAL_TX           PB8

/* HAL configuration */
#define HSE_VALUE 12000000U

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus

#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
