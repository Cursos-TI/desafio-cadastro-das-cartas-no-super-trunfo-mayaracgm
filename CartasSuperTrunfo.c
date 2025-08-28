#include <stdio.h>

int main() {
    
    //não é negativo e aceita até 4 bilhões ou mais
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

//1 indica vitória da Carta 1, 0 indica vitória da Carta 2
printf("População - Carta 1 vence? %d\n", populacao1 > populacao2);
printf("Área - Carta 1 vence? %d\n", area1 > area2);
printf("PIB - Carta 1 vence? %d\n", pib1 > pib2);
printf("Pontos Turísticos - Carta 1 vence? %d\n", pontosTuristicos1 > pontosTuristicos2);
printf("Densidade Populacional - Carta 1 vence? %d\n", densidade1 < densidade2); // menor vence
printf("PIB per capita - Carta 1 vence? %d\n", percap1 > percap2);
printf("Super Poder - Carta 1 vence? %d\n", superPoder1 > superPoder2);

    int opcao;

    printf("\n--------------------- MENU DE COMPARAÇÃO ---------------------\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s vs %s\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1:
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Carta 1 vence!\n");
            else if (populacao2 > populacao1)
                printf("Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2lf km² vs %.2lf km²\n", area1, area2);
            if (area1 > area2)
                printf("Carta 1 vence!\n");
            else if (area2 > area1)
                printf("Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2lf bilhões vs %.2lf bilhões\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Carta 1 vence!\n");
            else if (pib2 > pib1)
                printf("Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Carta 1 vence!\n");
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2lf hab/km² vs %.2lf hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Carta 1 vence!\n");
            else if (densidade2 < densidade1)
                printf("Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("PIB per capita: %.2lf vs %.2lf\n", percap1, percap2);
            if (percap1 > percap2)
                printf("Carta 1 vence!\n");
            else if (percap2 > percap1)
                printf("Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Super Poder: %.2lf vs %.2lf\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Carta 1 vence!\n");
            else if (superPoder2 > superPoder1)
                printf("Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
            break;
    }

    return 0;
}
