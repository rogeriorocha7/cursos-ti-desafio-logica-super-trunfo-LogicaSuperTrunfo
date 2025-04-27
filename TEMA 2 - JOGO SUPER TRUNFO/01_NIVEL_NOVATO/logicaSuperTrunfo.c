#include <stdio.h>

int main()
{
    // Variáveis
    char estado1, estado2; // Variáveis para armazenas os dados das cartas (A-H)
    char codigo1[4], codigo2[4];  // Armazena o código da cidade (ex: A01, B02)
    char cidade1[20], cidade2[20]; // Armazena o nome da cidade correspondetes
    unsigned long int populacao1, populacao2; // Armazena a população das cidades correspondentes
    float areaKm1, areaKm2; // Armazena a área em Km² das cidades correspondentes
    float pib1, pib2; // Armazena o PIB das cidades correspondentes
    int pontosTuristicos1, pontosTuristicos2; // Armazena a quantidade de pontos turísticos de cada cidade
    float densidadePopulacional1, densidadePopulacional2; // Variáveis para armazenar a Densidade populacional em hab/km²
    float perCapita1, perCapita2; // Variáveis para armazenar o PIB per Capita em reais
    float somaPoder1, somaPoder2; // Variaveis para calcular os "poderes" das carta 1 e 2

    // Coleta e armazena as informaçoes da Carta 1
    printf("\nCarta 1\n"); // Título da carta do qual os dados serão soletados (Carta 1)
    printf("Digite uma letra de A até H:\n"); // Solicita ao usuário que digite uma letra de A até H
    scanf(" %c", &estado1); // Armazena a letra digitada ( A até H)
    printf("Digite o código da cidade ex: A01, B02:\n"); // Solicita ao usuário o código da cidade (ex: A01, B02)
    scanf("%s", codigo1); // Armazena a letra o código da cidade digitado
    printf("Digite o nome da cidade:\n"); // Solicita ao usuário o nome da cidade a escolha
    scanf("%s", cidade1); // Armazena o nome da cidade digitado pelo usuário
    printf("Digite a população:\n"); // Solicita ao usuário a população da cidade escolhida
    scanf("%lu", &populacao1); // Armazena o valor da população digitado
    printf("Digite a área da cidade:\n"); // Solicita ao usuário a área da cidade 
    scanf("%f", &areaKm1); // Armazena o valor da área digitada
    printf("Digite o PIB:\n"); // Solitica ao usuário o PIB da cidade
    scanf("%f", &pib1); // Armazena o valor do PIB digitado
    printf("Digite a quantidade de pontos turísticos:\n"); // Solicita ao usuário a quantidade de pontos turísticos da cidade
    scanf("%d", &pontosTuristicos1); // Armazena a quantidade de pontos turísticos que foi digitada pelo usuário

    // Coleta e armazenza as informaçoes da Carta 2
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
    perCapita1 = (pib1 * 1000000000) / (float)populacao1;

    densidadePopulacional2 = populacao2 / areaKm2;
    perCapita2 = (pib2 * 1000000000) / (float)populacao2;

    somaPoder1 = ((float)populacao1 + areaKm1 + pib1 + pontosTuristicos1 + perCapita1) + (1 / densidadePopulacional1);
    somaPoder2 = ((float)populacao2 + areaKm2 + pib2 + pontosTuristicos2 + perCapita2) + (1 / densidadePopulacional2);

    // Exibir comparações
    printf("\nCarta 1 - (%s): %d\n", cidade1, populacao1);
    printf("Carta 2 - (%s): %d\n", cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0; // Indica que o programa foi executado com sucesso, sem erros
}