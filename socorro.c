#include <stdio.h>
#include <stdlib.h>
/** https://www.embarcados.com.br/vetor-de-struct/ */


int qtd_inserido = 0;
 struct ficha_de_cliente
  {
    char nome[30];
    char cpf[11];
    int status;
  };
struct ficha_de_cliente Cliente;



/**

void busca(){
    printf("Nome do Cliente: \n");
    for(int i = 0; i < qtd_inserido; i++){
        if (strcomp(Cliente[i].nome, nome)==0) return i;
    }

}
*/

void inserir(int* qtd_inserido){
    char aux[30];
    printf("Nome do Cliente: \n");
    scanf(" %s", &aux);
    strcpy(Cliente.nome, aux);
    printf("CPF do Cliente: \n");
    scanf(" %s", &aux);
    strcpy(Cliente.cpf, aux);
    Cliente.status = 1;


    printf(Cliente.nome);
    printf(Cliente.cpf);
    (*qtd_inserido ++);
    return main();
}

void remover(){
}//fgets()

void visualisar(){
for(int i = 0; i < qtd_inserido; i++){
        printf("%s\n", Cliente[i].nome);
    }
}

int main()
{
    int escolha;
    printf("Escolha a funcao: \n1- Busca\n2-Inserir\n3-remover");
    scanf(" %d", &escolha);
    /**if (escolha == 1) {
        busca();
    }*/
    if (escolha == 2) {
        inserir(&qtd_inserido);
    }
    if (escolha == 3) {
        remover();
    }
    if (escolha == 4) {
        visualisar();
    }

    return 0;
}
