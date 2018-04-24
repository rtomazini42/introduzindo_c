#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int tabuleiro[7][7];
int pecas = 8;

void inicia_tab(){
for(int i = 0; i < 8; i++){
    for(int j = 0 ; j < 8; j++){
        tabuleiro[i][j] = 0;
    }

}
}


void imprime_tab(){
for(int i = 0; i < 8; i++){
    for(int j = 0 ; j < 8; j++){
        printf(" %d ", tabuleiro[i][j]);
    }
    printf("\n");

}}
void inimigos(){
    srand(time(0));
    int aleY = rand() % 8;
    int aleX = rand() % 8;
    if (tabuleiro[aleX][aleY] == 0){
        tabuleiro[aleX][aleY] = 1;
    }
    else{
        pecas++;
    }
}

void cavalo(){

    srand(time(0));
    int aleY = rand() % 8;
    int aleX = rand() % 8;
    if (tabuleiro[aleX][aleY] == 0){
        tabuleiro[aleX][aleY] = 5;
    }
    

}

int main()
{   //int aux = 0;
    inicia_tab();
    //printf("%d", tabuleiro[0][0]);
    while (!pecas == 0){
      inimigos();
      pecas--;

    }
    cavalo();
    imprime_tab();

}
