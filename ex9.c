#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0')
            str[i] = '1';
    }

    printf("String modificada: %s", str);
    return 0;
}
