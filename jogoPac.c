#include <stdio.h>
#include <stdlib.h>

char** mapa;
int linhas, colunas;

void libera_mapa(){
    for(int i = 0; i < linhas; i++){
        free(mapa[i]);
    }
    free(mapa);
    }

void abre_mapa(){
    FILE* f;
    f = fopen("mapa.txt","r");
    if (f == 0){
        printf("Erro de leitura \n\n");
        exit(1);}

    fscanf(f,"%d %d", &linhas, &colunas);
    /////////
    mapa = malloc(sizeof(char*) * linhas);
    for (int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * colunas + 1);
    }

    /////////

    for(int i = 0; i < 5; i++){
        fscanf(f,"%s", mapa[i]);}


    for(int i = 0; i < 5; i++){
        printf("%s\n", mapa[i]);
    }

    libera_mapa();
    fclose(f);
}


int main()
{

    abre_mapa();


}
