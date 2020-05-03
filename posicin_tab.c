#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int posX, posY;
int tabuleiro[8][8];

void inicia_tab() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			tabuleiro[i][j] = 0;
		}
	}
}


void imprime_tab() {
    printf("  0  1  2  3  4  5  6  7  \n");
	for (int i = 0; i < 8; i++) {
		printf("%d", i);
		for (int j = 0; j < 8; j++) {
			printf("[%d]", tabuleiro[i][j]);
		}
		printf("\n");

	}
}

void posicionar(int quem) {

	do {
		
		posY = rand() % 8;
		posX = rand() % 8;
	} while (tabuleiro[posX][posY] != 0);

	tabuleiro[posX][posY] = quem;
}

int main()
{   int quem;
    printf("Hello world!\n");
    srand(time(0));
    inicia_tab();
    posicionar(5);
    posicionar(3);
    posicionar(2);
    imprime_tab();
    return 0;
}
