#include <stdio.h>
#include <stdlib.h>

char mapa[5][11];

void abre_mapa(){
    FILE* f;
    f = fopen("mapa.txt","r");
    if (f == 0){
        printf("Erro de leitura \n\n");
        exit(1);}

    for(int i = 0; i < 5; i++){
        fscanf(f,"%s", mapa[i]);}


    for(int i = 0; i < 5; i++){
        printf("%s\n", mapa[i]);
    }
    fclose(f);
    }


int main()
{

    abre_mapa();


}
