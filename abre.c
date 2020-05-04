#include <stdio.h>
#include <stdlib.h>
char palavra[20];

void abrir(){

FILE* f;
f = fopen("letras.txt.txt","r"); //(ah nao)
if(f == 0) {
        printf("Banco de dados de palavras nao disponivel\n\n");
        exit(1);
    }

fscanf(f,"%s", palavra);
printf("\n aqui! \n %s", palavra);
fclose(f);
}



int main()
{
    printf("Abrindo arquivo\n");
    abrir();
    return 0;
}
