#include <stdio.h>

//Legenda das cartas 
/*  1 string 2 codigo da carta 3 Nome da Cidade 4 população 5 area 6 PIP 7 Turismo 
Criado por Ivan Fernandes 19/09/2025 
Versão 1.0 
Curso Redes de Computadores 2025.3 */

int main() {
    //Carta 1
    char Estado1;
    char Codigo1[10];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    //Carta 2
    char Estado2;
    char Codigo2[10];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    //Entrada Carta 1
    printf("Cadastro da Carta 1: \n");
    printf("Digite o Estado: ");
    scanf(" %c", &Estado1);
    getchar();

    printf("Digite o Código da Carta (ex: A1 B2): ");
    scanf(" %s", &Codigo1);
    getchar();

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", &Cidade1);
    getchar();

    printf("Digite a População: ");
    scanf(" %d", &Populacao1);
    getchar();

    printf("Digite a Área (km²): ");
    scanf(" %f", &Area1);
    getchar();

    printf("Digite o PIB (Reais): ");
    scanf(" %f", &Pib1);
    getchar();

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &PontosTuristicos1);
    getchar();

    //Entrada Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &Estado2);
    getchar();

    printf("Digite o Código da Carta (ex: A1 B2): ");
    scanf("%s", Codigo2);
    getchar();

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", Cidade2);
    getchar();

    printf("Digite a População: ");
    scanf("%d", &Populacao2);
    getchar();

    printf("Digite a Área (km²): ");
    scanf("%f", &Area2);
    getchar();

    printf("Digite o PIB (Reais): ");
    scanf("%f", &Pib2);
    getchar();

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos2);
    getchar();

    // Print da Carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    // PrintCarta 2
    printf("\n Carta 2 \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    // --- INÍCIO DA LÓGICA DE COMPARAÇÃO (TEMA 2 - NOVATO) ---

printf("\n--- Duelo de Cartas: Comparando a População ---\n");

if (Populacao1 > Populacao2) {
    printf("Resultado: A Carta 1 venceu por ter maior população!\n");
} else if (Populacao2 > Populacao1) {
    printf("Resultado: A Carta 2 venceu por ter maior população!\n");
} else {
    printf("Resultado: Houve um empate no atributo população!\n");
}

}