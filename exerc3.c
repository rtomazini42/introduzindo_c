#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux = 0;
    for(int i = 1;i < 101;i++ ){;
        ///printf("%d \n",i);
        aux = i + aux;
    }
    printf("%d \n",aux);

    return 0;
}
