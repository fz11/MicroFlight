// Group 11 Micro 1 Lab Project 
// Code is for Piezo Buzzer only.
#include "mcc_generated_files/mcc.h"
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {

    SYSTEM_Initialize();

    int i;
    while (1) { //;loops true -> goes on
        for (;;) {  
            RC3 = 1;
            /*** 
            song 1
             __delay_ms(300);
             PR2 = 255;
             CCPR2L = 0b01110010;
            
             __delay_ms(300);
             PR2 = 227;
             CCPR2L = 0b01110010;
            
             __delay_ms(300);
             PR2 = 255;
             CCPR2L = 0b01100110;
            
             __delay_ms(300);
             PR2 = 227;
             CCPR2L = 0b01110010;
            
             __delay_ms(300);
             PR2 = 255;
             CCPR2L = 0b01100110;
            
             __delay_ms(350);
             PR2 = 204;
             CCPR2L = 0b01110010;
            
             __delay_ms(700);
             PR2 = 127;
             CCPR2L = 0b01100110;
            
             __delay_ms(300);
             PR2 = 227;
             CCPR2L = 0b01110010;
          
             __delay_ms(300);
             PR2 = 170;
             CCPR2L = 0b01100110;    
          
             __delay_ms(300);
             PR2 = 127;
             CCPR2L = 0b01110010;   
            
             __delay_ms(300);
             PR2 = 136;
             CCPR2L = 0b01110010;
           
             __delay_ms(300);
             PR2 = 127;
             CCPR2L = 0b01110010;
           
             __delay_ms(300);
             PR2 = 136;
             CCPR2L = 0b01110010;
            
             __delay_ms(300);
             PR2 = 204;
             CCPR2L = 0b01110010;
            
             __delay_ms(700);
             PR2 = 127;
             CCPR2L = 0b01110010;
            
             __delay_ms(300);
             PR2 = 170;
             CCPR2L = 0b01110010;
            
             __delay_ms(300);
             PR2 = 191;
             CCPR2L = 0b01110010;
            
             __delay_ms(300);
             PR2 = 204;
             CCPR2L = 0b01110010;
            
             __delay_ms(500);
             PR2 = 227;
             CCPR2L = 0b01110010;
            
             __delay_ms(500);
             PR2 = 255;
             CCPR2L = 0b01110010;
                
             __delay_ms(500);
             PR2 = 281;
             CCPR2L = 0b01110010;
       
            
            song 2
              __delay_ms(500);
             PR2 = 191;
             CCPR2L = 0b01110010;
            
              __delay_ms(450);
             PR2 = 170;
             CCPR2L = 0b01110010;
            
              __delay_ms(400);
             PR2 = 153;
             CCPR2L = 0b01110010;
            
              __delay_ms(350);
             PR2 = 136;
             CCPR2L = 0b01110010;
            
              __delay_ms(350);
             PR2 = 153;
             CCPR2L = 0b01110010;
            
              __delay_ms(400);
             PR2 = 170;
             CCPR2L = 0b01110010;
            
              __delay_ms(450);
             PR2 = 191;
             CCPR2L = 0b01110010;
            
              __delay_ms(500);
             PR2 = 204;
             CCPR2L = 0b01110010;
            
              __delay_ms(200);
             PR2 = 281;
             CCPR2L = 0b01110010; **/

            // song 3
            __delay_ms(200); //length of note
            PR2 = 294; // Period 2 for Timer 2
            CCPR2L = 0b01110010; // PWM duty cycle register 


            __delay_ms(300); //interrupt/pause
            PR2 = 1;
            CCPR2L = 0b01110010; 


            __delay_ms(200);
            PR2 = 294;
            CCPR2L = 0b01110010;

            __delay_ms(300); //interrupt/pause
            PR2 = 1;
            CCPR2L = 0b01110010;

            __delay_ms(200);
            PR2 = 294;
            CCPR2L = 0b01110010;

            __delay_ms(300); //interrupt/pause
            PR2 = 1;
            CCPR2L = 0b01110010;

            __delay_ms(350);
            PR2 = 440;
            CCPR2L = 0b01110010;

            __delay_ms(200);
            PR2 = 400;
            CCPR2L = 0b01110010;

            __delay_ms(200);
            PR2 = 392;
            CCPR2L = 0b01110010;

            __delay_ms(200);
            PR2 = 349;
            CCPR2L = 0b01110010;

            __delay_ms(200);
            PR2 = 294;
            CCPR2L = 0b01110010;

            __delay_ms(200);
            PR2 = 349;
            CCPR2L = 0b01110010;

            __delay_ms(200);
            PR2 = 392;
            CCPR2L = 0b01110010;
            //end
        }
    }
}
