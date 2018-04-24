#include <stdio.h>
#include <stdlib.h>
#include <time.h> // agradecimento a Guilherme Matheus no topico da Alura por me dar dicas de como otimizar o Srand

int tabuleiro[7][7];
int pecas = 8;
int cavX, cavY;

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

	do {
		cavY = rand() % 8;
		cavX = rand() % 8;
	} while (tabuleiro[cavX][cavY] != 0);

	tabuleiro[cavX][cavY] = 5;
}


void comer() { //nao achei maneira mais simples do que testar todas as jogadas X = linha Y = Coluna
    //L pra cima e pra baixo
        if(tabuleiro[cavX + 2][cavY+1]== 1){
            if(cavX + 2 >= 0 && cavX +2 < 7 && cavY + 1 >= 0 && cavX +1 < 7){
                 printf("Jogada possivel no %d %d\n vv>\n", cavX + 2, cavY+1);
            };
	}
		if(tabuleiro[cavX - 2][cavY+1]== 1){
            if(cavX - 2 >= 0 && cavX +2 < 7 && cavY + 1 >= 0 && cavX +1 < 7){
                 printf("Jogada possivel no %d %d\n ^^>\n", cavX - 2, cavY+1);
            };
	}
		if(tabuleiro[cavX + 2][cavY-1]== 1){
            if(cavX + 2 >= 0 && cavX +2 < 7 && cavY - 1 >= 0 && cavX -1 < 7){
                 printf("Jogada possivel no %d %d\n vv<\n", cavX + 2, cavY-1);
            };
	}
		if(tabuleiro[cavX - 2][cavY-1]== 1){
            if(cavX - 2 >= 0 && cavX -2 < 7 && cavY - 1 >= 0 && cavX -1 < 7){
                 printf("Jogada possivel no %d %d\n ^^<\n", cavX - 2, cavY-1);
            };
	}
        //L lateral
        if(tabuleiro[cavX + 1][cavY +2]== 1){
            if(cavX + 1 >= 0 && cavX +1 < 7 && cavY + 2 >= 0 && cavX +2 < 7){
                 printf("5Jogada possivel no %d %d\n >>v\n", cavX +1, cavY+2);
            };
            }

        if(tabuleiro[cavX - 1][cavY +2]== 1){
            if(cavX - 1 >= 0 && cavX -1 < 7 && cavY + 2 >= 0 && cavX +2 < 7){
                 printf("6Jogada possivel no %d %d\n >>^\n", cavX -1, cavY+2);
            };
            }

        if(tabuleiro[cavX + 1][cavY -2]== 1){
            if(cavX + 1 >= 0 && cavX +1 < 7 && cavY - 2 >= 0 && cavX -2 < 7){
                 printf("7Jogada possivel no %d %d\n <<v\n", cavX +1, cavY-2);
            };
            }

        if(tabuleiro[cavX - 1][cavY -2]== 1){
            if(cavX - 1 >= 0 && cavX -1 < 7 && cavY - 2 >= 0 && cavX -2 < 7){
                 printf("5Jogada possivel no %d %d\n <<^\n", cavX -1, cavY-2);
            };
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
	printf("O cavalo esta na linha %d  coluna %d\n", cavX , cavY );
	comer();
	//imprime_tab();
	printf("%d %d\n\n",cavX,cavY);
}
