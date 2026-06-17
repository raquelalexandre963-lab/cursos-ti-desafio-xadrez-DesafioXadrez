#include <stdio.h>

int main() {
    int i = 1;
    do { // loop externo
        int j = 1; // variavel local
        do { // loop interno
            printf("%d ", i * j);
            j++; // incremento do loop interno
        } while (j <= 10); // condicao do loop interno

        i++; // incremento do loop externo
    } while (i <= 10); // condicao do loop externo

    return 0;
}