#include <stdio.h>
#include <string.h>

int main()
{
    // Declaração das variáveis dos atributos das cartas:
    char c1_estado[60], c2_estado[60];
    char c1_codigo[10], c2_codigo[10];
    char c1_nome_cidade[60], c2_nome_cidade[60];
    unsigned long int c1_populacao, c2_populacao;
    int c1_pontos_turisticos, c2_pontos_turisticos;
    float c1_area, c2_area;
    float c1_PIB, c2_PIB;
    float c1_densidade_populacional, c2_densidade_populacional;
    float c1_pib_per_capita, c2_pib_per_capita;
    double c1_super_poder, c2_super_poder;

    // Recebendo do usuário os dados da primeira carta:
    printf("Carta 1:\n");

    printf("Estado: ");
    fgets(c1_estado, sizeof(c1_estado), stdin); // Capturando as strings com fgets para compatibilidade e evitar bugs
    c1_estado[strcspn(c1_estado, "\n")] = 0;    // Removendo o caractere de escape line-feed da string

    printf("Código: ");
    fgets(c1_codigo, sizeof(c1_codigo), stdin);
    c1_codigo[strcspn(c1_codigo, "\n")] = 0;

    printf("Nome da Cidade: ");
    fgets(c1_nome_cidade, sizeof(c1_nome_cidade), stdin);
    c1_nome_cidade[strcspn(c1_nome_cidade, "\n")] = 0;

    printf("População: ");
    scanf(" %lu", &c1_populacao);

    printf("Área: ");
    scanf(" %f", &c1_area);

    printf("PIB: ");
    scanf(" %f", &c1_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c1_pontos_turisticos);
    getchar();  // Captura caracteres do buffer para evitar erros de leitura

    // Recebendo os dados da carta 2
    printf("\nCarta 2:\n");

    printf("Estado: ");
    fgets(c2_estado, sizeof(c2_estado), stdin);
    c2_estado[strcspn(c2_estado, "\n")] = 0;

    printf("Código: ");
    fgets(c2_codigo, sizeof(c2_codigo), stdin);
    c2_codigo[strcspn(c2_codigo, "\n")] = 0;

    printf("Nome da Cidade: ");
    fgets(c2_nome_cidade, sizeof(c2_nome_cidade), stdin);
    c2_nome_cidade[strcspn(c2_nome_cidade, "\n")] = 0;

    printf("População: ");
    scanf(" %lu", &c2_populacao);

    printf("Área: ");
    scanf(" %f", &c2_area);

    printf("PIB: ");
    scanf(" %f", &c2_PIB);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &c2_pontos_turisticos);
    getchar();

    // Cálculos dos atributos das cartas:
    c1_densidade_populacional = c1_populacao / c1_area;
    c1_pib_per_capita = (c1_PIB * 1e9) / c1_populacao;
    c1_super_poder = c1_populacao + c1_area + c1_PIB + c1_pontos_turisticos + c1_pib_per_capita + (c1_area / c1_populacao);

    c2_densidade_populacional = c2_populacao / c2_area;
    c2_pib_per_capita = (c2_PIB * 1e9) / c2_populacao;
    c2_super_poder = c2_populacao + c2_area + c2_PIB + c2_pontos_turisticos + c2_pib_per_capita + (c2_area / c2_populacao);

    // Comparação dos atributos das cartas para definir qual é a mais forte
    printf("\nComparação de cartas:\n");

    if (c1_populacao > c2_populacao) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    if (c1_area > c2_area) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (c1_PIB > c2_PIB) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (c1_pontos_turisticos > c2_pontos_turisticos) {
        printf("Pontos turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos turísticos: Carta 2 venceu (0)\n");
    }

    if (c1_densidade_populacional < c2_densidade_populacional) {
        printf("Densidade populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade populacional: Carta 2 venceu (0)\n");
    }

    if (c1_pib_per_capita > c2_pib_per_capita) {
        printf("PIB per capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per capita: Carta 2 venceu (0)\n");
    }

    if (c1_super_poder > c2_super_poder) {
        printf("Super poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super poder: Carta 2 venceu (0)\n");
    }

    return 0;
}
