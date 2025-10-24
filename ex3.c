#include <stdio.h>

int main() {
    char nome[100];
    
    printf("Digite um nome: ");
    fgets(nome, 100, stdin);
    
    if (nome[0] == 'A' || nome[0] == 'a') {
        printf("Nome: %s", nome);
    } else {
        printf("O nome nao comeca com 'A'.\n");
    }
    return 0;
}
