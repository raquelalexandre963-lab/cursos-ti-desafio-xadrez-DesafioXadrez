#include <stdio.h>

//esse int numero ainda e nada
void recursivo(int numero) 
{
    if (numero > 0) 
    {
        //esse numero e a variavel local
        //essa variavel numero e chamada de recursiva
        printf("%d \n", numero);

        //vamos trazer essa recursividade pra ca
        recursivo(numero - 1);
    }
}



int main() 
{

    int quantidade = 10;
    //ele vai rodar 11 vezes

    printf("contagem regressiva....");
    //dentro desse recursivo tenho que passar um valor inteiro
    recursivo(quantidade);
    //a minha quantidade vai ser 10

    return 0;
}