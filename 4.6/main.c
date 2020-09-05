/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 04:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * de 3 numeros calcular la media
 */
int main(int argc, char** argv) {

    float n1;
    float n2;
    float n3;
    float m;
    
    printf("Por favor inserte 3 numeros para calcular la media\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    m = ((n1 + n2 + n3)/3);
    
    printf("La media es: %f \n", m);
    
    return (EXIT_SUCCESS);
}

