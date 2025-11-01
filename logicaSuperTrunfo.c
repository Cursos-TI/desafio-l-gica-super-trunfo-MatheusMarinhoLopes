#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // declarando variáveis da carta 1

        char estado1;
        char codigo1[4];
        char cidade1[50];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;
        float densidade1;
        float pibPerCapita1;
        float superPoder1;

  // declarando variavéis da carta 2

        char estado2;
        char codigo2[4];
        char cidade2[50];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
        float densidade2;
        float pibPerCapita2;
        float superPoder2;

  // Área para entrada de dados
  // cadastrando a carta 1

        printf("Cadastro da Carta 1: \n");
        printf("Digite o estado(A-H): ");
        scanf(" %c", &estado1);

        printf("Digite o codigo da carta(ex: A01): ");
        scanf(" %s", codigo1);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &cidade1);

        printf("Digite a população: ");
        scanf(" %lu", &populacao1);

        printf("Digite a área em km²: ");
        scanf(" %f", &area1);

        printf("Digite o PIB: ");
        scanf(" %f", &pib1);

        printf("Digite o número de pontos turisticos: ");
        scanf(" %d", &pontosTuristicos1);

        printf("\n");

        // cadastrando a carta 2

         int c;
         while ((c = getchar()) != '\n' && c != EOF) {} // usei essas duas linhas de codigo para corrigir o erro de não impressão dos resultados

        printf("Cadastro da Carta 2: \n");
        printf("Digite o estado(A-H): ");
        scanf(" %c", &estado2);

        printf("Digite o codigo da carta(ex: B03): ");
        scanf(" %s", codigo2);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &cidade2);

        printf("Digite a população: ");
        scanf(" %lu", &populacao2);

        printf("Digite a área em km²: ");
        scanf(" %f", &area2);

        printf("Digite o PIB: ");
        scanf(" %f", &pib2);

        printf("Digite o número de pontos turisticos: ");
        scanf(" %d", &pontosTuristicos2);

        printf("\n");

        // cálculos de densidade e pib per capita
        
        densidade1 = populacao1 / area1;
        pibPerCapita1 = (pib1 * 1000000000) / populacao1;

        densidade2 = populacao2 / area2;
        pibPerCapita2 = (pib2 * 1000000000)/ populacao2;

  // Área para exibição dos dados da cidade
  // saída dos dados cadastrados da carta 1

        printf("    Carta 1    \n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

        printf("\n");

        // saída dos dados cadastrados da carta 2

        printf("    Carta 2    \n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

        printf("\n");

      int escolhaJogador; // Menu do Jogo

        printf("  -- Jogo Super Trunfo --  \n");
        printf("Escolha um atributo para a comparação: \n");
        printf("1. Cidade \n");
        printf("2. População \n");
        printf("3. Área \n");
        printf("4. PIB \n");
        printf("5. Pontos Turísticos \n");
        printf("6. Densidade Demográfica \n");
        printf("Sua escolha: ");
        scanf("%d", &escolhaJogador);

        printf("  -- Resultado da Comparação --  ");

               // Estrutura do switch com if e else e seus resultados

      switch (escolhaJogador){
        case 1:
            printf("%s vs %s \n", cidade1, cidade2);
            printf("Esse atributo não define vencedor — é apenas informativo.\n");
            break;
        case 2:
            printf("População:\n%s: %lu habitantes\n%s: %lu habitantes\n", cidade1, populacao1, cidade2, populacao2);
        if (populacao1 > populacao2){
            printf("Vencedor: %s (Carta 1) \n", cidade1);
        } else if (populacao2 > populacao1){
            printf("Vencedor: %s (Carta 2) \n", cidade2);
        } else {
            printf("  Empate  \n");
        }
            break;
        case 3:
            printf("Área:\n%s: %.2f km²\n%s: %.2f km²\n", cidade1, area1, cidade2, area2);
        if (area1 > area2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("PIB:\n%s: %.2f bilhões\n%s: %.2f bilhões\n", cidade1, pib1, cidade2, pib2);
        if (pib1 > pib2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
        } else if (pib2 > pib1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
        } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Pontos Turísticos:\n%s: %d\n%s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
        } else {
                printf("Empate!\n");
            }
            break;
        case 6:
            printf("Densidade Demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
        if (densidade1 < densidade2) {
                printf("Vencedor: %s (Carta 1 — menor densidade vence)\n", cidade1);
        } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Carta 2 — menor densidade vence)\n", cidade2);
        } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. \n");
            break;
      }

        printf("\n");

    return 0;
}
