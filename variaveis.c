// Bloco 1 - Variaveis, tipos de dados, conversoes e expressoes
#include <stdio.h>

// Exercicio 01 - Conversor de temperatura
void exercicio01() {
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);
}

// Exercicio 02 - Consumo medio
void exercicio02() {
    float km, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &km);
    printf("Digite o combustivel gasto (litros): ");
    scanf("%f", &litros);

    consumo = km / litros;

    printf("Consumo medio: %.2f km/l\n", consumo);
    printf("Parte inteira do consumo: %d km/l\n", (int)consumo); // casting
}

// Exercicio 03 - Divisao inteira e divisao real
void exercicio03() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao inteira: %d\n", a / b);
    printf("Resto da divisao: %d\n", a % b);
    printf("Divisao real: %.2f\n", (float)a / b); // casting para float
}

// Exercicio 04 - Reajuste salarial
void exercicio04() {
    double salario, aumento, novoSalario, desconto, salarioFinal;

    printf("Digite o salario base: ");
    scanf("%lf", &salario);

    aumento = salario * 0.12;
    novoSalario = salario + aumento;
    desconto = novoSalario * 0.08;
    salarioFinal = novoSalario - desconto;

    printf("Salario inicial: R$ %.2f\n", salario);
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Salario final liquido: R$ %.2f\n", salarioFinal);
}

// Exercicio 05 - Expressoes logicas
void exercicio05() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    printf("A > B e B > C: %d\n", A > B && B > C);
    printf("A == B ou A != C: %d\n", A == B || A != C);
    printf("A + B <= C e C nao negativo: %d\n", (A + B <= C) && !(C < 0));
}

int main() {
    int opcao;

    do {
        printf("\n===== BLOCO 1 =====\n");
        printf("1 - Conversor de temperatura\n");
        printf("2 - Consumo medio\n");
        printf("3 - Divisao inteira e real\n");
        printf("4 - Reajuste salarial\n");
        printf("5 - Expressoes logicas\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: exercicio01(); break;
            case 2: exercicio02(); break;
            case 3: exercicio03(); break;
            case 4: exercicio04(); break;
            case 5: exercicio05(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
