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

    // Comparações atributo por atributo + placar
    int pontosCarta1 = 0, pontosCarta2 = 0;

    printf("\n================== COMPARAÇÃO DE CARTAS ==================\n");

    int r;

    r = (populacao1 > populacao2);
    printf("População: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    pontosCarta1 += r; pontosCarta2 += !r;

    r = (area1 > area2);
    printf("Área: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    pontosCarta1 += r; pontosCarta2 += !r;

    r = (pib1 > pib2);
    printf("PIB: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    pontosCarta1 += r; pontosCarta2 += !r;

    r = (pontosTuristicos1 > pontosTuristicos2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    pontosCarta1 += r; pontosCarta2 += !r;

    r = (densidade1 < densidade2); // menor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    pontosCarta1 += r; pontosCarta2 += !r;

    r = (pibPerCapita1 > pibPerCapita2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    pontosCarta1 += r; pontosCarta2 += !r;

    r = (superPoder1 > superPoder2);
    printf("Super Poder: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    pontosCarta1 += r; pontosCarta2 += !r;

    // Resultado final
    printf("\n================== RESULTADO FINAL ==================\n");
    printf("Placar: Carta 1 = %d | Carta 2 = %d\n", pontosCarta1, pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("A vencedora geral é: Carta 1 (%s)\n", nomeCidade1);
    } else if (pontosCarta2 > pontosCarta1) {
        printf("A vencedora geral é: Carta 2 (%s)\n", nomeCidade2);
    } else {
        printf("Empate geral entre as duas cartas!\n");
    }

    return 0;
}