#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações

int main(){
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

    //Operadores matemáticos 
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2, percapita1 = pib1 / populacao1, percapita2 = pib2/populacao2;

    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + percapita1 + (1.0 / densidade1), superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + percapita2 + (1.0 / densidade2);

    //Estruta de comparação
    int comp_populacao = populacao1 > populacao2, comp_area = area1 > area2, comp_pib = pib1 > pib2, comp_turismo = turismo1 > turismo2, comp_densidade = densidade1 < densidade2, comp_percapita = percapita1 > percapita2, comp_poder = superpoder1 > superpoder2;

    //Exibição dos dados da cidade
    printf(
        "Carta 1 \n"
        "Estado: %s \n"
        "Código: %s \n"
        "Nome da cidade: %s \n"
        "População: %d \n"
        "Área: %.2f km² \n"
        "PIB: %.2f bilhôes de reais \n"
        "Número de pontos turisticos: %d \n"
        "Densidade populacional: %.2f hab/km² \n"
        "PIB per capita: %.2f reais \n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1, densidade1, percapita1);

    printf(
        "Carta 2 \n"
        "Estado: %s \n"
        "Código: %s \n"
        "Nome da cidade: %s \n"
        "População: %d \n"
        "Área: %.2f km² \n"
        "PIB: %.2f bilhões de reais \n"
        "Número de pontos turisticos: %d \n"
        "Densidade populacional: %.2f hab/km² \n"
        "PIB per capita: %.2f reais \n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2, densidade2, percapita2);

    //Exibição da comparação    
    printf ( 
            "Comparação de cartas\n"
            "População: Carta %d venceu (%d)\n"
            "Área: Carta %d venceu (%d)\n"
            "PIB: Carta %d venceu (%d)\n"
            "Pontos Turísticos: Carta %d venceu (%d)\n"
            "Densidade Populacional: Carta %d venceu (%d)\n"
            "PIB per Capita: Carta %d venceu (%d)\n"
            "Super Poder: Carta %d venceu (%d)\n", comp_populacao ?1:2, comp_populacao, comp_area ?1:2, comp_area, comp_pib ?1:2, comp_pib, comp_turismo ?1:2, comp_turismo, comp_densidade ?1:2, comp_densidade, comp_percapita ?1:2, comp_percapita, comp_poder ?1:2, comp_percapita);

    return 0;

}
