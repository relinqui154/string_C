#include <stdio.h>

int main() {
    char nome[100], sexo;
    int idade;

    printf("Digite o nome: ");
    fgets(nome, 100, stdin);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if ((sexo == 'F' || sexo == 'f') && idade < 25) {
        printf("%sACEITA\n", nome);
    } else {
        printf("%sNAO ACEITA\n", nome);
    }

    return 0;
}
