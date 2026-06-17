#include <stdio.h>

int main() 
{
    int movimentoCompleto = 1; //flag para controlar o movimento em 'l'

    //O i aqui esta sendo decrementada exemplo: --
    while (movimentoCompleto -- ) 
    {
        //incrementar i++
        for (int i = 0; i <= 2; i++) 
        {
            printf("cima\n"); //imprime "cima" duas vezes
        }
        printf("direita\n"); //imprime "direita" uma vez
    }
    return 0;
}