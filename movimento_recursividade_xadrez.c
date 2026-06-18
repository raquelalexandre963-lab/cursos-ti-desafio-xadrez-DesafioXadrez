#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("direita\n");
        moverTorre(casas - 1);
    }
}

    //aqui esta chamada recursiva
int main() {
    moverTorre(5);
    return 0;

}