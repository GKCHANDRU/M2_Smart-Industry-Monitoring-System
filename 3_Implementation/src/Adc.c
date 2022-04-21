#include"adc.h"
#include"uart.h"
intmain()
{
int adcValue;
int temp;
int Smoke;
ADC_Init();       
UART_Init(9600);  
while(1){
adcValue = ADC_GetAdcValue(0); 
Smoke = ADC_GetAdcValue(1); 
temp = adcValue/2.0; 
UART_Printf("ADC0 Value:%4d  Equivalent Temperature:%dC\n\r",adcValue,temp);     
}
return (0);
}
