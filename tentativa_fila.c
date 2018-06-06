#include <stdio.h>
#include <stdlib.h>


void push(int* lista,int num, int* tam){

    (*tam)++;
    lista[*tam] = num;

}

void pop(int *tam){
    if(*tam == -1)
    {
        return 0;
    }
    else{
        (*tam)--;
    }

}

void tab(int *lista, int tam){
    for (int i = 0; i < tam ; i++){
       printf("%i ", lista[i]);
    }
}

int main()
{   int escolha;int num; int lista[10];int tam = -1;

    push(lista,3,&tam);
    push(lista,2,&tam);
    push(lista,1,&tam);
    push(lista,1,&tam);
    tab(&lista,tam);
    printf("\n\n");
    printf("Escolha: \n1-Inserir\n\n2-Remover");
    scanf("%d", &escolha);
    if (escolha == 1){
        printf("\n\n Que valor quer inserir?\n");
        scanf("%d",num);
        push(&lista,num, &tam);
        tab(&lista,tam);
              }
    if (escolha == 2){
        pop(&lista);
        tab(&lista,tam);
    }
}
