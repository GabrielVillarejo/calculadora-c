#include <stdio.h>
#include <string.h>
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
    return a / b;
}

int main() {
    int esc;
    double num1, num2, resultado;

    printf("------------------------------\n");
    printf("(1) Somar\n");
    printf("(2) Subtrair\n");
    printf("(3) Multiplicar\n");
    printf("(4) Dividir\n");
    printf("------------------------------\n");
    printf("Escolha a opcao desejada: ");
    scanf("%d", &esc);

    if (esc < 1 || esc > 4) {
        printf("---Selecione uma opcao correta--");
        return 0;
    } else {
        printf("Escolha o primeiro numero: ");
        scanf("%lf", &num1);

        printf("Escolha o segundo numero: ");
        scanf("%lf", &num2);
    }

    switch (esc) {
        case 1:
            resultado = somar(num1, num2);
            break;
        case 2:
            resultado = subtrair(num1, num2);
            break;
        case 3:
            resultado = multiplicar(num1, num2);
            break;
        case 4:
            resultado = dividir(num1, num2);
            break;
    }

    printf("RESULTADO: %.2lf", resultado);
    return 0;
}
