#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int num;
    int soma;
    int prime;

    printf("escreva qualquer numero para fazer uma soma no final, digite 0 para mostra a soma total. \n");
    scanf("%d", &prime);

    for(i = prime; i > 0; i++){

        printf("escreva qualquer numero para fazer uma soma no final, digite 0 para mostra a soma total. \n");
        scanf("%d", &num);

        if(num == 0){
            i = -1;
        }

        soma = soma + num;

        if(soma == 0){
            printf("voce nao colocou numeros validos para soma\n");
        }

    }

    printf("a soma total foi: %d", soma);

    return 0;
}