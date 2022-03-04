//codigo para los números pares e impares
#include <stdio.h>

int main(){
    int rango; //Definimos la variable del rango hasta donde vamos a dividir los pares e impares
    printf("insert a number: ");
    scanf("%d",&rango);

    // Escribe los números pares desde el 0 hasta el rango
    printf("even numbers from 0 to %d (",rango);
    for(int i = 2; i <= rango; i =  i + 2){
        printf("%d, ",i);
    }
    printf(")");

    // Escribe los números impares desde el 0 hasta el rango
    printf("\nodd numbers from 0 to %d (",rango);
    for(int i = 1; i <= rango; i =  i + 2){
        printf("%d, ",i);
    }
    printf(")\n");
}