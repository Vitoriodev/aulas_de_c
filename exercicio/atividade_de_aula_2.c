#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int num, num2 = 1 ;
    int resul = 0;
    int conta = 0;

    printf("qual numero voce quer multiplica por dois? \n");
    scanf("%d", &num);

    resul = num * num2++; //primeira multiplicação.



    for(i = 0; i < 10; i++){

        conta++;
        
        printf("%d * %d = %d\n",num, conta, resul);

        resul = num * num2++;
    }



    return 0;
}