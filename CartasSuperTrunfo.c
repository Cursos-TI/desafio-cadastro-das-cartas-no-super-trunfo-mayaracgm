#include <stdio.h>

int main() {
    
    unsigned long populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    char estado1, estado2, codigo1[10], codigo2[10], nomeCidade1[100], nomeCidade2[100];
    double densidade1, densidade2,area1, area2, percap1, percap2, superPoder1, superPoder2, pib1, pib2;

    printf("-----------------------Cadastre a primeira carta-----------------------\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    //espaço antes do %[^\n] ignora espaços ou quebras de linha = 
    //%[^\n] significa: leia todos os caracteres até encontrar uma nova linha
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%lf", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%lf", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
   if (area1 > 0.0) {
        densidade1 = (double)populacao1 / area1;
    } else {
        densidade1 = 0.0;
        printf("Aviso: Área da Carta 1 é zero, densidade populacional não calculada.\n");
    }

    if (populacao1 > 0) {
        percap1 = (pib1 * 1000000000.0) / populacao1;
    } else {
        percap1 = 0.0;
        printf("Aviso: População da Carta 1 é zero, PIB per capita não calculado.\n");
    }

    if (densidade1 > 0.0) {
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1.0 / densidade1) + percap1 ;
    } else {
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + percap1;
        printf("Aviso: Densidade da Carta 1 é zero, inverso não incluído no Super Poder.\n");
    }

    printf("Super Poder da Carta 1: %.2lf\n", superPoder1); 

    // Segunda carta
    printf("-----------------------Cadastre a segunda carta-----------------------\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%lf", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%lf", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

     if (area2 > 0.0) {
        densidade2 = (double)populacao2 / area2;
    } else {
        densidade2 = 0.0;
        printf("Aviso: Área da Carta 2 é zero, densidade populacional não calculada.\n");
    }

    if (populacao2 > 0) {
        percap2 = (pib2 * 1000000000.0) / populacao2;
    } else {
        percap2 = 0.0;
        printf("Aviso: População da Carta 2 é zero, PIB per capita não calculado.\n");
    }

    if (densidade2 > 0.0) {
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1.0 / densidade2) + percap2;
    } else {
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2  + percap2;
        printf("Aviso: Densidade da Carta 2 é zero, inverso não incluído no Super Poder.\n");
    } 

    printf("Super Poder da Carta 2: %.2lf\n", superPoder2);

    printf("----------------------- Carta 1-----------------------\n"); 
    printf("Estado: %c\n", estado1); 
    printf("Codigo: %s\n", codigo1); 
    printf("Cidade: %s\n", nomeCidade1); 
    printf("Populacao: %lu habitantes\n", populacao1); 
    printf("Area: %.2lf km²\n", area1); 
    printf("PIB: %.2lf bilhoes de reais\n", pib1); 
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per capita: %.2lf por habitante\n", percap1); 
    printf("----------------------- Carta 2 -----------------------\n"); 
    printf("Estado: %c\n", estado2); 
    printf("Codigo: %s\n", codigo2); 
    printf("Nome da Cidade: %s\n", nomeCidade2); 
    printf("Populacao: %lu\n", populacao2); 
    printf("Area: %.2lf km²\n", area2); 
    printf("PIB: %.2lf bilhoes de reais\n", pib2); 
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per capita: %.2lf por habitante\n", percap2);

    printf("--------------------- Comparação das Cartas ---------------------\n");

// Nos seguintes casos, 1 indica vitória da Carta 1, 0 indica vitória da Carta 2
printf("População - Carta 1 vence? %d\n", populacao1 > populacao2);
printf("Área - Carta 1 vence? %d\n", area1 > area2);
printf("PIB - Carta 1 vence? %d\n", pib1 > pib2);
printf("Pontos Turísticos - Carta 1 vence? %d\n", pontosTuristicos1 > pontosTuristicos2);
printf("Densidade Populacional - Carta 1 vence? %d\n", densidade1 < densidade2); // menor vence
printf("PIB per capita - Carta 1 vence? %d\n", percap1 > percap2);
printf("Super Poder - Carta 1 vence? %d\n", superPoder1 > superPoder2);
    return 0;
}
