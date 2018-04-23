#include <stdio.h>
#include <stdlib.h>

int main(){
int* v = malloc(sizeof(int*) * 5);
for(int i = 0; i <5; i++){
    v[i] = malloc(sizeof(int)*10);
}

v[0] = 10;
v[1] = 12;

*v = 10;
printf("%d\n\n", *v);

for(int i = 0; i < 5; i++){
    free(v[i]);
}

free(v);

}
