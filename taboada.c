#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,aux;
    printf("Insere um numero vacilaum!\n");
    scanf("%d", &num);
    for (int i = 1;i<=10;i++){
        aux = num * i;
        printf("%d\n", aux);
    }
}
