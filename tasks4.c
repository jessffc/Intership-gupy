#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int tamanho = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Exemplo";

    printf("String original: %s\n", str);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}
