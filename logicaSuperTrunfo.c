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
        printf("População: %lu\n", populacao1);
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
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

        printf("\n");

      int escolhaJogador1, escolhaJogador2; // Menu do Jogo
      int resultado1, resultado2;
      float valor1a, valor1b, valor2a, valor2b;

        printf("  -- Jogo Super Trunfo --  \n");
        printf("Escolha o primeiro atributo para a comparação: \n");  // escolha do primeiro atributo para a comparação //
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos Turísticos \n");
        printf("5. Densidade Demográfica \n");
        printf("6. PIB Per Capita \n");
        printf("Sua escolha: ");
        scanf("%d", &escolhaJogador1);

               // Estrutura do switch para a primeira escolha

      switch (escolhaJogador1){
        case 1:
            printf("Atributo escolhido: População \n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: Área \n");
            resultado1 = area1 > area2 ? 1 :0;
            break;
        case 3:
            printf("Atributo escolhido: PIB \n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido: Pontos Turísticos \n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido: Densidade Demográfica \n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: PIB Per Capita \n");
            resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            break;
        default:
            printf("Opção Inválida. \n");
            break;
      }

                    // escolha do segundo atributo para a comparação //

        printf("Escolha o segundo atributo para a comparação: \n");
        printf("1. População \n");
        printf("2. Área \n");
        printf("3. PIB \n");
        printf("4. Pontos Turísticos \n");
        printf("5. Densidade Demográfica \n");
        printf("6. PIB Per Capita \n");
        printf("Sua escolha: ");
        scanf("%d", &escolhaJogador2);

        if (escolhaJogador1 == escolhaJogador2){
            printf("Você escolheu o mesmo atributo \n");
        } else {
            switch (escolhaJogador2){
        case 1:
            printf("Atributo escolhido: População \n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo escolhido: Área \n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo escolhido: PIB \n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido: Pontos Turísticos \n");
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido: Densidade Demográfica \n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: PIB Per Capita \n");
            resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            break;
        default:
            printf("Opção Inválida \n");
            break;
            }
        }

                        // resultado da comparação do primeiro atributo

            printf(" ===== Resultado da Comparação =====\n");

            printf("\n");

            printf("  %s  --  %s\n", cidade1, cidade2);

        switch (escolhaJogador1){
        case 1:
            printf("  Atributo 1 -- População: %d (Carta 1)  vs  %d (Carta 2) \n", populacao1, populacao2);
            break;
        case 2:
            printf("  Atributo 1 -- Área: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", area1, area2);
            break;
        case 3:
            printf("  Atributo 1 -- PIB: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", pib1, pib2);
            break;
        case 4:
            printf("  Atributo 1 -- Pontos Turísticos: %d (Carta 1)  vs  %d (Carta 2) \n", pontosTuristicos1, pontosTuristicos2);
            break;
        case 5:
            printf("  Atributo 1 -- Densidade Demográfica: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", densidade1, densidade2);
            break;
        case 6:
            printf("  Atributo 1 -- PIB Per Capita: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", pibPerCapita1, pibPerCapita2);
            break;
        }

                            // resultado da comparação do segundo atributo

        switch (escolhaJogador2){
        case 1:
            printf("  Atributo 2 -- População: %d (Carta 1)  vs  %d (Carta 2) \n", populacao1, populacao2);
            break;
        case 2:
            printf("  Atributo 2 -- Área: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", area1, area2);
            break;
        case 3:
            printf("  Atributo 2 -- PIB: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", pib1, pib2);
            break;
        case 4:
            printf("  Atributo 2 -- Pontos Turísticos: %d (Carta 1)  vs  %d (Carta 2) \n", pontosTuristicos1, pontosTuristicos2);
            break;
        case 5:
            printf("  Atributo 2 -- Densidade Demográfica: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", densidade1, densidade2);
            break;
        case 6:
            printf("  Atributo 2 -- PIB Per Capita: %.2f (Carta 1)  vs  %.2f (Carta 2) \n", pibPerCapita1, pibPerCapita2);
            break;
        }

                            // soma dos atributos de cada carta


    return 0;
}
