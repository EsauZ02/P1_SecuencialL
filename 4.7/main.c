/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 04:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * area y circunferencia de un circulo
 */
int main(int argc, char** argv) {

    float r;
    float a;
    float c;
    
    printf("Inserta el valor del radio de un circulo\n");
    scanf("%f", &r);
    
    if(r <= 0){
        printf("no tiene solución");
    }else{
    a = 3.1416 * pow(r,2);
    
    printf("El área es:%f\n\n", a);
    
    c = (r * 2) * 3.1416;
    
    printf("La circunferencia es:%f", c);
    
    }
    return (EXIT_SUCCESS);
}

