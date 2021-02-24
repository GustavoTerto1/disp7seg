


#include <xc.h>

void  display7seg_int ( void )
{ 
    TRISD = 0x00;
    PORTD = 0x00;
}
void display ( int c )
{
    PORTD = c;
}