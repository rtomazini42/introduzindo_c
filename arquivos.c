#include <stdio.h>
#include <stdlib.h>
char palavra[20];

void abrir(){
int proxima = 1;
FILE* f;
f = fopen("letras.txt.txt","r"); //(ah nao)
if(f == 0) {
        printf("Banco de dados de palavras nao disponivel\n\n");
        exit(1);
    }
//fscanf(f,"%s", palavra);

while(proxima){
    fscanf(f,"%s", palavra);
    printf("\n aqui! \n %s\n\n", palavra);
    printf("Proxima palavra? 1 para sim\n");
    scanf("%d", &proxima);}
fclose(f);
}

void gravar(){
    char nova_palavra[20];
    FILE* f;
    f = fopen("letras.txt.txt","r+");
    fseek(f,0,SEEK_END);
    printf("Digite a palavra\n");
    scanf("%s", nova_palavra);
    fprintf(f,"\n%s",nova_palavra);
    fclose(f);
}


int main()
{   int gravando = 0;
    printf("Olá\n");
    abrir();
    printf("Deseja gravar algo no arquivo?Sim digite 1\n");
    scanf("%d", &gravando);
    if (gravando){
            //printf("Gravando");
            gravar();

    }
    else{
        printf("Okay\n\n\n\n\n");
    }

    return 0;
}
