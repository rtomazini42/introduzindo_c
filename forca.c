#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//globais
char palavra[20];
char chutes[26];
int tentativas = 0;


void abertura(){
printf("*************");
printf("\n****FORCA****\n");
printf("*************\n");
}
void chuta(char chutes[26],int* t){
        char chute;

        printf("\nChuta aí otario: \n");
        scanf(" %c", &chute);

        chutes[*t] = chute;
        (*t)++;}



int jachutou(char letra, char chutes[26], int tentativas){
    int achou = 0;
    for(int j = 0; j < tentativas; j++){
        if (chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}

void escolhe_palavra(){
    sprintf(palavra, "corno");
}

int main()
{
    setlocale  (LC_ALL, "Portuguese");

    escolhe_palavra();
    abertura();

    int acertou = 0;
    int enforcou = 0;

    do{
        //imprime letra secreta
        for (int i = 0; i < strlen(palavra); i++){
            int achou = jachutou(palavra[i],chutes, tentativas);



            if(achou){
                printf("%c",palavra[i]);

            }
            else{
                printf(" _ ");

            }
        }
        printf("\n");

        chuta(chutes,&tentativas);//capturar



    } while(!acertou && !enforcou);
    {
        printf("loopando\n");
    }


    return 0;
}

