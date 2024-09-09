#include <stdio.h>
#include <stdlib.h>

void bem_vindo(){

    printf("\nola sejam bem vindo ao consutar de horas trabalhadas.");

    printf("\naqui voce vamos ver quantas horas foram trabalhadas e a medias das horas.\n");

}

int main(){

    int i;
    int hora_e, soma = 0;
    int menor = -1, maior= 0, num = 0, media;

    bem_vindo();
    
    for(i = 2; i > 1; i++){

        
        printf("quantas horas voce trabalhou? ");
        scanf("%d", &hora_e);

        //essa vairiavel serve para fazer uma contagem de pessoas para tira a media.
        num++;

        //codicao de maior horas_e
        if(hora_e > maior){
            maior = hora_e;

            // quando o menor estiver em um negativo vai poder receber uma vez o valor maior
            // para poder funciona a condicao de receber a menor horas_e
            if(menor == -1){
                menor = maior;
            }
        }

        //condicao de menor horas_e
        if (hora_e < menor){
            menor = hora_e;
        }
        

        soma += hora_e;

        printf("voce quer fimaliza esse processo ser sim coloque um 0: ");
        scanf("%d", &i);

    }

    media = soma/num;

    // as informacoes que foram coletadas.

    printf("\na soma das pessoas sao: %d", soma);

    printf("\na menor horas trabalhada foi: %d", menor);

    printf("\na maior horas trabalhada foi: %d", maior);

    printf("\na media das pessoas foi: %d", media);

    return 0;
}