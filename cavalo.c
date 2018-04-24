#include <stdio.h>
#include <stdlib.h>
#include <time.h> // agradecimento a Guilherme Matheus no topico da Alura por me dar dicas de como otimizar o Srand

int tabuleiro[8][8];
int pecas = 8;

void inicia_tab() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			tabuleiro[i][j] = 0;
		}
	}
}


void imprime_tab() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("[%d]", tabuleiro[i][j]);
		}
		printf("\n");

	}
}

void inimigos() {
	int aleY = rand() % 8;
	int aleX = rand() % 8;
	if (tabuleiro[aleX][aleY] == 0) {
		tabuleiro[aleX][aleY] = 1;
	}
	else {
		pecas++;
	}

}

void cavalo() {
	int cavX, cavY;

	do {
		cavY = rand() % 8;
		cavX = rand() % 8;
	} while (tabuleiro[cavX][cavY] != 0);

	tabuleiro[cavX][cavY] = 5;
}


void comer() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (tabuleiro[j][i] == 5)
			{
				printf("O cavalo esta no %d %d\n", j + 1, i + 1);
			}
		}
	}
}

int main()
{
	srand(time(0));

	printf("Não vai demorar 13 segundos :) \n\n");
	inicia_tab();
	while (!pecas == 0) {
		inimigos();
		pecas--;
	}
	cavalo();
	imprime_tab();
	printf("\n");
	comer();
}
