#include <stdio.h>

int main() {
    char nome[100];
    int i = 0;

    printf("Digite um nome: ");
    fgets(nome, 100, stdin);

    while (nome[i] != '\0' && nome[i] != '\n') {
        i++;
    }

    printf("O nome possui %d letras.\n", i);
    return 0;
}
