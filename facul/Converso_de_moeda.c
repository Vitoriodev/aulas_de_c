#include <stdio.h>
#include <stdlib.h>

void Bem_vindo(int *escolher) {
    printf("Qual moeda você gostaria converter?\n\n");
    printf("1: Real\n2: Dolar\n3: Euro\n4: Peso Argentino\n0: Sair.\n\n");
    printf("Digite o número da moeda para conversão ou '0' para sair: ");
    scanf("%d", escolher);
}

float positivo(float valor){
    if (valor < 0){
        printf("O valor digitado é negativo, por favor digite um valor válido: ");
        scanf("%f", &valor);
        positivo(valor);
    }
    else{
        return valor;
    }
}

void converter(int escolher, float *moedas_BRL, float *moedas_USD, float *moedas_EUR, float *moedas_ARS) {
    float valor, resultado;

    switch (escolher) {
        case 1: // Real
            printf("\nDigite o valor em Real: ");
            scanf("%f", &valor);
            valor = positivo(valor);
            resultado = valor * moedas_BRL[0]; // Real para o Dollar
            printf("Valor em Dolar: $%.2f\n", resultado);
            resultado = valor * moedas_BRL[1]; // Real para o Euro
            printf("Valor em Euro: €%.2f\n", resultado);
            resultado = valor * moedas_BRL[2]; // Real para o Peso Argentino
            printf("Valor em Peso Argentino: $%.2f\n\n", resultado);
            break;

        case 2: // Dollar
            printf("\nDigite o valor em Dolar: ");
            scanf("%f", &valor);
            valor = positivo(valor);
            resultado = valor * 5.50; // Dollar para o Real
            printf("Valor em Real: R$%.2f\n", resultado);
            resultado = valor * 0.91; // Dollar para o Euro
            printf("Valor em Euro: €%.2f\n", resultado);
            resultado = valor * 974.75; // Dollar para o Peso Argentino
            printf("Valor em Peso Argentino: $%.2f\n\n", resultado);
            break;

        case 3: // Euro
            printf("\nDigite o valor em Euro: ");
            scanf("%f", &valor);
            valor = positivo(valor);
            resultado = valor * 1.09; // Euro para o Dollar
            printf("Valor em Dolar: $%.2f\n", resultado);
            resultado = valor * 6.04; // Euro para o Real
            printf("Valor em Real: R$%.2f\n", resultado);
            resultado = valor * 1069.78; // Euro para o Peso Argentino
            printf("Valor em Peso Argentino: $%.2f\n\n", resultado);
            break;

        case 4: // Peso Argentino
            printf("\nDigite o valor em Peso Argentino: ");
            scanf("%f", &valor);
            valor = positivo(valor);
            resultado = valor * 0.0010; // Peso Argentino para o Dollar
            printf("Valor em Dolar: $%.2f\n", resultado);
            resultado = valor * 0.0056; // Peso Argentino para o Real
            printf("Valor em Real: R$%.2f\n", resultado);
            resultado = valor * 0.0009; // Peso Argentino para o Euro
            printf("Valor em Euro: €%.2f\n\n", resultado);
            break;

        default:
            printf("\n\nOpção inválida!\n\n");
            break;
    }
}

int main() {
    float moedas_BRL[3] = {0.18, 0.16, 177.11}; // convercao de moeda.
    float moedas_USD[3] = {5.50, 0.91, 974.75};
    float moedas_EUR[3] = {1.09, 6.04, 1069.78};
    float moedas_ARS[3] = {0.0010, 0.0056, 0.0009};

    int escolher;

    printf("Olá, bem-vindo ao conversor de moedas!\n");

    while (1) {
        Bem_vindo(&escolher);
        
        if (escolher == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        converter(escolher, moedas_BRL, moedas_USD, moedas_EUR, moedas_ARS);
    }

    return 0;
}