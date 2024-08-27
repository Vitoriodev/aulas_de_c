#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;

    //primeiro numero.
    printf("\ncoloque um numero: \n");
    scanf("%d", &num1);

    //segundo numero
    printf("\ncoloque outro numero: \n");
    scanf("%d", &num2);

    //condição para saber o maior numero.
    if(num1 > num2){

        printf("\no numero %d e maior que %d", num1, num2);


    }
    else{

        printf("\no numero %d e maior que %d", num2, num1);
    }

}