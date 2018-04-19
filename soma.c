#include <stdio.h>
#include <stdlib.h>
int a,b,res;

int soma(int* a,int *b){
    res = (*a)  + (*b);
    return res;
}

int main()
{
    printf("Digite um numero\n");
    scanf("%d", &a);
    printf("Digite outro numero\n");
    scanf("%d", &b);
    int res = soma(&a,&b);
    printf("A soma é %d", res);
    return 0;
}
