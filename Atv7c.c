#include<stdio.h>

int main(){
 // Numero inteiro N depois imprima os N primeiros numeros naturais impares.

    int numero;
    int contador;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    for(contador = 1; contador <= numero; contador+= 2){
        printf("\n%d", contador);

    }
}
