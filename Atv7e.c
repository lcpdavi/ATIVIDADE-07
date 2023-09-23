#include<stdio.h>

int main(){
    // Calcule e mostre a soma dos 50 primeiros numeros pares.

    int numero = 2, contador, soma = 0, resultado;

    for (contador = 2; contador <= 50; contador+= 2) {

        soma += numero;
        numero += 2;
        numero++;

        resultado = 2 + contador;
        printf(" 2 + %d = %d\n", contador, resultado);

    }

}  