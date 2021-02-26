


#include <xc.h>
#include "config.h"

#define S1   PORTDbits.RD1
#define S0   PORTDbits.RD0


char vetor[16] = { 0x3F, 0x06, 0x5B, 0x4F,0x66, 
                   0x6D, 0x7D, 0x07, 0x7F,0x6F, 
                   0x77, 0x7C, 0x39, 0x5E,0x79,0x71};

void  display7seg_int ( void )
{ 
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
}
void display ( int c )
{
    PORTD = vetor [c];
}
void botao_init (void)
{
   TRISDbits.TRISD0 = 1;
   TRISDbits.TRISD1 = 1; 
}
int s1 (void)
  {
    return (S1);
  }

int s0 (void)
{
   return (S0);
}