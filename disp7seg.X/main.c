/*
 * File:   main.c
 * Author: 20185147
 *
 * Created on 24 de Fevereiro de 2021, 14:11
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "disp7seg.h"

void main(void) 
{
    int cont = 0;
    display7seg_int();
    
    while(1)
    {
        display(cont );
        delay( 1000 );
        cont++;
        if( cont >= 16 )
            cont = 0;
    }   
}
