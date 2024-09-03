#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero[5];
    int i;
    int soma;
    int maior_num = 0, menor_num = 0;

    for(i = 0; i < 5; i++){
        printf("\ncoloque um numero:  ");
        scanf("%d", &numero[i]);

        

        if(numero[i] > maior_num){
            maior_num = numero[i];
            
        }
        if(numero[i] < maior_num){ //esta com um erro de nao pegar o menor numero
            menor_num = numero[i];
        }

        soma += numero[i];

    }

    printf("\na soma total dos numeros foi: %d", soma);
    printf("\no menor numero foi: %d", menor_num);
    printf("\no maior numero foi: %d", maior_num);

    return 0;
}