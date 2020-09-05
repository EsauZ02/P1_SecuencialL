/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 04:17 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Num negativo o positivo con ?
 */
int main(int argc, char** argv) {

    int numero;
    int positivo, negativo;
    
    printf("introduce cualquíer número (positivo o negativo)\n");
    scanf("%d", &numero);
    
    numero > 0 ? printf("positivo") : printf("negativo");
    
    return (EXIT_SUCCESS);
}

