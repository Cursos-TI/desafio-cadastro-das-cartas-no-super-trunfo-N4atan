#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    char  c1_uf       , c2_uf;
    char  c1_nome[30] , c2_nome[30];
    int   c1_id       , c2_id;
    int   c1_pop      , c2_pop;
    float c1_km       , c2_km;
    float c1_pib      , c2_pib;
    int   c1_pt       , c2_pt;
    float c1_dp       , c2_dp;
    float c1_pibC     , c2_pibC; //Necessário uma validação, se PIB é milhões ou bilhões.

    printf("\n ----- Cadastro de Carta 1 ----- \n");
    printf("\n 1.1 - De qual estado ela é?              [ A - H ]: ");
    scanf(" %c", &c1_uf);

    printf("\n 1.2 - Qual o nome dela? [ nomes compostos usar \"-\" ]: ");
    scanf("%s", c1_nome);

    printf("\n 1.3 - Escolha um código:       [ 1 - 4 ]: ");
    scanf("%d", &c1_id);

    printf("\n 1.4 - Qual a população estimada?         [ Ex.: xxxxx s/ \".\" ]: ");
    scanf("%d", &c1_pop);

    printf("\n 1.5 - Qual a area (km²) total estimada?        [ Ex.: xxxxx ]: ");
    scanf("%f", &c1_km);

    printf("\n 1.6 - Qual o PIB estimado?               [ Ex.: xxxxx ]: ");
    scanf("%f", &c1_pib);

    printf("\n 1.7 - Quantos pontos turisticos possui? ");
    scanf("%d", &c1_pt);

    c1_dp   = (float) c1_pop / c1_km;
    c1_pibC = (float) c1_pib / c1_pop;

    printf(
        "\n ----- Exibindo Carta 1 ----- \n"
        "-> Código: %c%d \n"
        "-> Estado: %c\n"
        "-> Nome: %s \n"
        "-> Populacao: %d \n"
        "-> Area: %.2fkm² \n"
        "-> PIB: %.2f  \n"
        "-> Qtd Pontos Turisticos: %d  \n"
        "-> Densidade Populacional: %.2f hab/km² \n"
        "-> PIB per Capita: %.2f  \n",
        c1_uf, c1_id,
        c1_uf,
        c1_nome,
        c1_pop,
        c1_km,
        c1_pib,
        c1_pt,
        c1_dp,
        c1_pibC
    );

    printf("\n ----- Cadastro de Carta 2 ----- \n");
    printf("\n 2.1 - De qual estado ela é?              [ A - H ]: ");
    scanf(" %c", &c2_uf);

    printf("\n 2.2 - Qual o nome dela? [ nomes compostos usar \"-\" ]: ");
    scanf("%s", c2_nome);

    printf("\n 2.3 - Escolha um código:       [ 1 - 4 ]: ");
    scanf("%d", &c2_id);

    printf("\n 2.4 - Qual a população estimada?         [ Ex.: xxxxx s/ \".\"]: ");
    scanf("%d", &c2_pop);

    printf("\n 2.5 - Qual a area (km²) total estimada?        [ Ex.: xxxxx ]: ");
    scanf("%f", &c2_km);

    printf("\n 2.6 - Qual o PIB estimado?               [ Ex.: xxxxx s/ ]: ");
    scanf("%f", &c2_pib);

    printf("\n 2.7 - Quantos pontos turisticos possui? ");
    scanf("%d", &c2_pt);

    c2_dp   = (float) c2_pop / c2_km;
    c2_pibC = (float) c2_pib / c2_pop;

    printf(
        "\n ----- Exibindo Carta 2 ----- \n"
        "-> Código: %c%d \n"
        "-> Estado: %c\n"
        "-> Nome: %s \n"
        "-> Populacao: %d \n"
        "-> Area: %.2fkm² \n"
        "-> PIB: %.2f  \n"
        "-> Qtd Pontos Turisticos: %d  \n"
        "-> Densidade Populacional: %.2f hab/km² \n"
        "-> PIB per Capita: %.2f  \n",
        c2_uf, c2_id,
        c2_uf,
        c2_nome,
        c2_pop,
        c2_km,
        c2_pib,
        c2_pt,
        c2_dp,
        c2_pibC
    );

    return 0;
}
