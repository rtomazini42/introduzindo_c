
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

//globais
char palavra[20];
char chutes[26];
int chutes_dados = 0;


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



int jachutou(char letra){
    int achou = 0;
    for(int j = 0; j < chutes_dados; j++){
        if (chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}

int enforcou(){
    int erros = 0;
    for(int i = 0; i < chutes_dados; i++){
        int existe = 0;
        for(int j = 0;j <strlen(palavra);j++)
            {if (chutes[i] == palavra[j]){
                existe = 1;
                break;
            }

        }
        if(!existe) erros++;
    }


    return erros >= 5;
}

int acertou(){
    for(int i = 0; i <strlen(palavra);i++){
        if(!jachutou(palavra[i])){
            return 0;
        }
    }
    return 1;
}



void escolhe_palavra(){
    FILE* f;

    f = fopen("palavras.txt", "r");
    //linha abaixo caso não tenha palavras.txt
    if(f==0){
        printf("\n\nDesculpe, falta o banco de palavras");
        exit(0);
    }
    int qtddepalavras;
    fscanf(f,"%d", &qtddepalavras);

    srand(time(0));
    int randomico = rand() % qtddepalavras;

    for(int i = 0; i <= randomico; i++){
        fscanf(f, "%s", palavra);
    }
    fclose(f);
}

int main()
{
    setlocale  (LC_ALL, "Portuguese");

    escolhe_palavra();
    abertura();

    //int acertou = 0;
    //int enforcou = 0;

    do{
        //imprime letra secreta
        for (int i = 0; i < strlen(palavra); i++){
            int achou = jachutou(palavra[i]);



            if(achou){
                printf("%c",palavra[i]);

            }
            else{
                printf(" _ ");

            }
        }
        printf("\n");

        chuta(chutes,&chutes_dados);//capturar



    } while(!acertou()&& !enforcou());
    {
        printf("****fim de jogo****\n");
        if (acertou()){
            printf("***Ganhou***");
        }
        if (enforcou()){
            printf("\n A palavra era:  %s\n", &palavra);
            printf("-----perdeu-----");
        }
    }


    return 0;
}
