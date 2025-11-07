#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[10], estado2[10], codigo1[10], codigo2[10], cidade1[100], cidade2[100];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;  

    // Área para entrada de dados
    printf("Carta 1 \n"); 
    printf("Digite a letra do estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite sua população: ");
    scanf("%d", &populacao1);

    printf("Digite a sua área(km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("Carta 2 \n");
    printf("Digite a letra do estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2); 

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite sua população: ");
    scanf("%d", &populacao2);

    printf("Digite a sua área(km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo2);  

    // Área para exibição dos dados da cidade
    printf(
        "Carta 1 \n"
        "Estado: %s \n"
        "Código: %s \n"
        "Nome da cidade: %s \n"
        "População: %d \n"
        "Área: %f km² \n"
        "PIB: %f bilhões de reais\n"
        "Número de pontos turisticos: %d \n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1);

    printf(
        "Carta 2 \n"
        "Estado: %s \n"
        "Código: %s \n"
        "Nome da cidade: %s \n"
        "População: %d \n"
        "Área: %f km² \n"
        "PIB: %f bilhões de reais \n"
        "Número de pontos turisticos: %d \n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2);  

return 0;
} 
