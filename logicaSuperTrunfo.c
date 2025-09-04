#include <stdio.h>

int main() {

    printf("***Desafio Lógica do Super Trunfo***\n");

    printf(" - Nível Novato - Comparação Das Cartas\n");

    // Definição das variáveis para armazenar as propriedades das cidades

    // Primeira carta
    
    char estado1[15] = "Alagoas";
    int carta1 = 1;
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Maceió";
    float populacao1 = 995970;
    float area1 = 509;
    float pib1 = 2748401631;
    int pontosturisticos1 = 6;
    float pibpercapita1 = 27484011631 / 995970;
    float densidadepopulacional1 = 995970 / 509;

    // Segunda carta

    int carta2 = 2;
    char estado2[20] = "Pará";
    char codigodacarta2[5] = "A02";
    char nomedacidade2[30] = "Belém";
    float populacao2 = 1398581;
    float area2 = 152531;
    float pib2 = 30835;
    int pontosturisticos2 = 6;
    float pibpercapita2 = 30835 / 1398581;
    float densidadepopulacional2 = 1398581 / 152531;

    
    // Exibição dos dados das cartas

    printf("-> Cadastro das Cartas\n");
    
    printf("\nPrimeira carta:\n");

    
    printf("\nCódigo da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Populacão: \n");
    scanf("%f", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    
    printf("\nSegunda carta:\n");


    printf("Código da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%f", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados cadastrados da primeira carta juntamente com o PIB per capita 
    // e densidade populacional

    printf("\nDados da Primeira Carta:\n");

    printf("Código da carta: %s\n", codigodacarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    pibpercapita1 = (float)pib1 / populacao1;
    densidadepopulacional1 = (float)populacao1 / area1;
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);

    // Exibição dos dados cadastrados da segunda carta juntamente com o PIB per capita 
    // e densidade populacional

    printf("\nDados da Segunda Carta:\n");

    printf("Código da carta: %s\n", codigodacarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    pibpercapita2 = (float)pib2 / populacao2;
    densidadepopulacional2 = (float)populacao2 / area2;
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);



    printf("\n***Desafio Lógica do Super Trunfo***\n");

    printf(" - Nível Avançado - Implementando Comparações Avançadas com Atributos Múltiplos \n");

    // Declaração das variáveis
    
    int opcao1, opcao2;

    float valor1c1 = 0, valor1c2 = 0;

    float valor2c1 = 0, valor2c2 = 0;

  
    printf("Cartas:\n1) %s\n2) %s\n\n", nomedacidade1, nomedacidade2);

    // Menu 1
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade populacional (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Captura de valores do atributo 1
    switch (opcao1) {
        case 1: valor1c1 = populacao1; valor1c2 = populacao2; break;
        case 2: valor1c1 = area1; valor1c2 = area2; break;
        case 3: valor1c1 = pib1; valor1c2 = pib2; break;
        case 4: valor1c1 = pontosturisticos1; valor1c2 = pontosturisticos2; break;
        case 5: valor1c1 = pibpercapita1; valor1c2 = pibpercapita2; break;
        case 6: valor1c1 = densidadepopulacional1; valor1c2 = densidadepopulacional2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Menu 2
    printf("\nEscolha o segundo atributo para comparação:\n");
    for (int i = 1; i <= 6; i++) {
        if (i == opcao1) continue; // Não repete o mesmo atributo
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos turísticos\n"); break;
            case 5: printf("5 - PIB per capita\n"); break;
            case 6: printf("6 - Densidade populacional (menor vence)\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Você escolheu o mesmo atributo! Reinicie o programa e escolha dois diferentes.\n");
        return 1;
    }

    // Captura de valores do atributo 2
    switch (opcao2) {
        case 1: valor2c1 = populacao1; valor2c2 = populacao2; break;
        case 2: valor2c1 = area1; valor2c2 = area2; break;
        case 3: valor2c1 = pib1; valor2c2 = pib2; break;
        case 4: valor2c1 = pontosturisticos1; valor2c2 = pontosturisticos2; break;
        case 5: valor2c1 = pibpercapita1; valor2c2 = pibpercapita2; break;
        case 6: valor2c1 = densidadepopulacional1; valor2c2 = densidadepopulacional2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Comparação
    printf("\nComparação dos Atributos:\n");

    // Primeiro atributo
    printf("\nAtributo 1:\n");
    printf("%s: %.2f | %s: %.2f\n", nomedacidade1, valor1c1, nomedacidade2, valor1c2);
    if (opcao1 == 6) { // densidade → menor vence
        if (valor1c1 < valor1c2)
            printf("Vencedor do atributo 1: %s\n", nomedacidade1);
        else if (valor1c2 < valor1c1)
            printf("Vencedor do atributo 1: %s\n", nomedacidade2);
        else
            printf("Empate no atributo 1!\n");
    } else {
        if (valor1c1 > valor1c2)
            printf("Vencedor do atributo 1: %s\n", nomedacidade1);
        else if (valor1c2 > valor1c1)
            printf("Vencedor do atributo 1: %s\n", nomedacidade2);
        else
            printf("Empate no atributo 1!\n");
    }

    // Segundo atributo
    printf("\nAtributo 2:\n");
    printf("%s: %.2f | %s: %.2f\n", nomedacidade1, valor2c1, nomedacidade2, valor2c2);
    if (opcao2 == 6) { // densidade → menor vence
        if (valor2c1 < valor2c2)
            printf("Vencedor do atributo 2: %s\n", nomedacidade1);
        else if (valor2c2 < valor2c1)
            printf("Vencedor do atributo 2: %s\n", nomedacidade2);
        else
            printf("Empate no atributo 2!\n");
    } else {
        if (valor2c1 > valor2c2)
            printf("Vencedor do atributo 2: %s\n", nomedacidade1);
        else if (valor2c2 > valor2c1)
            printf("Vencedor do atributo 2: %s\n", nomedacidade2);
        else
            printf("Empate no atributo 2!\n");
    }

    // Soma dos atributos
    float soma1 = (opcao1 == 6 ? -valor1c1 : valor1c1) + (opcao2 == 6 ? -valor2c1 : valor2c1);
    float soma2 = (opcao1 == 6 ? -valor1c2 : valor1c2) + (opcao2 == 6 ? -valor2c2 : valor2c2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f | %s: %.2f\n", nomedacidade1, soma1, nomedacidade2, soma2);

    if (soma1 > soma2)
        printf("Vencedor da rodada: %s!\n", nomedacidade1);
    else if (soma2 > soma1)
        printf("Vencedor da rodada: %s!\n", nomedacidade2);
    else
        printf("Empate!\n");

    
    // Fim do desafio mestre    

    return 0;
}
