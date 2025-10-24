#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("String sem vogais: ");
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c != 'a' && c != 'A' &&
            c != 'e' && c != 'E' &&
            c != 'i' && c != 'I' &&
            c != 'o' && c != 'O' &&
            c != 'u' && c != 'U') {
            printf("%c", c);
        }
    }
    return 0;
}
