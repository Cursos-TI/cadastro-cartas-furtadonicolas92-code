#include <stdio.h>

// Tamanho máximo para strings
#define TAM_CODIGO 4
define TAM_NOME 50

int main() {
    // Carta 1 - Belo Horizonte
    char estado1 = 'A';
    char codigo1[TAM_CODIGO] = "A01";
    char nomeCidade1[TAM_NOME] = "Belo Horizonte";
    int populacao1 = 2523000;
    float area1 = 331.4;
    float pib1 = 88.0;
    int pontosTuristicos1 = 15;

    // Carta 2 - Brasília
    char estado2 = 'B';
    char codigo2[TAM_CODIGO] = "B02";
    char nomeCidade2[TAM_NOME] = "Brasília";
    int populacao2 = 3055149;
    float area2 = 5802.0;
    float pib2 = 150.0;
    int pontosTuristicos2 = 25;

    // Exibição das cartas
    printf("\n--- Cartas Cadastradas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
