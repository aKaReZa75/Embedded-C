#include "aKaReZa.h"
          
char lcd[16];
uint16_t ans=0;
    
void main(void)
{ 
  lcd_init(16);
  ans = Sum(25, 25);
  sprintf(lcd, "ans=%u", ans);
  lcd_puts(lcd); 
  delay_ms(1000);
  sayHello();
  delay_ms(1000);
  printSum();       
  while(1)
  {
    staticVarFun();
    delay_ms(1000); 
  };            
};

