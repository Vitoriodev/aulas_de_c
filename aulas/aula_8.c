#include <stdio.h>
#include <stdlib.h>
 
int main(){

    char letra;

    printf("digite umcaractere: ");
    letra = getc(stdin);

    printf("caractere lidor: %c", letra);

    printf("digite umcaractere: ");
    letra = fgetc(stdin);

    return 0;

}