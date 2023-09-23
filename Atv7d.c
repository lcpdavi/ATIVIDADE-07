#include<stdio.h>

int main(){

int numero = 1, contador = 0;
 //determine e mostre os cinco primeiros multiplos de 3 considerando numeros maiores que 0.


    printf("Digite um numero:\n");
    scanf("%d", &numero);

    while(contador < 5){

        if (numero % 3 == 0){
         printf("\n%d", numero);
         contador++;
        
        }

     numero++;

    }

}