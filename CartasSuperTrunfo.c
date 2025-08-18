#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
        
    // Carta 1
    char codigo1[] = "GO01";
    char nomeCidade1[] = "Goiânia";
    int populacao1 = 1437366;
    float area1 = 728.8;
    float pib1 = 336.7; // em bilhões
    int pontosTuristicos1 = 30;

    // Cálculos Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // converter bilhões p/ reais

    // Carta 2
    char codigo2[] = "BAH01";
    char nomeCidade2[] = "Salvador";
    int populacao2 = 2417678;
    float area2 = 693.8;
    float pib2 = 63.0; // em bilhões
    int pontosTuristicos2 = 60;

    // Cálculos Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibindo Carta 1
    printf("\n================== CARTA 1 ==================\n");
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo Carta 2
    printf("\n================== CARTA 2 ==================\n");
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}