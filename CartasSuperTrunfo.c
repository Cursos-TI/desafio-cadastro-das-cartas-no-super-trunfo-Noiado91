#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    
    char codigo1[] = "GO01";
    char nomeCidade1[] = "Goiânia";
    int populacao1 = 1437366;
    float area1 = 728.8;
    float pib1 = 336.7;
    int pontosTuristicos1 = 30;

    char codigo2[] = "BAH01";
    char nomeCidade2[] = "Salvador";
    int populacao2 = 2417678;
    float area2 = 693.8;
    float pib2 = 63.0;
    int pontosTuristicos2 = 60;

    printf("\n================== CARTA 1 ==================\n");
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n================== CARTA 2 ==================\n");
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}