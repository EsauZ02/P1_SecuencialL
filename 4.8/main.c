/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 04:56 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * volumen y area de un cono
 */
int main(int argc, char** argv) {

    float r;
    float h;
    float v;
    float a;
    float hipotenusa;
    
    printf("inserte el radio de un cono\n");
    scanf("%f", &r);
    printf("inserte la altura del cono\n");
    scanf("%f", &h);
    
    if( r <= 0 || h <= 0){
        printf("no tiene solución");
    }else{
        v = (3.1416 * pow(r,2) * h)/3;
        printf("el volumen es:%f \n\n", v);
        
        hipotenusa = sqrt(pow(r,2)+pow(h,2));
        
        a = 3.1416 * r * (hipotenusa + r);
        printf("El area total es:%f\n", a);
                 
    }
    
    return (EXIT_SUCCESS);
}

