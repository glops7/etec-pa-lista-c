// Bloco 3 - Lacos de repeticao
#include <stdio.h>

// Exercicio 11 - Tabuada
void exercicio11() {
    int n, limite, i;

    printf("Digite o numero: ");
    scanf("%d", &n);
    printf("Digite o limite: ");
    scanf("%d", &limite);

    for (i = 1; i <= limite; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// Exercicio 12 - Soma e media (para quando digitar negativo)
void exercicio12() {
    int numero, soma = 0, quantidade = 0;
    float media;

    printf("Digite um numero (negativo para parar): ");
    scanf("%d", &numero);

    while (numero >= 0) {
        soma = soma + numero;
        quantidade++;
        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("Quantidade: %d\n", quantidade);
        printf("Soma: %d\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }
}

// Exercicio 13 - Senha
void exercicio13() {
    int senha = 2026;
    int tentativa;
    int tentativas = 0;

    do {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa != senha) {
            printf("Senha errada!\n");
        }
    } while (tentativa != senha && tentativas < 3);

    if (tentativa == senha) {
        printf("Acesso liberado! Tentativas: %d\n", tentativas);
    } else {
        printf("Acesso bloqueado!\n");
    }
}

// Exercicio 14 - Fibonacci
void exercicio14() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Quantos termos (N >= 2)? ");
    scanf("%d", &n);

    printf("%d %d ", a, b);
    for (i = 3; i <= n; i++) {
        proximo = a + b;
        printf("%d ", proximo);
        a = b;
        b = proximo;
    }
    printf("\n");
}

// Exercicio 15 - Numero primo
void exercicio15() {
    int n, i;
    int divisores = 0;

    printf("Digite um numero maior que 1: ");
    scanf("%d", &n);

    // conta quantos divisores o numero tem
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("%d e primo\n", n);
    } else {
        printf("%d e composto\n", n);
    }
}

int main() {
    int opcao;

    do {
        printf("\n===== BLOCO 3 =====\n");
        printf("11 - Tabuada\n");
        printf("12 - Soma e media\n");
        printf("13 - Senha\n");
        printf("14 - Fibonacci\n");
        printf("15 - Numero primo\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 11: exercicio11(); break;
            case 12: exercicio12(); break;
            case 13: exercicio13(); break;
            case 14: exercicio14(); break;
            case 15: exercicio15(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
