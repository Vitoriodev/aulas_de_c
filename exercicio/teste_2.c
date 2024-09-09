#include <stdio.h>
#include <stdlib.h>


void tabela_de_preco(){

    printf("-------------------------------------\n");

    printf("ola sejam brm vindo \n");

    printf("-------------------------------------\n");

    printf("preco dos items\n");

    printf("1 banana $10 reais, 2 melancia $12 reais, 3 pao $20 reais o kilo, 4 queijo $9 reais,");
    printf(" 5 feijao $9 reais, 6 arroz $8 reais, 7 pimenta $5 reais, 8 ovos $11 reais\n");

}

int main(){

    int i;
    int num, nume = 0;
    int soma = 0;

    for(i = 2; i > 1; i++){

        tabela_de_preco();

        printf("qual o codgo do item que voce quer compra? ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:

        soma += 10; //banana
            
            break;

        case 2:

        soma += 12; //melancia
            
            break;

        case 3:

        soma += 20; //pao
            
            break;

        case 4:

        soma += 9; //queijo
            
            break;

        case 5:

        soma += 9; //feijao
            
            break;

        case 6:

        soma += 8; //arroz
            
            break;

        case 7:

        soma += 5; //pimenta
            
            break;

        case 8:

        soma += 11; //ovos
            
            break;
        
        
        default:
        printf("esse item nao esta aqui.\n");

        nume--;
            break;

           
        }

         nume++;

        printf("ser voce quer finalizar a sua comnpra digite 0\n");
        scanf("%d", &i);

    }

    printf("o valor total da compra e: %d\n", soma);
    printf("numero de item que foram comprados e: %d", nume);

    return 0;
}