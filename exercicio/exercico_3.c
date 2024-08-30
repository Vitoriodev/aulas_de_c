#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    int hora = 0, min = 0, seg = 0;
    int i = 0;

    printf("qual o numero que voce quer colocar para o contador\n");

    printf("\nhora: ");
    scanf("%d", &hora);

    printf("\nminuto: ");
    scanf("%d", &min);

    printf("\nseguntos: ");
    scanf("%d", &seg);

    while(i < 1){

        if (hora >= 0){

            while (hora >= 0 && min >= 0 && seg >= 0){

                printf("hora: %d minutos: %d segundos: %d\n", hora, min, seg);
                Sleep(1000);
                
                if(min == 0 && seg == 0){
                    hora --;
                    min = 60;

                }

                if(seg == 0){
                    min --;
                    seg = 60;

                    

                }

                seg --;
                
            }
            
        }

    }

    return 0;
}