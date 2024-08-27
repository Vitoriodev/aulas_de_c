#include <stdio.h>
#include <stdlib.h>

int main(){

    char sexo;

    printf("digite o seu sexo 'f ou F, m ou M': ");
    scanf("%c", &sexo);

    printf("\no seu sexo e: %c", sexo);

    return 0;
}