/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 04:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * saber si un año es bisiesto
 */
int main(int argc, char** argv) {

    int anio;
    
    printf("Inserte un año y se le dirá si es bisiesto o no lo es:\n");
    scanf("%d", &anio);
    
    if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){
        printf("El año es bisiesto");
    }else{
        printf("El año es no bisiesto");
    }
    
    return (EXIT_SUCCESS);
}

