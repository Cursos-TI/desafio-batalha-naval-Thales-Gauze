#include <stdio.h>

// Definições para o tamanho do tabuleiro
#define LINHAS 5
#define COLUNAS 5

int main() {
    // Matriz representando o tabuleiro
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Posição inicial do navio horizontal
    int navio_horizontal_linha = 1;
    int navio_horizontal_coluna_inicio = 0;
    int tamanho_horizontal = 3;

    // Posição inicial do navio vertical
    int navio_vertical_coluna = 3;
    int navio_vertical_linha_inicio = 0;
    int tamanho_vertical = 4;

    // Posicionando o navio horizontal
    for (int i = 0; i < tamanho_horizontal; i++) {
        tabuleiro[navio_horizontal_linha][navio_horizontal_coluna_inicio + i] = 1;
    }

    // Posicionando o navio vertical
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[navio_vertical_linha_inicio + i][navio_vertical_coluna] = 2;
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanho_horizontal; i++) {
        printf("(%d, %d)\n", navio_horizontal_linha, navio_horizontal_coluna_inicio + i);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        printf("(%d, %d)\n", navio_vertical_linha_inicio + i, navio_vertical_coluna);
    }

    return 0;
}
