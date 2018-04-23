#include <stdio.h>
#include <stdlib.h>

char** mapa;
int linhas, colunas;

void aloca_mapa(){
mapa = malloc(sizeof(char*) * linhas);
    for (int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * colunas + 1);
    }

}
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
    aloca_mapa();

    for(int i = 0; i < 5; i++){
        fscanf(f,"%s", mapa[i]);}




    fclose(f);
}

int acabou(){
    return 0;
}

void imprime_mapa(){
for(int i = 0; i < 5; i++){
        printf("%s\n", mapa[i]);
    }
}

void move(char direcao){
    int x,y;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if (mapa[i][j]== '@'){
                x = i;
                y = j;
            }
        }
    }
    switch(direcao){
        case 'a':
            mapa[x][y-1] = '@';
            break;
        case 'd':
            mapa[x][y+1] = '@';
            break;
        case 's':
            mapa[x+1][y] = '@';
            break;
        case 'w':
            mapa[x-1][y] = '@';
            break;

    }
    mapa[x][y] = '.';
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
