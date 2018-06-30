/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC12F1822
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    unsigned short max = 255;
    unsigned short min = 0;
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned short hue = 0;
    int count = 0;
    int i, j;
    long time = 400;
    unsigned char redWidth;
    unsigned char greenWidth;
    unsigned char blueWidth;
    unsigned char width[36];
    
    for (i = 0; i < 12; i++) {
        width[i] = max;
    }
    for (i = 12; i < 18; i++) {
        width[i] = (18 - i) * 255 / 6 + min;
    }
    for (i = 18; i < 30; i++) {
        width[i] = min;
    }
    for (i = 30; i < 36; i++) {
        width[i] = (i - 30) * 255 / 6 + min;
    }

    red = 0;
    green = 255 / 3;
    blue = 255 / 3 * 2;
    i = 6;
    while(1) {
        redWidth = width[i%36];
        greenWidth = width[(i+24)%36];
        blueWidth = width[(i+12)%36];
        for (j = 0; j < time; j++) {
            if (red < redWidth) RED_LED_LAT = 1;
            else RED_LED_LAT = 0;
            if (green < greenWidth) GREEN_LED_LAT = 1;
            else GREEN_LED_LAT = 0;
            if (blue < blueWidth) BLUE_LED_LAT = 1;
            else BLUE_LED_LAT = 0;
            red += 100;
            green += 100;
            blue += 100;
            __delay_us(1);
        }
        if (i < 36) i++;
        else i = 0;
    }
}
/**
 End of File
*/