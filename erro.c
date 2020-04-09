#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>






int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow){
int  numero_erro;
numero_erro =0;
 while (1){
{   char nome_erro[16] = "Erro: ";
    char aux[10];
    //itoa(numero_erro,aux,10);
    strcat(nome_erro, itoa(numero_erro,aux,10));
    MessageBox(NULL, "ERRO!",  nome_erro, MB_OK);
    printf("%i", numero_erro);

}
if(numero_erro == 32){
     break;
}
else{
    numero_erro ++;
}


    }
    return 0;
    }

