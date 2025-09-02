#include <stdio.h>

int main() {

    // Desafio Lógica do Super Trunfo
    // Nível Novato: Comparação Das Cartas

    // Definição das variáveis para armazenar as propriedades das cidades

    // Primeira carta
    
    char estado1[15] = "Alagoas";
    int carta1 = 1;
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Maceió";
    int populacao1 = 995970;
    float area1 = 509;
    float pib1 = 2748401631;
    int pontosturisticos1 = 6;

    // Segunda carta

    int carta2 = 2;
    char estado2[20] = "Pará";
    char codigodacarta2[5] = "A02";
    char nomedacidade2[30] = "Belém";
    int populacao2 = 1398581;
    float area2 = 152531;
    float pib2 = 30835;
    int pontosturisticos2 = 6;

    
    // Cadastro das Cartas:

    // Primeira carta:

    
    printf("Código da carta: ");
    scanf("%s", &codigodacarta1);

    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Nome da cidade: ");
    scanf("%s", &nomedacidade1);

    printf("Populacão: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Segunda carta

    printf("Código da carta: ");
    scanf("%s", &codigodacarta2);

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Nome da cidade: ");
    scanf("%s", &nomedacidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);


    // Comparação de Cartas:

    printf("Comparação das Cartas - Atributo: População\n");

    if (populacao1 > populacao2) {
        
    printf("Carta 1 tem maior população.\n");

    } else {

    printf("Carta 2 tem maior população.\n");

    }

    printf("A cidade vencedora é: %d\n", carta1);

    
    return 0;
}
