#include <stdio.h>
#include <string.h> // Adicionado para usar strcmp

// Definição da estrutura da carta
typedef struct {
  char estado;
  char codigoCarta[4];
  char nomeCidade[50];
  int populacao;
  float area;
  float pib;
  int numPontosTuristicos;
} CartaSuperTrunfo;

int main() {
  // Declaração das duas cartas
  CartaSuperTrunfo carta1, carta2;

  // Leitura dos dados da primeira carta
  printf("Digite os dados da primeira carta:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &carta1.estado);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", carta1.codigoCarta);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]s", carta1.nomeCidade); // Lê a linha inteira, incluindo espaços
  printf("População: ");
  scanf("%d", &carta1.populacao);
  printf("Área (km²): ");
  scanf("%f", &carta1.area);
  printf("PIB: ");
  scanf("%f", &carta1.pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta1.numPontosTuristicos);

  // Leitura dos dados da segunda carta
  printf("\nDigite os dados da segunda carta:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &carta2.estado);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", carta2.codigoCarta);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]s", carta2.nomeCidade); // Lê a linha inteira, incluindo espaços
  printf("População: ");
  scanf("%d", &carta2.populacao);
  printf("Área (km²): ");
  scanf("%f", &carta2.area);
  printf("PIB: ");
  scanf("%f", &carta2.pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta2.numPontosTuristicos);

  // Exibição dos dados das cartas
  printf("\nDados da primeira carta:\n");
  printf("Estado: %c\n", carta1.estado);
  printf("Código da Carta: %s\n", carta1.codigoCarta);
  printf("Nome da Cidade: %s\n", carta1.nomeCidade);
  printf("População: %d\n", carta1.populacao);
  printf("Área: %.2f km²\n", carta1.area);
  printf("PIB: %.2f\n", carta1.pib);
  printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);

  printf("\nDados da segunda carta:\n");
  printf("Estado: %c\n", carta2.estado);
  printf("Código da Carta: %s\n", carta2.codigoCarta);
  printf("Nome da Cidade: %s\n", carta2.nomeCidade);
  printf("População: %d\n", carta2.populacao);
  printf("Área: %.2f km²\n", carta2.area);
  printf("PIB: %.2f\n", carta2.pib);
  printf("Número de Pontos Turísticos: %d\n", carta2.numPontosTuristicos);

  // Lógica de comparação e determinação da vencedora
    int escolha;
    printf("\nEscolha o critério de comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    scanf("%d", &escolha);

    int resultado = 0; // 0 para empate, 1 para carta1, 2 para carta2

    switch (escolha) {
        case 1:
            if (carta1.populacao > carta2.populacao) resultado = 1;
            else if (carta2.populacao > carta1.populacao) resultado = 2;
            break;
        case 2:
            if (carta1.area > carta2.area) resultado = 1;
            else if (carta2.area > carta1.area) resultado = 2;
            break;
        case 3:
            if (carta1.pib > carta2.pib) resultado = 1;
            else if (carta2.pib > carta1.pib) resultado = 2;
            break;
        case 4:
            if (carta1.numPontosTuristicos > carta2.numPontosTuristicos) resultado = 1;
            else if (carta2.numPontosTuristicos > carta1.numPontosTuristicos) resultado = 2;
            break;
        default:
            printf("Escolha inválida!\n");
            return 1; // Encerra o programa com erro
    }

    // Exibe o resultado
    if (resultado == 1) printf("\nCarta 1 vence!\n");
    else if (resultado == 2) printf("\nCarta 2 vence!\n");
    else printf("\nEmpate!\n");

}