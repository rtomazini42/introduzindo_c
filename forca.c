#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale  (LC_ALL, "Portuguese");
    char palavra[20],chutes[26];
    sprintf(palavra, "corno");

    int acertou = 0;
    int enforcou = 0,tentativas = 0;

    do{
        for (int i = 0; i < strlen(palavra); i++){
            int achou = 0;
            for(int j = 0; j < tentativas; j++){
                if (chutes[j] == palavra[i]) {
                    achou = 1;
                    break;
                }
            }
            if(achou){
                printf("%c",palavra[i]);

            }
            else{
                printf(" _ ");
            }
        }
        printf("\n");
        char chute;



        printf("\nChuta aí otario: \n");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;

    } while(!acertou && !enforcou);
    {
        printf("loopando\n");
    }


    return 0;
}
