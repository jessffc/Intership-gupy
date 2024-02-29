#include <stdio.h>
#include <stdlib.h>

float percentual(float x, float total) {
    float y = x / total;
    y = y * 100;
    return y;
}

void imprimirPercentual(float valor, char estado[]) {
    printf("Percentual de %s: %.2f%%\n", estado, valor);
}

int main() {
    float SP = 67836.43;
    float RJ = 36678.66;
    float MG = 29229.88;
    float ES = 27165.48;
    float Outros = 19849.53;

    float total = SP + RJ + ES + MG + Outros;

    float percentualSP = percentual(SP, total);
    float percentualRJ = percentual(RJ, total);
    float percentualMG = percentual(MG, total);
    float percentualES = percentual(ES, total);
    float percentualOutros = percentual(Outros, total);

    imprimirPercentual(percentualSP, "SP");
    imprimirPercentual(percentualRJ, "RJ");
    imprimirPercentual(percentualMG, "MG");
    imprimirPercentual(percentualES, "ES");
    imprimirPercentual(percentualOutros, "Outros");

    return 0;
}
