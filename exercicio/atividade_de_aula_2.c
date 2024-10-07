#include <stdio.h>
#include <stdlib.h>

void tabela(){

    printf("sejam bem vindo, selecione o numero para qual tipo de tabuada voc quer\n ");
    printf("* = 1, + = 2, - = 3, / = 4\n"); 
}

int main(){

    int i;
    int num, num2 = 1 ;
    int resul = 0;
    int conta = 0;
    int caract;

    tabela();
    scanf("%d", &caract);

    if(caract == 1){
        printf("qual numero que voce quer na tabuada \n");
        scanf("%d", &num);

        resul = num * num2++; //primeira multiplicação.



        for(i = 0; i < 10; i++){

            conta++;
        
            printf("%d * %d = %d\n",num, conta, resul);

            resul = num * num2++;
        }

    }

    if(caract == 2){
        printf("qual o numero que voce quer coloca na tabuada");
        scanf("%d", &num);

        resul = num + num2++; //primeira multiplicação.

        for(i = 0; i < 10; i++){
            conta++;

            printf("%d + %d = %d\n",num, conta, resul);

            resul = num + num2++;

        }
    }

    if(caract == 3){
        printf("qual o numero que voce quer coloca na tabuada");
        scanf("%d", &num);

        num2 = 10;

        conta = 10;

        resul = num - num2--; //primeira multiplicação.

        for(i = 0; i < 10; i++){
            
            conta--;

            printf("%d - %d = %d\n",num, conta, resul);

            resul = num - num2--;

        }
    }

    if(caract == 4){
        printf("qual o numero que voce quer coloca na tabuada");
        scanf("%d", &num);

        resul = num / num2++; //primeira multiplicação.

        for(i = 0; i < 10; i++){
            conta++;

            printf("%d / %d = %d\n",num, conta, resul);

            resul = num / num2++;

        }
    }

    



    return 0;
}