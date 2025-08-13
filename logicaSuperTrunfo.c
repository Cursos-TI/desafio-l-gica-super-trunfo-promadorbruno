#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado[20] = "Ceara";
    char codigo[5] = "A01";
    char cidade[30] = "Fortaleza";
    unsigned long int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int turistico = 50;
    float densidade = (float)populacao / area;
    float percapita = (pib * 1000000000) / populacao;

    // Carta 2
    char estado1[20] = "Para";
    char codigo1[5] = "B02";
    char cidade1[30] = "Belem";
    unsigned long int populacao1 = 6748000;
    float area1 = 1200.25;
    float pib1 = 300.50;
    int turistico1 = 30;
    float densidade1 = (float)populacao1 / area1;
    float percapita1 = (pib1 * 1000000000) / populacao1;

    int opcao;

    // Menu interativo
    printf("\n=== SUPER TRUNFO - COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - Renda Percapita\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação ===\n");

    switch (opcao) {
        case 1: // População
            printf("População:\n%s: %lu\n%s: %lu\n", cidade, populacao, cidade1, populacao1);
            if (populacao > populacao1) {
                printf("Vencedor: %s\n", cidade);
            } else if (populacao1 > populacao) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área:\n%s: %.2f km²\n%s: %.2f km²\n", cidade, area, cidade1, area1);
            if (area > area1) {
                printf("Vencedor: %s\n", cidade);
            } else if (area1 > area) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB:\n%s: R$ %.2f bilhões\n%s: R$ %.2f bilhões\n", cidade, pib, cidade1, pib1);
            if (pib > pib1) {
                printf("Vencedor: %s\n", cidade);
            } else if (pib1 > pib) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos:\n%s: %d\n%s: %d\n", cidade, turistico, cidade1, turistico1);
            if (turistico > turistico1) {
                printf("Vencedor: %s\n", cidade);
            } else if (turistico1 > turistico) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Densidade Demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade, densidade, cidade1, densidade1);
            if (densidade < densidade1) {
                printf("Vencedor: %s\n", cidade);
            } else if (densidade1 < densidade) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                printf("Empate!\n");
            }
            break;
        case 6: // Percapita
            printf("Percapita:\n%s: R$ %.2f \n%s: R$ %.2f \n", cidade, percapita, cidade1, percapita1);
            if (percapita > percapita1) {
                printf("Vencedor: %s\n", cidade);
            } else if (percapita > percapita1) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}