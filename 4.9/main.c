/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 05:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * de 3 digitus calcular suma y producto
 */
int main(int argc, char** argv) {

    int n1, n2, n3;
    int suma, producto;
    
    printf("Ingrese 3 numeros\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    suma = n1 + n2 + n3;
    printf("la suma es:%d\n", suma);
    
    producto = n1 * n2 * n3;
    printf("el producto es:%d", producto);
    
    return (EXIT_SUCCESS);
}

