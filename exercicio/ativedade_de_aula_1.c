#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int num = 0, cont = 0;
    int par;
    int quanto;

    printf("quantos numeros par que voce quer que apareca?\n");
    scanf("%d", &quanto);

    printf("----------------------------------------------1\n");

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


    return 0;
}