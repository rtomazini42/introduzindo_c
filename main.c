#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o *\n");
    printf("*****************************************\n");
    int numero_secreto = 42;

    char nome[20];
    printf("O nome do fdp q ta jogando\n");
    scanf("%s", &nome);

    int chute;
    printf("Chuta a� arrombado!\n");
    scanf("%d", &chute);

    if (chute == numero_secreto){
        printf("Acertou miseravi\n");

    }
    else{
        printf("Errou otario %s", nome);
    }
}
