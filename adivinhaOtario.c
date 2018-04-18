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
    printf("Chuta aí arrombado!\n");
    scanf("%d", &chute);

    if (chute == numero_secreto){
        printf("Acertou miseravi\n");

    }
    else{
            if(chute > numero_secreto){
                printf("O chute foi maior\n");
            }
            if(chute < numero_secreto){
                printf("Chute menor q o numero\n");
            }
        printf("Errou otario %s", nome);
    }
}
