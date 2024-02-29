#include <stdio.h>
#define TAMANHO_VETOR 31

float menorFaturamento(float faturamento[]) {
    float menor = faturamento[0];
    for (int i = 1; i < TAMANHO_VETOR; i++) {
        if (faturamento[i] < menor) {
            menor = faturamento[i];
        }
    }
    return menor;
}
float maiorFaturamento(float faturamento[]) {
    float maior = faturamento[0];
    for (int i = 1; i < TAMANHO_VETOR; i++) {
        if (faturamento[i] > maior) {
            maior = faturamento[i];
        }
    }
    return maior;
}

float mediaFaturamento(float faturamento[]) {
    float total = 0;
    int diasComFaturamento = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (faturamento[i] > 0) {
            total += faturamento[i];
            diasComFaturamento++;
        }
    }
    return total / diasComFaturamento;
}

int diasAcimaDaMedia(float faturamento[]) {
    float media = mediaFaturamento(faturamento);
    int diasAcima = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (faturamento[i] > media) {
            diasAcima++;
        }
    }
    return diasAcima;
}

int main() {
    FILE *arquivo;
    float faturamento[TAMANHO_VETOR];
    int i = 0;

    arquivo = fopen("faturamento.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (i < TAMANHO_VETOR && fscanf(arquivo, "%f", &faturamento[i]) == 1) {
        i++;
    }

    fclose(arquivo);

    float menor = menorFaturamento(faturamento);
    float maior = maiorFaturamento(faturamento);

    float media = mediaFaturamento(faturamento);

    int diasAcimaMedia = diasAcimaDaMedia(faturamento);

    printf("Menor valor de faturamento diário: %.2f\n", menor);
    printf("Maior valor de faturamento diário: %.2f\n", maior);
    printf("Média de faturamento mensal: %.2f\n", media);
    printf("Número de dias acima da média: %d\n", diasAcimaMedia);

    return 0;
}

