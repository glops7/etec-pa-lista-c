// Bloco 4 - Funcoes
#include <stdio.h>

// Exercicio 16 - Funcao de potencia
int calcularPotencia(int base, int expoente) {
    int resultado = 1;
    int i;

    for (i = 1; i <= expoente; i++) {
        resultado = resultado * base;
    }
    return resultado;
}

void exercicio16() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("Resultado: %d\n", calcularPotencia(base, expoente));
}

// Exercicio 17 - Funcao de fatorial
long long calcularFatorial(int n) {
    long long fatorial = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }
    return fatorial;
}

void exercicio17() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    // nao aceita negativo
    while (n < 0) {
        printf("Numero negativo nao vale! Digite de novo: ");
        scanf("%d", &n);
    }

    printf("%d! = %lld\n", n, calcularFatorial(n));
}

// Exercicio 18 - Conversao de segundos
void converterSegundos(int totalSegundos) {
    int horas, minutos, segundos;

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d segundos = %dh %dm %ds\n", totalSegundos, horas, minutos, segundos);
}

void exercicio18() {
    int total;

    printf("Digite o total de segundos: ");
    scanf("%d", &total);

    converterSegundos(total);
}

// Exercicio 19 - Maior e menor de tres
float encontrarMaior(float a, float b, float c) {
    float maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    return maior;
}

float encontrarMenor(float a, float b, float c) {
    float menor = a;

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return menor;
}

void exercicio19() {
    float a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    printf("Maior: %.2f\n", encontrarMaior(a, b, c));
    printf("Menor: %.2f\n", encontrarMenor(a, b, c));
}

// Exercicio 20 - Calculadora com funcoes
double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        printf("Erro: nao pode dividir por zero!\n");
        return 0;
    }
    return a / b;
}

void exercicio20() {
    int opcao;
    double x, y;

    do {
        printf("\n--- CALCULADORA ---\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Voltar\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &x);
            printf("Digite o segundo numero: ");
            scanf("%lf", &y);
        }

        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", somar(x, y)); break;
            case 2: printf("Resultado: %.2f\n", subtrair(x, y)); break;
            case 3: printf("Resultado: %.2f\n", multiplicar(x, y)); break;
            case 4: printf("Resultado: %.2f\n", dividir(x, y)); break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
}

int main() {
    int opcao;

    do {
        printf("\n===== BLOCO 4 =====\n");
        printf("16 - Potencia\n");
        printf("17 - Fatorial\n");
        printf("18 - Conversao de tempo\n");
        printf("19 - Maior e menor\n");
        printf("20 - Calculadora\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 16: exercicio16(); break;
            case 17: exercicio17(); break;
            case 18: exercicio18(); break;
            case 19: exercicio19(); break;
            case 20: exercicio20(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
