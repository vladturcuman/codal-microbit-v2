/*
The MIT License (MIT)

Copyright (c) 2017 Lancaster University.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

/**
  * Class definition for MicroBit NEXT IO.
  * Represents a collection of all I/O pins on the device.
  */

#include "CodalConfig.h"
#include "MicroBitIO.h"

using namespace codal;

/**
  * Constructor.
  *
  * Create a representation of all given I/O pins on the edge connector
  *
  * Accepts a sequence of unique ID's used to distinguish events raised
  * by MicroBitPin instances on the default EventModel.
  */
MicroBitIO::MicroBitIO(NRF52ADC &a, TouchSensor &s) :

    // Edge Connector Pins
    P0(ID_PIN_P2, P0_02, PIN_CAPABILITY_AD),           // P0_02
    P1(ID_PIN_P3, P0_03, PIN_CAPABILITY_AD),           // P0_03
    P2(ID_PIN_P4, P0_04, PIN_CAPABILITY_AD),           // P0_04
    P3(ID_PIN_P31, P0_31, PIN_CAPABILITY_AD),          // P0_31
    P4(ID_PIN_P28, P0_28, PIN_CAPABILITY_AD),          // P0_28
    P5(ID_PIN_P14, P0_14, PIN_CAPABILITY_AD),          // P0_14
    P6(ID_PIN_P37, P1_5, PIN_CAPABILITY_AD),           // P1_05
    P7(ID_PIN_P11, P0_11, PIN_CAPABILITY_AD),          // P0_11
    P8(ID_PIN_P10, P0_10, PIN_CAPABILITY_AD),          // P0_10
    P9(ID_PIN_P9, P0_09, PIN_CAPABILITY_AD),           // P0_09
    P10(ID_PIN_P30, P0_30, PIN_CAPABILITY_AD),         // P0_30
    P11(ID_PIN_P23, P0_23, PIN_CAPABILITY_AD),         // P0_23
    P12(ID_PIN_P12, P0_12, PIN_CAPABILITY_AD),         // P0_12
    P13(ID_PIN_P17, P0_17, PIN_CAPABILITY_AD),         // P0_17
    P14(ID_PIN_P1, P0_01, PIN_CAPABILITY_AD),          // P0_01
    P15(ID_PIN_P13, P0_13, PIN_CAPABILITY_AD),         // P0_13
    P16(ID_PIN_P34, P1_02, PIN_CAPABILITY_AD),         // P1_02
    P19(ID_PIN_P26, P0_26, PIN_CAPABILITY_AD),         // P0_26
    P20(ID_PIN_P32, P1_00, PIN_CAPABILITY_AD),         // P1_00

    // Other exposed pins
    face(ID_PIN_P36, P1_04, PIN_CAPABILITY_AD),        // P1_04

    // Internal Pins
    speaker(ID_PIN_P0, P0_00, PIN_CAPABILITY_AD),      // P0_00
    runmic(ID_PIN_P20, P0_20, PIN_CAPABILITY_AD),      // P0_20
    microphone(ID_PIN_P5, P0_05, PIN_CAPABILITY_AD),   // P0_05
    sda(ID_PIN_P16, P0_16, PIN_CAPABILITY_AD),         // P0_16
    scl(ID_PIN_P8, P0_08, PIN_CAPABILITY_AD),          // P0_08
    row1(ID_PIN_P21, P0_21, PIN_CAPABILITY_AD),        // P0_21
    row2(ID_PIN_P22, P0_22, PIN_CAPABILITY_AD),        // P0_22
    row3(ID_PIN_P15, P0_15, PIN_CAPABILITY_AD),        // P0_15
    row4(ID_PIN_P24, P0_24, PIN_CAPABILITY_AD),        // P0_24
    row5(ID_PIN_P19, P0_19, PIN_CAPABILITY_AD),        // P0_19
    usbTx(ID_PIN_P38, MICROBIT_PIN_UART_TX, PIN_CAPABILITY_DIGITAL),
    usbRx(ID_PIN_P39, MICROBIT_PIN_UART_RX, PIN_CAPABILITY_DIGITAL),
    irq1(ID_PIN_P25, P0_25, PIN_CAPABILITY_AD),        // P0_25

    // Aliases
    col1(P4),
    col2(P7),
    col3(P3),
    col4(P6),
    col5(P10),
    buttonA(P5),
    buttonB(P11)
{
  pins = 33;
  NRF52Pin::adc = &a;
  NRF52Pin::touchSensor = &s;
}
