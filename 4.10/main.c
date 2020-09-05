/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 05:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 3 numeros, si el tersero es + calcular suma, si no producto
 */
int main(int argc, char** argv) {

    int n1, n2, n3;
    int suma, producto;
    
    printf("inserte 3 numeros\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if( n3 < 0){
        producto = n1 * n2 * n3;
        printf("El producto es:%d", producto);
    }else{
        suma = n1 + n2 + n3;
        printf("La suma es:%d", suma);
    }
    
    return (EXIT_SUCCESS);
}

