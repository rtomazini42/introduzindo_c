#include <stdio.h>
#include <stdlib.h>
#include "fuga.h"


struct mapa m;

void aloca_mapa(){
m.matriz = malloc(sizeof(char*) * m.linhas);
    for (int i = 0; i < m.linhas; i++){
        m.matriz[i] = malloc(sizeof(char) * m.colunas + 1);
    }

}
void libera_mapa(){
    for(int i = 0; i < m.linhas; i++){
        free(m.matriz[i]);
    }
    free(m.matriz);
    }

void abre_mapa(){
    FILE* f;
    f = fopen("mapa.txt","r");
    if (f == 0){
        printf("Erro de leitura \n\n");
        exit(1);}

    fscanf(f,"%d %d", &(m.linhas), &(m.colunas));
    aloca_mapa();

    for(int i = 0; i < 5; i++){
        fscanf(f,"%s", m.matriz[i]);}




    fclose(f);
}

int acabou(){
    return 0;
}

void imprime_mapa(){
for(int i = 0; i < 5; i++){
        printf("%s\n", m.matriz[i]);
    }
}

void move(char direcao){
    int x,y;
    for(int i = 0; i < m.linhas; i++){
        for(int j = 0; j < m.colunas; j++){
            if (m.matriz[i][j]== '@'){
                x = i;
                y = j;
            }
        }
    }
    switch(direcao){
        case 'a':
            m.matriz[x][y-1] = '@';
            break;
        case 'd':
            m.matriz[x][y+1] = '@';
            break;
        case 's':
            m.matriz[x+1][y] = '@';
            break;
        case 'w':
            m.matriz[x-1][y] = '@';
            break;

    }
    m.matriz[x][y] = '.';
}

int main()
{


    abre_mapa();
    do{
         imprime_mapa();
         char comando;
         scanf(" %c", &comando);
         move(comando);

    }while(!acabou());

    libera_mapa();

}
