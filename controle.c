#include <stdio.h>

int main () {
    int idade = 0;
    printf("Digite uma idade:");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Possui Maioridade Legal\n");
    }  else {
        printf("Não Possui Maioridade Legal\n");
    }

    printf("Valor digitado: %d\n", idade);
    return 0;
}