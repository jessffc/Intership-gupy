#include<stdio.h>

int fibonacci(int j) {
    if (j <= 1) {
        return j;
    }
    else {
        return fibonacci(j-1) + fibonacci(j-2);
    }
}

void verificarFibonacci(int num) {
    int i = 0;
    int resultado = fibonacci(i);

    while (resultado < num) {
        i++;
        resultado = fibonacci(i);
    }

    if (resultado == num) {
        printf("%d faz parte da sequência de Fibonacci.\n", num);
    }
    else {
        printf("%d NÃO faz parte da sequência de Fibonacci.\n", num);
    }
}

int main() {
    int i;
    printf("Digite um número:");
    scanf("%d", &i);
    verificarFibonacci(i);
    return 0;
}
