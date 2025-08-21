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

    // Cálculos da carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 
                        + pibPerCapita1 + (1.0f / densidade1);

    // Carta 2
    char codigo2[] = "BAH01";
    char nomeCidade2[] = "Salvador";
    int populacao2 = 2417678;
    float area2 = 693.8;
    float pib2 = 63.0; // em bilhões
    int pontosTuristicos2 = 60;

    // Cálculos da carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2
                        + pibPerCapita2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\n================== CARTA 1 ==================\n");
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n================== CARTA 2 ==================\n");
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações atributo por atributo
    printf("\n================== COMPARAÇÕES ==================\n");
    printf("População (maior vence): %d\n", (populacao1 > populacao2));
    printf("Área (maior vence): %d\n", (area1 > area2));
    printf("PIB (maior vence): %d\n", (pib1 > pib2));
    printf("Pontos Turísticos (maior vence): %d\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2));
    printf("PIB per Capita (maior vence): %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder (maior vence): %d\n", (superPoder1 > superPoder2));

    return 0;
}