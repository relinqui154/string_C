#include <stdio.h>

int main() {
    char palavra[100];
    int i, tamanho = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);

    while (palavra[tamanho] != '\0' && palavra[tamanho] != '\n') {
        tamanho++;
    }

    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
