#include<stdio.h>

int main(){
    
    char sexo, olhos, cabelo;
    int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade, opcao;
    float salario, porcentagem;

    //cadastrar um habitante em cada repetição

    do{
        //contar cada habitante
        totalHabitantes++;

        //preencher e validar o campo sexo
        do{
            fflush(stdin);
            printf("Digite o sexo:(m ou f)\n");
            scanf("%c", &sexo);

            if(sexo != 'm' && sexo != 'f'){
                printf("\nopcaoinvalida\n");

            }

        }while(sexo != 'm' && sexo != 'f');

         //preencher e validar o campo olhos
        do{
            fflush(stdin);
            printf("Digite o cor dos olhos:\na (azul).\nv (verde).\nc (castanho).\np (preto).\n");
            scanf("%c", &olhos);

            if(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p'){
                printf("\nopcaoinvalida\n");

            }

        }while(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');

          //preencher e validar o campo cabelo
        do{
            fflush(stdin);
            printf("Digite o cor do cabelo:\nl (loiros).\nc (castanhos).\np (pretos).\nr (ruivos).\n");
            scanf("%c", &cabelo);

            if(cabelo != 'l' && cabelo != 'c' && cabelo != 'p' && cabelo != 'r'){
                printf("\nopcaoinvalida\n");

            }

        }while(cabelo != 'l' && cabelo != 'c' && cabelo != 'p' && cabelo != 'r');

        //preencher e validar o campo idade
        do{
            fflush(stdin);
            printf("Digite a idade:\n");
            scanf("%d", &idade);

            if(idade < 10 || idade > 100){
                printf("\nopcaoinvalida\n");

            }

        }while(idade < 10 || idade > 100);

        //preencher e validar o campo salario
        do{
            fflush(stdin);
            printf("Digite a salario:\n");
            scanf("%f", &salario);

            if(idade < 0){
                printf("\nopcaoinvalida\n");

            }

        }while(salario < 0);

        if(sexo == 'f' && olhos == 'c' && cabelo == 'c' && (idade > 18 && idade < 35) ){
            totalEspecifico++;
        }

        printf("Deseja cadastrar um novo habitante: 1 - Sim 2 - Nao\n");
        scanf("%d", &opcao);


       
    }while(opcao != -1);

    porcentagem = (float)totalEspecifico/totalHabitantes * 100;

    printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
    printf("\nTotal de mulheres cadastradas: %d", totalF);
    printf("\nTotal de homens cadastradas: %d", totalM);
    printf("\nPorcentagem de pessoas com caracteristicas especificas: %.2f", porcentagem);

}