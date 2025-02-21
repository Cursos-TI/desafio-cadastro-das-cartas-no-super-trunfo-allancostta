#include <stdio.h>

int main () {
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("--------------------------------------------\n");
    printf("*** Bem vindo ao jogo de Super Trunfo! ***\n");
    printf(" Siga os passos e cadastre suas cartas.\n");
    printf("--------------------------------------------\n");
    printf("\n");

    // Cadastro da primeira carta
    printf("Cadastre sua primeira carta!\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo da carta: ");
    scanf("%4s", codigoCarta1);
    printf("Cidade: ");
    scanf("%9s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("Pib: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastre sua segunda carta!\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo da carta: ");
    scanf("%4s", codigoCarta2);
    printf("Cidade: ");
    scanf("%9s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("Pib: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Exibindo as cartas
    printf("--------------------------------------\n");
    printf("Primeira Carta 1º.\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("Pib: %.2f milhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n");

    printf("--------------------------------------\n");
    printf("Segunda Carta 2º.\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f Km²\n", area2);
    printf("Pib: %.2f milhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("--------------------------------------\n");

    return 0;
}
