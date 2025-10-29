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

        // cálculos do "Super Poder" das cartas
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

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

            // comparações das cartas

        int vitoriaPopulacao = populacao1 > populacao2;
        int vitoriaArea = area1 > area2;
        int vitoriaPib = pib1 > pib2;
        int vitoriaPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
        int vitoriaDensidade = densidade1 < densidade2;
        int vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
        int vitoriaSuperPoder = superPoder1 > superPoder2;

        // resultados

        printf("  Resultado da comparação das cartas  \n");
        printf("População: Carta 1 venceu (%d)\n", vitoriaPopulacao);
        printf("Área: Carta 1 venceu (%d)\n", vitoriaArea);
        printf("Pib: Carta 1 venceu (%d)\n", vitoriaPib);
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vitoriaPontosTuristicos);
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", vitoriaDensidade);
        printf("Pib Per Capita: Carta 1 venceu (%d)\n", vitoriaPibPerCapita);
        printf("Super Poder: Carta 1 venceu (%d)\n", vitoriaSuperPoder);

        printf("\n");

                // adicionei a comparação do atributo e o resultado utilizando if e else

        printf("Comparação de cartas (Atributo: População): \n");
        printf("Carta 1 - São Paulo (SP): %d\n", populacao1);
        printf("Carta 2 - Rio de Janeiro (RJ): %d\n", populacao2);

        printf("\n");

        if (populacao1 > populacao2){
            printf("Carta 1 (São Paulo) venceu! \n");
        } else {
            printf("Carta 2 (Rio de Janeiro) venceu! \n");
        }

        printf("\n");

    return 0;
}
