#include <stdio.h>
#include <stdbool.h> // Para usar o tipo bool

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para validar se as coordenadas são válidas
bool coordenadasValidas(int linha, int coluna, int tamanho, char orientacao, int tabuleiro[][TAMANHO_TABULEIRO]) {
    if (orientacao == 'H') { // Horizontal
        if (coluna + tamanho > TAMANHO_TABULEIRO) {
            return false; // Navio sai do tabuleiro
        }
        for (int i = 0; i < tamanho; i++) {
            if (tabuleiro[linha][coluna + i] != 0) {
                return false; // Sobreposição encontrada
            }
        }
    } else if (orientacao == 'V') { // Vertical
        if (linha + tamanho > TAMANHO_TABULEIRO) {
            return false; // Navio sai do tabuleiro
        }
        for (int i = 0; i < tamanho; i++) {
            if (tabuleiro[linha + i][coluna] != 0) {
                return false; // Sobreposição encontrada
            }
        }
    }
    return true; // Coordenadas válidas
}

int main() {
    // 1. Representação do Tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // 2. Posicionamento dos Navios
    // Navio Horizontal
    int linhaHorizontal = 2;
    int colunaHorizontal = 1;
    char orientacaoHorizontal = 'H';

    // Navio Vertical
    int linhaVertical = 5;
    int colunaVertical = 3;
    char orientacaoVertical = 'V';

    // Validação e posicionamento do navio horizontal
    if (coordenadasValidas(linhaHorizontal, colunaHorizontal, TAMANHO_NAVIO, orientacaoHorizontal, tabuleiro)) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
        }
    } else {
        printf("Posição inválida para o navio horizontal.\n");
    }

    // Validação e posicionamento do navio vertical
    if (coordenadasValidas(linhaVertical, colunaVertical, TAMANHO_NAVIO, orientacaoVertical, tabuleiro)) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaVertical + i][colunaVertical] = 3;
        }
    } else {
        printf("Posição inválida para o navio vertical.\n");
    }

    // 3. Exibição do Tabuleiro
    printf("Tabuleiro da Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

}