#include <stdio.h>

int main() {
    int i, j;

    char letra;

        //padrao triangular de dois loop
        //usando incrementacao
    for(i = 1; i <= 5; i++) 
    {
        //temos que usar aspa simples exemplo: ' ';
        letra = 'A';

        //o J vai ate o valor de i
        //quando i = 5; o J vai de 1 ate 5
        //imprime 5 letra ABCDE
        for(j = 1; j <= i; j++)
        {
            printf("%c ", letra);
            ++letra;
        }
        printf("\n");
    }
    
    return 0;
 }