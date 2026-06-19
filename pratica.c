#include <stdio.h>

int main() {
    int index;

    char *nomeAlunos[3][3] = {
        {"aluno 0", "Pt: 30", "Mat: 90"},
        {"aluno 1", "Pt: 60", "Mat: 60"},
        {"aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno que queira ver as notas \n");
    printf("Para o aluno 1, digite 0\n");
    printf("Para o aluno 2, digite 1\n");
    printf("Para o aluno 3, digite 2\n");

    scanf("%d", &index);

    if(index >= 0 && index <= 2){
        printf("A nota do %s sao: %s, %s \n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2]);
    } else {
        printf("Indice invalido!\n");
    }

    return 0;
}