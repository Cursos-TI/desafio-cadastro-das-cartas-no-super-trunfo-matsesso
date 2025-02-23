#include <stdio.h>

// Programa Super Trunfo - Países (Nível Mestre)

int main() {
    // Declaração das variáveis para a Carta 1
    // unsigned long int é usado para população para permitir números muito grandes
    // float é usado para valores decimais como área e PIB
    char codigo1[4];                // Código da cidade (ex: A01)
    unsigned long int populacao1;   // População total
    float area1, pib1;             // Área em km² e PIB em milhões
    int pontos_turisticos1;        // Quantidade de pontos turísticos
    float densidade1,              // Habitantes por km²
          pib_per_capita1,         // PIB dividido pela população
          super_poder1;            // Pontuação final da carta
    
    // Declaração das variáveis para a Carta 2
    // Mesma estrutura da Carta 1
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;
    
    // Cadastro da Carta 1
    // Solicita ao usuário inserir os dados básicos da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);          // Lê uma string sem espaços
    printf("População: ");
    scanf("%lu", &populacao1);     // %lu para unsigned long int
    printf("Área (km²): ");
    scanf("%f", &area1);           // %f para float
    printf("PIB (milhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1); // %d para int
    
    // Cadastro da Carta 2
    // Mesmo processo de cadastro para a segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (milhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo dos atributos derivados - Carta 1
    densidade1 = populacao1 / area1;           // Calcula habitantes por km²
    pib_per_capita1 = pib1 / populacao1;       // Calcula PIB por habitante
    // Cálculo do Super Poder: soma de todos os atributos
    // Note que a densidade é invertida (1/densidade) antes da soma
    super_poder1 = pib_per_capita1 + (1/densidade1) + pib1 + pontos_turisticos1;
    
    // Cálculo dos atributos derivados - Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = pib_per_capita2 + (1/densidade2) + pib2 + pontos_turisticos2;
    
    // Exibição dos dados das cartas
    // Mostra todos os atributos formatados da Carta 1
    printf("\n=== Dados da Carta 1 (%s) ===\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);         // %.2f limita a 2 casas decimais
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Exibição dos dados da Carta 2
    printf("\n=== Dados da Carta 2 (%s) ===\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparação das cartas
    // Retorna 1 se Carta 1 vence, 0 se Carta 2 vence
    // Para densidade, menor valor vence (por isso usa <)
    // Para os demais atributos, maior valor vence (por isso usa >)
    printf("\n=== Resultado das Comparações ===\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade populacional: %d\n", densidade1 < densidade2);
    printf("PIB per capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);
    
    return 0;
}
