#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("*****************************************\n");
    int numero_secreto = 42;

    char nome[20];
    printf("O nome do fdp q ta jogando\n");
    scanf("%s", &nome);

    int chute;

    for(int i = 1; i <= 3; i++){
        printf("Chuta aí arrombado!\nTentativa %d de 3\n", i);
        scanf("%d", &chute);

        int acertou = (chute == numero_secreto);

        if (acertou){
            printf("Acertou miseravi\n");
            break;

        }
        else{
                if(chute > numero_secreto){
                    printf("O chute foi maior\n");
                }
                if(chute < numero_secreto){
                    printf("Chute menor q o numero\n");
                }
            printf("Errou otario %s\n\n", nome);
        }
    }
    }
