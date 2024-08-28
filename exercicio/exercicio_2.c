#include <stdio.h>
#include <stdlib.h>
 
int main(){

    char sexo;
    int idade;
    float peso;
    float altura;

    printf("qual o seu sexo M ou F: ");
    scanf("%c", &sexo);

    printf("\nqual a sua idade: ");
    scanf("%d", &idade);

    printf("\nqual o se peso: ");
    scanf("%f", &peso);

    printf("\nqual a sua altura: ");
    scanf("%f", &altura);

    printf("\no seu sexo e %c, a sua idade e %d, o seu peso e %.1f, a sua altura e %.2f", sexo, idade, peso, altura);

    return 0;
}