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
    int i;
    long time = 255*10;
    unsigned char redWidth;
    unsigned char greenWidth;
    unsigned char blueWidth;

    while(1) {
        for (hue = 0; hue < 360; hue += 16) {
            switch (hue / 60) {
                case 0:
                    redWidth = max;
                    greenWidth = hue * (max - min) / 60 + min;
                    blueWidth = min;
                    break;
                case 1:
                    redWidth = (120 - hue) * (max - min) / 60 + min;
                    greenWidth = max;
                    blueWidth = min;
                    break;
                case 2:
                    redWidth = min;
                    greenWidth = max;
                    blueWidth = (hue - 120) * (max - min) / 60 + min;
                    break;
                case 3:
                    redWidth = min;
                    greenWidth = (240 - hue) * (max - min) / 60 + min;
                    blueWidth = max;
                    break;
                case 4:
                    redWidth = (hue - 240) * (max - min) / 60 + min;
                    greenWidth = min;
                    blueWidth = max;
                    break;
                case 5:
                    redWidth = max;
                    greenWidth = min;
                    blueWidth = (360 - hue) * (max - min) / 60 + min;
            }

            red = 0;
            green = 255 / 3;
            blue = 255 / 3 * 2;
            for (i = 0; i < time; i++) {
                if (red > redWidth) RED_LED_LAT = 0;
                if (green > greenWidth) GREEN_LED_LAT = 0;
                if (blue > blueWidth) BLUE_LED_LAT = 0;
                if (red <= 8) RED_LED_LAT = 1;
                if (green <= 8) GREEN_LED_LAT = 1;
                if (blue <= 8) BLUE_LED_LAT = 1;
                red += 8;
                green += 8;
                blue += 8;
                __delay_us(1);
            }
        }
    }
}
/**
 End of File
*/