#include <stdio.h>

int main() {
    char nome[100];
    int i;

    printf("Digite um nome: ");
    fgets(nome, 100, stdin);

    printf("As quatro primeiras letras: ");
    for (i = 0; i < 4 && nome[i] != '\0'; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
