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


    // Exibição da comparação das cartas juntamente com o resultado dos vencedores:

    // Atributo -> População

    printf("\nComparação das Cartas - Atributo: População\n");

    printf("\nCarta 1: %.2f - Carta 2: %.2f\n", populacao1, populacao2); 

    if (populacao1 > populacao2) {
        
    printf("Carta 1 tem maior população, ela venceu!\n");

    } else {

    printf("Carta 2 tem maior população, ela venceu!\n");

    }


    // Atributo -> Área

    printf("\nAtributo: Área\n");

    printf("Carta 1: %.2f - Carta 2: %.2f\n", area1, area2); 

    if (area1 > area2) {
        
    printf("Carta 1 tem a maior área, ela venceu!\n");

    } else {

    printf("Carta 2 tem a maior área, ela venceu!\n");

    }

    // Atributo -> PIB

    printf("\nAtributo: PIB\n");

    printf("Carta 1: %.2f - Carta 2: %.2f\n", pib1, pib2); 

    if (pib1 > pib2) {
        
    printf("Carta 1 tem o maior pib, ela venceu!\n");

    } else {

    printf("Carta 2 tem o maior pib, ela venceu!\n");

    }

    // Atributo -> Densidade Populacional

    printf("\nAtributo: Densidade Populacional\n");

    printf("Carta 1: %.2f - Carta 2: %.2f\n", densidadepopulacional1, densidadepopulacional2); 

    if (densidadepopulacional1 < densidadepopulacional2) {
        
    printf("Carta 1 tem a menor densidade populacional, ela venceu!\n");

    } else {

    printf("Carta 2 tem a menor densidade populacional, ela venceu!\n");

    }

    // Atributo -> PIB Per Capita

    printf("\nAtributo: PIB Per Capita\n");

    printf("Carta 1: %.2f - Carta 2: %.2f\n", pibpercapita1, pibpercapita2); 

    if (pib1 > pib2) {
        
    printf("Carta 1 tem o maior pib per capita, ela venceu!\n");

    } else {

    printf("Carta 2 tem o maior pib per capita, ela venceu!\n");

    }

    // Fim do desafio nível novato

    return 0;

}