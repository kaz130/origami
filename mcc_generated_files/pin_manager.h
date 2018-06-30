/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC12F1822
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_ANS                  ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_RA1 aliases
#define IO_RA1_TRIS                 TRISAbits.TRISA1
#define IO_RA1_LAT                  LATAbits.LATA1
#define IO_RA1_PORT                 PORTAbits.RA1
#define IO_RA1_WPU                  WPUAbits.WPUA1
#define IO_RA1_ANS                  ANSELAbits.ANSA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RED_LED aliases
#define RED_LED_TRIS                 TRISAbits.TRISA2
#define RED_LED_LAT                  LATAbits.LATA2
#define RED_LED_PORT                 PORTAbits.RA2
#define RED_LED_WPU                  WPUAbits.WPUA2
#define RED_LED_ANS                  ANSELAbits.ANSA2
#define RED_LED_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RED_LED_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RED_LED_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RED_LED_GetValue()           PORTAbits.RA2
#define RED_LED_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RED_LED_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RED_LED_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define RED_LED_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define RED_LED_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define RED_LED_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set GREEN_LED aliases
#define GREEN_LED_TRIS                 TRISAbits.TRISA4
#define GREEN_LED_LAT                  LATAbits.LATA4
#define GREEN_LED_PORT                 PORTAbits.RA4
#define GREEN_LED_WPU                  WPUAbits.WPUA4
#define GREEN_LED_ANS                  ANSELAbits.ANSA4
#define GREEN_LED_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define GREEN_LED_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define GREEN_LED_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define GREEN_LED_GetValue()           PORTAbits.RA4
#define GREEN_LED_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define GREEN_LED_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define GREEN_LED_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define GREEN_LED_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define GREEN_LED_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define GREEN_LED_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set BLUE_LED aliases
#define BLUE_LED_TRIS                 TRISAbits.TRISA5
#define BLUE_LED_LAT                  LATAbits.LATA5
#define BLUE_LED_PORT                 PORTAbits.RA5
#define BLUE_LED_WPU                  WPUAbits.WPUA5
#define BLUE_LED_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define BLUE_LED_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define BLUE_LED_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define BLUE_LED_GetValue()           PORTAbits.RA5
#define BLUE_LED_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define BLUE_LED_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define BLUE_LED_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define BLUE_LED_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/