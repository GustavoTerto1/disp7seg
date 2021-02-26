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
    char estado = 0;
    while(1)
    {
        switch (estado )
        {
            case 0:
                if( s1 () == 1 )
                   estado = 1;
                break;
                
            case 1:    
                    if (s1 () == 0 )
                        estado = 2;
                    break;
                    
            case 2:
                    ++cont;
                    estado = 0;
                    break;
        }        
        
        
        if( cont >= 16 )
            cont = 0;
        if( cont< 0 )
            cont = 9;
    }   
}
