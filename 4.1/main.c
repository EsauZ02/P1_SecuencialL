/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 03:51 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * convertidor de grados celsius a fahrenheit
 */
int main(int argc, char** argv) {

    float grados;
    float F;
    
    printf("por favor ingrese una temperatura en grados celsius:\n");
    scanf("%f", &grados);
    
    F = ((grados * 9)/5) + 32;
    
    printf("el equivalente de los grados C en grados Fahrenheit es:%f\n", F);
    
    return (EXIT_SUCCESS);
}

