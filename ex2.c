#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    
    while (str[i] != '\0') {
        i++;
    }

    if (str[i - 1] == '\n')
        i--;

    printf("Comprimento: %d\n", i);
    return 0;
}
