#include <stdio.h>
int main() {

  // Variáveis 1º Carta
    char estado1;
    char codigo1[4];
    char cidade1[40];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_Turisticos1;
    float densidade1;
    float pibperCapita1;
    float superPoder1;

    // Variáveis 2º Carta
    char estado2;
    char codigo2[4];
    char cidade2[40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_Turisticos2;
    float densidade2;
    float pibperCapita2;
    float superPoder2;

  // Entrada 1º Carta
    printf("Cadastro da Primeira Carta\n");

    printf("\nDigite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%50[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos1);
    
    // Entrada 2º Carta
    printf("\nCadastro da Segunda Carta\n");

    printf("\nDigite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %50[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos2);

    //Densidade e PIB
    densidade1 = (float)populacao1 / area1;
    pibperCapita1 = (float)(pib1* 200000000 / populacao1);
    
    densidade2 = (float)populacao2 / area2;
    pibperCapita2 = (float)pib2* 200000000 / populacao2;

  //Inversão
  float inversoPib1;
  float inversoPib2;
  inversoPib1 = 1 / densidade1;
  inversoPib2 = 1 / densidade2;

  //Super Poder
  superPoder1 = populacao1 + area1 + pib1 + pontos_Turisticos1 + pibperCapita1 + inversoPib1;
  superPoder2 = populacao2 + area2 + pib2 + pontos_Turisticos2 + pibperCapita2 + inversoPib2;

  //Dados da cidade
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibperCapita1);
    printf("Super poder Carta 1: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);
    printf("Super poder Carta 2: %.2f\n", superPoder2);
    
    //Variaveis
    int resultadoPopulacao = (populacao1 > populacao2);
    int resultadoArea = (area1 > area2);
    int resultadoPib = (pib1 > pib2);
    int resultadoPontosT = (pontos_Turisticos1 > pontos_Turisticos2);
    int resultadoPibP1 = (pibperCapita1 > pibperCapita2);
    int resultadoSuperPoder = (superPoder1 > superPoder2);

    int resultadoDensidade = (densidade1 < densidade2);

    //Resultados das finalizações
    printf("\n*** Comparação entre as cartas ***\n");
    printf("População: Carta 1 venceu(%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu(%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu(%d)\n", resultadoPib);
    printf("Pontos Turistícos: carta 1 venceu(%d)\n", resultadoPontosT);
    printf("Densidade Populacional: Carta 2 venceu(%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu(%d)\n", resultadoPibP1);
    printf("Super Poder: Carta 1 venceu(%d)\n", resultadoSuperPoder);


    
    return 0;
} 
