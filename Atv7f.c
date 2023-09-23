#include<stdio.h>
#include<stdlib.h>

int main(){
    /*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de
    frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu
    frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 
    1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade*/ 

    int opcao, codigo, quantidade, precoFruta;
    float valorFinal = 0;

    do{

     printf("Lista de frutas:\n");
     printf("1. Abacaxi - 5,00.\n");
     printf("2. Maca - 1,00.\n");
     printf("3. Pera - 4,00.\n");
     printf("4. Melancia - 10,00.\n");

     printf("insira o codigo da fruta:\n");
     scanf("%d", &codigo);

     printf("Digite a quantidade desejada: ");
     scanf("%d", &quantidade);

    switch(codigo){
        case 1: 
         precoFruta = 5.00;
         valorFinal += precoFruta * quantidade; 
         break;

        case 2:
         precoFruta = 1.00;
         valorFinal += precoFruta * quantidade;
         break;

        case 3:
         precoFruta = 4.00;
         valorFinal += precoFruta * quantidade;
         break;

        case 4:
         precoFruta = 10.00; 
         valorFinal += precoFruta * quantidade;
         break;

        default:
         printf("nenhuma das opcoes.\n");
     
    }
     printf("Deseja adicionar mais algum pedido? 1 - sim, 0 - nao. \n");
    scanf("%d", &opcao);


    }while(opcao != 0);

    printf("valor final do pedido: %.2f\n", valorFinal);
}