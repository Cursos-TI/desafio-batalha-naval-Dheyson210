#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (usando while)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Simulação do movimento da Rainha (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

}