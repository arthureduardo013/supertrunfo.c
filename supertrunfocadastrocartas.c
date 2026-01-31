#include <stdio.h>

int main() {

    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];
    char codigoCarta1[10], codigoCarta2[10];

    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;

    float area1, area2;
    float pib1, pib2;

    // Cadastro da primeira cidade
    printf("Nome do Estado 1: ");
    scanf("%s", estado1);

    printf("Codigo da carta 1: ");
    scanf("%s", codigoCarta1);

    printf("Nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Populacao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Area da cidade 1: ");
    scanf("%f", &area1);

    printf("PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda cidade
    printf("\nNome do Estado 2: ");
    scanf("%s", estado2);

    printf("Codigo da carta 2: ");
    scanf("%s", codigoCarta2);

    printf("Nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Populacao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Area da cidade 2: ");
    scanf("%f", &area2);

    printf("PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados
    printf("\n--- DADOS CADASTRADOS ---\n");

    printf("\nCidade 1:");
    printf("\nEstado: %s", estado1);
    printf("\nCodigo da carta: %s", codigoCarta1);
    printf("\nCidade: %s", cidade1);
    printf("\nPopulacao: %d", populacao1);
    printf("\nArea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos turisticos: %d\n", pontosTuristicos1);

    printf("\nCidade 2:");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo da carta: %s", codigoCarta2);
    printf("\nCidade: %s", cidade2);
    printf("\nPopulacao: %d", populacao2);
    printf("\nArea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}
