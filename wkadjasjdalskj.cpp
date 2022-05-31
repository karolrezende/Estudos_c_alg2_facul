#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool ePalindromo(char *entrada);

int main() {
    printf("%s \n", (ePalindromo("asa") ? "Sim" : "Nao"));
    return EXIT_SUCCESS;
}

bool ePalindromo(char *entrada) {
    // Descobrir a quantidade de letras
    int tamanho;
    for (tamanho = 0; entrada[tamanho] != '\0'; ++tamanho);

    // Criar uma copia invertida
    char inverso[tamanho + 1];

    for (int i = 0, j = tamanho - 1; i < tamanho; ++i, --j) {
        inverso[j] = entrada[i];
    }

    inverso[tamanho] = '\0';

    // Verifica se sao iguais
    return strcmp(entrada, inverso) == 0;
}

