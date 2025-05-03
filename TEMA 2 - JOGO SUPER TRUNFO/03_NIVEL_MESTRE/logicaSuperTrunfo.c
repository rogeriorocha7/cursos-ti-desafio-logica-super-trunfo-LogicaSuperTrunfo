#include <stdio.h>

int main()
{
    // Variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char pais1[20], pais2[20];
    unsigned long int populacao1, populacao2;
    float areaKm1, areaKm2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float perCapita1, perCapita2;
    float somaPoder1, somaPoder2;
    int opcao1, opcao2; // variavel do menu interativo
    float somaAtributos1, somaAtributos2; // Para soma dos atributos

    // Coleta e armazena as informaçoes da Carta 1
    printf("\nCarta 1\n");
    printf("Digite uma letra de A até H:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade ex: A01, B02:\n");
    scanf("%s", codigo1);
    printf("Digite o nome do pais:\n");
    scanf("%s", pais1);
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área da pais:\n");
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
    printf("Digite o nome da pais:\n");
    scanf("%s", pais2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área da pais:\n");
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

    // Menu interativo para o primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    // Menu interativo para o segundo atributo, excluindo o primeiro
    printf("\nEscolha o segundo atributo para comparar:\n");
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos turísticos\n");
    if (opcao1 != 5) printf("5. Densidade demográfica\n");
    printf("Digite a opção: ");
    do {
        scanf("%d", &opcao2);
        if (opcao2 == opcao1) {
            printf("Atributo já escolhido! Escolha outro: ");
        }
        if (opcao2 < 1 || opcao2 > 5) {
            printf("Opção inválida! Escolha novamente: ");
        }
    } while (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5);

    // Comparação dos atributos
    printf("\nComparação entre %s e %s\n", pais1, pais2);

    // Variáveis para armazenar os valores dos atributos para soma
    somaAtributos1 = 0;
    somaAtributos2 = 0;

    // Comparação do primeiro atributo
    switch (opcao1) {
        case 1:
            // População: maior vence
            printf("População %s: %lu\n", pais1, populacao1);
            printf("População %s: %lu\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += populacao1;
            somaAtributos2 += populacao2;
            break;

        case 2:
            // Área: maior vence
            printf("Área de %s: %.2f km²\n", pais1, areaKm1);
            printf("Área de %s: %.2f km²\n", pais2, areaKm2);
            if (areaKm1 > areaKm2) {
                printf("Vencedor: %s\n", pais1);
            } else if (areaKm2 > areaKm1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += areaKm1;
            somaAtributos2 += areaKm2;
            break;

        case 3:
            // PIB: maior vence
            printf("PIB de %s: R$ %.2f bilhões\n", pais1, pib1);
            printf("PIB de %s: R$ %.2f bilhões\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += pib1;
            somaAtributos2 += pib2;
            break;

        case 4:
            // Pontos turísticos: maior vence
            printf("Pontos turísticos de %s: %d\n", pais1, pontosTuristicos1);
            printf("Pontos turísticos de %s: %d\n", pais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += pontosTuristicos1;
            somaAtributos2 += pontosTuristicos2;
            break;

        case 5:
            // Densidade demográfica: menor vence
            printf("Densidade demográfica de %s: %.2f hab/km²\n", pais1, densidadePopulacional1);
            printf("Densidade demográfica de %s: %.2f hab/km²\n", pais2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += densidadePopulacional1;
            somaAtributos2 += densidadePopulacional2;
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch (opcao2) {
        case 1:
            // População: maior vence
            printf("População %s: %lu\n", pais1, populacao1);
            printf("População %s: %lu\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += populacao1;
            somaAtributos2 += populacao2;
            break;

        case 2:
            // Área: maior vence
            printf("Área de %s: %.2f km²\n", pais1, areaKm1);
            printf("Área de %s: %.2f km²\n", pais2, areaKm2);
            if (areaKm1 > areaKm2) {
                printf("Vencedor: %s\n", pais1);
            } else if (areaKm2 > areaKm1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += areaKm1;
            somaAtributos2 += areaKm2;
            break;

        case 3:
            // PIB: maior vence
            printf("PIB de %s: R$ %.2f bilhões\n", pais1, pib1);
            printf("PIB de %s: R$ %.2f bilhões\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += pib1;
            somaAtributos2 += pib2;
            break;

        case 4:
            // Pontos turísticos: maior vence
            printf("Pontos turísticos de %s: %d\n", pais1, pontosTuristicos1);
            printf("Pontos turísticos de %s: %d\n", pais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += pontosTuristicos1;
            somaAtributos2 += pontosTuristicos2;
            break;

        case 5:
            // Densidade demográfica: menor vence
            printf("Densidade demográfica de %s: %.2f hab/km²\n", pais1, densidadePopulacional1);
            printf("Densidade demográfica de %s: %.2f hab/km²\n", pais2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            somaAtributos1 += densidadePopulacional1;
            somaAtributos2 += densidadePopulacional2;
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1;
    }

    // Exibição da soma dos atributos e resultado final
    printf("\nSoma dos atributos de %s: %.2f\n", pais1, somaAtributos1);
    printf("Soma dos atributos de %s: %.2f\n", pais2, somaAtributos2);
    if (somaAtributos1 > somaAtributos2) {
        printf("Vencedor final: %s\n", pais1);
    } else if (somaAtributos2 > somaAtributos1) {
        printf("Vencedor final: %s\n", pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}