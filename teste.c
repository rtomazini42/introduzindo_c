#include <stdio.h>
#include <stdlib.h>

int main(){
int* v = malloc(8);
*v = 10;
printf("%d\n\n", *v);
free(v);

}
