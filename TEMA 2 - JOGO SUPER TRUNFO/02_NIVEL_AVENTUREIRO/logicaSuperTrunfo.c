#include <stdio.h>

int main()
{
    // Variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float areaKm1, areaKm2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float perCapita1, perCapita2;
    float somaPoder1, somaPoder2;
    int opcao; // variavel do menu interativo

    // Coleta e armazena as informaçoes da Carta 1
    printf("\nCarta 1\n");
    printf("Digite uma letra de A até H:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade ex: A01, B02:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade:\n");
    scanf("%f", &areaKm1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Coleta e armazena as informaçoes da Carta 2
    printf("\nCarta 2\n");
    printf("Digite uma letra de A até H:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade ex: A01, B02:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade:\n");
    scanf("%f", &areaKm2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional1 = populacao1 / areaKm1;
    densidadePopulacional2 = populacao2 / areaKm2;
    perCapita1 = (pib1 * 1000000000) / (float)populacao1;
    perCapita2 = (pib2 * 1000000000) / (float)populacao2;
    somaPoder1 = ((float)populacao1 + areaKm1 + pib1 + pontosTuristicos1 + perCapita1) + (1 / densidadePopulacional1);
    somaPoder2 = ((float)populacao2 + areaKm2 + pib2 + pontosTuristicos2 + perCapita2) + (1 / densidadePopulacional2);

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. Nome da cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    // Não importa a escolha do usuário: as cidades sempre serão exibida e por isso foi adcionado antes do SWITCH
    printf("\nComparação entre %s e %s\n", cidade1, cidade2); 

    switch (opcao) {
        case 1:
            // Nome da cidade: apenas sera ixibido na impressao de dados
            printf("Nome da cidade 1: %s\n", cidade1);
            printf("Nome da cidade 2: %s\n", cidade2);
            printf("Obs: Este atributo não define vencedor.\n");
            break;

        case 2:
            // População: maior vence
            printf("População %s: %lu\n", cidade1, populacao1);
            printf("População %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            // Área: maior vence
            printf("Área de %s: %.2f km²\n", cidade1, areaKm1);
            printf("Área de %s: %.2f km²\n", cidade2, areaKm2);
            if (areaKm1 > areaKm2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (areaKm2 > areaKm1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            // PIB: maior vence
            printf("PIB de %s: R$ %.2f bilhões\n", cidade1, pib1);
            printf("PIB de %s: R$ %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            // Pontos turísticos: maior vence
            printf("Pontos turísticos de %s: %d\n", cidade1, pontosTuristicos1);
            printf("Pontos turísticos de %s: %d\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            // Densidade demográfica: menor vence
            printf("Densidade demográfica de %s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
            printf("Densidade demográfica de %s: %.2f hab/km²\n", cidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
