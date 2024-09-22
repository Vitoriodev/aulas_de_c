#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int num = 0, cont = 0;
    int par;
    int quanto;
    int escolhar;

    printf("1 para par, 2 para impar\n");
    scanf("%d", &escolhar);

    if(escolhar == 1){
        printf("quantos numeros par que voce quer que apareca?\n");
        scanf("%d", &quanto);

        printf("----------------------------------------------\n");

        quanto = quanto * 2;

        for (i = 0; i < quanto; i++){

            cont++;

            num = cont;

            par = num % 2;

            if(par == 0){

                printf("%d\n", cont);

            }

            num = 0;

        }

    }
    else{
        printf("quantos numeros impar que voce quer que apareca?\n");
        scanf("%d", &quanto);

        printf("----------------------------------------------\n");

        quanto = quanto * 2;

        for (i = 0; i < quanto; i++){

            cont++;

            num = cont;

            par = num % 2;

            if(par == 1){

                printf("%d\n", cont);

            }

            num = 0;

        }
    }
    


    return 0;
}