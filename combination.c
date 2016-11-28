/*
 * File:   combination.c
 * Author: Arjun
 *
 * Created on November 28, 2016, 12:58 PM
 */

#include<xc.h>
unsigned char IN @0x81;
#define _XTAL_FREQ 20000000 
char UART_Init(const long int baudrate)
{
  	BRGH = 1;
    SPBRG = 129; //Writing SPBRG register
    SYNC = 0; //Selecting Asynchronous Mode
    SPEN = 1; //Enables Serial Port
    TRISC7 = 1;  
    TRISC6 = 1; 
    CREN = 1; //Enables Continuous Reception
    TXEN = 1; //Enables Transmission
    return 1;
 
}
char UART_Data_Ready()
{
  return RCIF;
}
char UART_Read()
{
  while(!RCIF); //Waits for Reception to complete
  return RCREG; //Returns the 8 bit data
}
void m1rotate0()
{
RC0=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF9;
while(!T0IF);
T0IF=0;
RC0=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m1rotate45()
{
RC0=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF7;
while(!T0IF);
T0IF=0;
RC0=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m1rotate90()
{
RC0=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF4;
while(!T0IF);
T0IF=0;
RC0=0;
T0IF=0;
IN=0x47;
TMR0=0x6f;
while(!T0IF);
T0IF=0;
}
void m1rotate135()
{
RC0=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC0=0;
T0IF=0;
IN=0x47;
TMR0=0x71;
while(!T0IF);
T0IF=0;
}
void m1rotate180()
{
RC0=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC0=0;
T0IF=0;
IN=0x47;
TMR0=0x73;
while(!T0IF);
T0IF=0;
}
/********************/
void m2rotate0()
{
RC1=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF9;
while(!T0IF);
T0IF=0;
RC1=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m2rotate45()
{
RC1=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF7;
while(!T0IF);
T0IF=0;
RC1=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m2rotate90()
{
RC1=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF4;
while(!T0IF);
T0IF=0;
RC1=0;
T0IF=0;
IN=0x47;
TMR0=0x6f;
while(!T0IF);
T0IF=0;
}
void m2rotate135()
{
RC1=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC1=0;
T0IF=0;
IN=0x47;
TMR0=0x71;
while(!T0IF);
T0IF=0;
}
void m2rotate180()
{
RC1=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC1=0;
T0IF=0;
IN=0x47;
TMR0=0x73;
while(!T0IF);
T0IF=0;
}
/**********************/
void m3rotate0()
{
RC2=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF9;
while(!T0IF);
T0IF=0;
RC2=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m3rotate45()
{
RC2=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF7;
while(!T0IF);
T0IF=0;
RC2=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m3rotate90()
{
RC2=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF4;
while(!T0IF);
T0IF=0;
RC2=0;
T0IF=0;
IN=0x47;
TMR0=0x6f;
while(!T0IF);
T0IF=0;
}
void m3rotate135()
{
RC2=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC2=0;
T0IF=0;
IN=0x47;
TMR0=0x71;
while(!T0IF);
T0IF=0;
}
void m3rotate180()
{
RC2=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC2=0;
T0IF=0;
IN=0x47;
TMR0=0x73;
while(!T0IF);
T0IF=0;
}
/************************/
void m4rotate0()
{
RC3=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF9;
while(!T0IF);
T0IF=0;
RC3=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m4rotate45()
{
RC3=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF7;
while(!T0IF);
T0IF=0;
RC3=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m4rotate90()
{
RC3=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF4;
while(!T0IF);
T0IF=0;
RC3=0;
T0IF=0;
IN=0x47;
TMR0=0x6f;
while(!T0IF);
T0IF=0;
}
void m4rotate135()
{
RC3=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC3=0;
T0IF=0;
IN=0x47;
TMR0=0x71;
while(!T0IF);
T0IF=0;
}
void m4rotate180()
{
RC3=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC3=0;
T0IF=0;
IN=0x47;
TMR0=0x73;
while(!T0IF);
T0IF=0;
}
/********************/
void m5rotate0()
{
RC4=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF9;
while(!T0IF);
T0IF=0;
RC4=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m5rotate45()
{
RC4=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF7;
while(!T0IF);
T0IF=0;
RC4=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m5rotate90()
{
RC4=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF4;
while(!T0IF);
T0IF=0;
RC4=0;
T0IF=0;
IN=0x47;
TMR0=0x6f;
while(!T0IF);
T0IF=0;
}
void m5rotate135()
{
RC4=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC4=0;
T0IF=0;
IN=0x47;
TMR0=0x71;
while(!T0IF);
T0IF=0;
}
void m5rotate180()
{
RC4=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC4=0;
T0IF=0;
IN=0x47;
TMR0=0x73;
while(!T0IF);
T0IF=0;
}
/***********************/
void m6rotate0()
{
RC5=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF9;
while(!T0IF);
T0IF=0;
RC5=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m6rotate45()
{
RC5=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF7;
while(!T0IF);
T0IF=0;
RC5=0;
T0IF=0;
IN=0x47;
TMR0=0x69;
while(!T0IF);
T0IF=0;
}
void m6rotate90()
{
RC5=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF4;
while(!T0IF);
T0IF=0;
RC5=0;
T0IF=0;
IN=0x47;
TMR0=0x6f;
while(!T0IF);
T0IF=0;
}
void m6rotate135()
{
RC5=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC5=0;
T0IF=0;
IN=0x47;
TMR0=0x71;
while(!T0IF);
T0IF=0;
}
void m6rotate180()
{
RC5=1;
T0IF=0;
T0IF=0;
IN=0x47;
TMR0=0xF0;
while(!T0IF);
T0IF=0;
RC5=0;
T0IF=0;
IN=0x47;
TMR0=0x73;
while(!T0IF);
T0IF=0;
}
void main()
{
   
   char rec=0;
   TRISB = 0x00;
PORTB=0XFF; //PORTB as Output
   UART_Init(9600);
  

   do
   {
      if(UART_Data_Ready()){       
        rec = UART_Read();
     __delay_ms(100);
						}
       if(rec!=0.){
    
        
       PORTB=0X00; 
	__delay_ms(1000);
       }
      else if(rec!='a'){
          PORTB=0Xff;
      }
else if(rec=='b')
{
PORTB=0X0A; 
}
 else if(rec=='c'){
  PORTB=0X09;  
 }
 else if(rec=='d'){
  PORTB=0X06;  
    }
      
 else if(rec=='e'){
     m1rotate0;
 } 
 else if(rec=='f'){
     m1rotate90;
 }
 else if(rec=='g'){
     m2rotate0;
 } 
 else if(rec=='h'){
     m2rotate45;
 }
 else if(rec=='i'){
     m3rotate0;
 }
 else if(rec=='j'){
     m3rotate45;
 } 
 else if(rec=='k'){
     m4rotate0;
 }
 else if(rec=='l'){
     m4rotate45;
 }
 else if(rec=='m'){
     m5rotate0;
 }
 else if(rec=='n'){
     m5rotate45;
 }
 else if(rec=='o'){
     m6rotate0;
 }
 else if(rec=='p'){
     m6rotate45;
 }      
      
   }while(1);
}