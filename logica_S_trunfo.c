#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2, codigo1[2], codigo2[2], n_cidade1[50], n_cidade2[50];
    int populacao1, populacao2, p_turisticos1, p_turisticos2;
    float area1, area2, pib1, pib2;
    float d_populacional1, d_populacional2, pib_pc1, pib_pc2;
    float s_poder1, s_poder2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("==================== CADASTRO DA CARTA 1 ====================\n");

    printf("Digite o ESTADO da primeira cata (A - H): ");
    scanf("%c", &estado1);

    printf("Digite o CÓDIGO da primeira carta (01 - 02): ");
    scanf("%s", &codigo1);
    getchar();

    printf("Digite o NOME da cidade da primeira carta: ");
    fgets(n_cidade1, 50, stdin);

    printf("Digite a POPULAÇÃO da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Digite a ÁREA da primeira carta: ");
    scanf("%f", &area1);

    d_populacional1 = populacao1 / area1;

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    pib_pc1 = pib1 / populacao1;

    printf("Digite o número de PONTOS TURÍSTICOS da primeira carta: ");
    scanf("%d", &p_turisticos1);
    getchar();

    s_poder1 = populacao1 + area1 + pib1 + p_turisticos1 + pib_pc1 / d_populacional1;

    printf("==================== CADASTRO DA CARTA 2 ====================\n");

    printf("Digite o ESTADO da segunda cata (A - H): ");
    scanf("%c", &estado2);

    printf("Digite o CÓDIGO da segunda carta (01 - 02): ");
    scanf("%s", &codigo2);
    getchar();

    printf("Digite o NOME da cidade da segunda carta: ");
    fgets(n_cidade2, 50, stdin);

    printf("Digite a POPULAÇÃO da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a ÁREA da segunda carta: ");
    scanf("%f", &area2);

    d_populacional2 = populacao2 / area2;

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    pib_pc2 = pib2 / populacao2;

    printf("Digite o número de PONTOS TURÍSTICOS da segunda carta: ");
    scanf("%d", &p_turisticos2);

    s_poder2 = populacao2 + area2 + pib2 + p_turisticos2 + pib_pc2 / d_populacional2;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("========== CARTA 1 ==========\n");

    printf("Estado: %c\n", estado1);

    printf("Código: %c%s\n", estado1, codigo1);

    printf("Nome da Cidade: %s", n_cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f Km²\n", area1);

    printf("PIB: %.2f Bilhões de reais\n", pib1);

    printf("Pontos Turísticos: %d\n", p_turisticos1);

    printf("Densidade Populacional: %.2f hab/km²\n", d_populacional1);

    printf("PIB per Capita: %.2f reais\n", pib_pc1);

    printf("Super Poder: %.2f\n", s_poder1);

    printf("========== CARTA 2 ==========\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %c%s\n", estado2, codigo2);

    printf("Nome da Cidade: %s", n_cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f Km²\n", area2);

    printf("PIB: %.2f Bilhões de reais\n", pib2);

    printf("Pontos Turísticos: %d\n", p_turisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n", d_populacional2);

    printf("PIB per Capita: %.2f reais\n", pib_pc2);

    printf("Super Poder: %.2f\n", s_poder2);

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("========== COMPARAÇÃO ==========\n");

    if (populacao1 > populacao2)
    {
        printf("Carta 1 - %s (%c%s): %d\n", n_cidade1, estado1, codigo1, populacao1);
    }
    else
    {
        printf("Carta 2 - %s (%c%s): %d\n", n_cidade2, estado2, codigo2, populacao2);
    }

    if (area1 > area2)
    {
        printf("Carta 1 - %s (%c%s): %f\n", n_cidade1, estado1, codigo1, area1);
    }
    else
    {
        printf("Carta 2 - %s (%c%s): %f\n", n_cidade2, estado2, codigo2, area2);
    }

    if (pib1 > pib2)
    {
        printf("Carta 1 - %s (%c%s): %f\n", n_cidade1, estado1, codigo1, pib1);
    }
    else
    {
        printf("Carta 2 - %s (%c%s): %f\n", n_cidade2, estado2, codigo2, pib2);
    }

    if (d_populacional1 > d_populacional2)
    {
        printf("Carta 1 - %s (%c%s): %f\n", n_cidade1, estado1, codigo1, d_populacional1);
    }
    else
    {
        printf("Carta 2 - %s (%c%s): %f\n", n_cidade2, estado2, codigo2, d_populacional2);
    }

    if (pib_pc1 > pib_pc2)
    {
        printf("Carta 1 - %s (%c%s): %f\n", n_cidade1, estado1, codigo1, pib_pc1);
    }
    else
    {
        printf("Carta 2 - %s (%c%s): %f\n", n_cidade2, estado2, codigo2, pib_pc2);
    }
    /*printf("População: Carta %d venceu\n", (populacao1 > populacao2) + 1 - (populacao1 == populacao2));

    printf("Área: Carta %d venceu\n", (area1 > area2) + 1 - (area1 == area2));

    printf("PIB: Carta %d venceu\n", (pib1 > pib2) + 1 - (pib1 == pib2));

    printf("Pontos Turísticos: Carta %d venceu\n", (p_turisticos1 > p_turisticos2) + 1 - (p_turisticos1 == p_turisticos2));

    printf("Densidade Populacional: Carta %d venceu\n", (d_populacional1 > d_populacional2) + 1 - (d_populacional1 == d_populacional2));

    printf("PIB per Capita: Carta %d venceu\n", (pib_pc1 > pib_pc2) + 1 - (pib_pc1 == pib_pc2));

    printf("Super Poder: Carta %d venceu\n", (s_poder1 > s_poder2) + 1 - (s_poder1 == s_poder2));*/

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    return 0;
}
