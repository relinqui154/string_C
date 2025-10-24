#include <stdio.h>

int main() {
    char str[100];
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1')
            contador++;
    }

    printf("A string possui %d '1's.\n", contador);
    return 0;
}
