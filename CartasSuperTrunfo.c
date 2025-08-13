#include <stdio.h>

int main(){
    printf("Desafio cartas super trunfo /n");
    
    
int main() {
    // Carta 1
    char codigo1[4];
    int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontos2;

    // Leitura Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Leitura Carta 2
    printf("/n=== Cadastro da Carta 2 ===/n");
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados
    printf("/n--- Dados da Carta 1 ---\n");
    printf("Codigo: %s/n", codigo1);
    printf("Populacao: %d/n", populacao1);
    printf("Area: %.2f km²/n", area1);
    printf("PIB: %.2f bilhões/n", pib1);
    printf("Pontos Turisticos: %d/n", pontos1);

    printf("/n--- Dados da Carta 2 ---/n");
    printf("Codigo: %s/n", codigo2);
    printf("Populacao: %d/n", populacao2);
    printf("Area: %.2f km²/n", area2);
    printf("PIB: %.2f bilhões/n", pib2);
    printf("Pontos Turisticos: %d/n", pontos2);

    return 0;

}