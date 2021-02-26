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
    botao_init();
    
    while(1)
    {
        switch(estado )
        {
            case 0:
                if( s1 () == 1 )
        }           estado = 1;
        if( s1() == 1 )
        {
        display (cont++ ); 
        
        }        
        if( cont >= 16 )
            cont = 0;
    }   
}
