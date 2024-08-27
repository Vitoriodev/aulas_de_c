#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor;
    int numero;
    float num1;

    valor = 50;
    
    printf("coloque um numero");
    scanf("%d", &numero);

    printf("\nvoce esta me devendo $%d", valor);

    printf("\nnumero %d", numero);

    printf("\nqual e o numero do pi: ");
    scanf("%f", &num1);

    printf("\no numero do pi e: %.4f", num1);

    return 0;
}