/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 04:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * convertidor de formato de hora
 */
int main(int argc, char** argv) {

    int h;
    int m;
    
    printf("Por favor ingrese una hora en notación 24 hrs(13:45):\n");
    scanf("%d:%d", &h, &m);
    
    if( h > 12){
        h = h - 12;
        printf("%d:%d", h, m);
    }else{
        printf("%d:%d", h, m);
    }
    
    return (EXIT_SUCCESS);
}

