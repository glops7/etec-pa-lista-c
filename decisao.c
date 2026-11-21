// Bloco 2 - Estruturas de decisao
#include <stdio.h>

// Exercicio 06 - Triangulos
void exercicio06() {
    float a, b, c;

    printf("Digite o lado 1: ");
    scanf("%f", &a);
    printf("Digite o lado 2: ");
    scanf("%f", &b);
    printf("Digite o lado 3: ");
    scanf("%f", &c);

    // verifica se forma um triangulo
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Esses lados nao formam um triangulo!\n");
    }
}

// Exercicio 07 - IMC
void exercicio07() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc < 35) {
        printf("Obesidade Grau I\n");
    } else if (imc < 40) {
        printf("Obesidade Grau II\n");
    } else {
        printf("Obesidade Grau III\n");
    }
}

// Exercicio 08 - Mencoes da ETEC
void exercicio08() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("Media: %.1f\n", media);

    if (media < 5.0) {
        printf("Mencao: I (Insatisfatorio)\n");
    } else if (media < 7.0) {
        printf("Mencao: R (Regular)\n");
    } else if (media < 9.0) {
        printf("Mencao: B (Bom)\n");
    } else {
        printf("Mencao: MB (Muito Bom)\n");
    }
}

// Exercicio 09 - Caixa eletronico
void exercicio09() {
    float saldo = 1000.00;
    float valor;
    int opcao;

    do {
        printf("\n--- CAIXA ELETRONICO ---\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Valor do deposito: ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                printf("Deposito realizado!\n");
                break;
            case 3:
                printf("Valor do saque: ");
                scanf("%f", &valor);
                if (valor > saldo) {
                    printf("Saldo insuficiente!\n");
                } else {
                    saldo = saldo - valor;
                    printf("Saque realizado!\n");
                }
                break;
            case 0:
                printf("Saindo do caixa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

// Exercicio 10 - Ano bissexto
void exercicio10() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("%d e bissexto\n", ano);
    } else {
        printf("%d nao e bissexto\n", ano);
    }
}

int main() {
    int opcao;

    do {
        printf("\n===== BLOCO 2 =====\n");
        printf("6 - Triangulos\n");
        printf("7 - IMC\n");
        printf("8 - Mencoes ETEC\n");
        printf("9 - Caixa eletronico\n");
        printf("10 - Ano bissexto\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 6: exercicio06(); break;
            case 7: exercicio07(); break;
            case 8: exercicio08(); break;
            case 9: exercicio09(); break;
            case 10: exercicio10(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
