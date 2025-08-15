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

    printf("\n ----- Cadastro de Carta 1 ----- \n");
    printf("\n 1.1 - De qual estado ela é?              [ A - H ]: ");
    scanf(" %c", &c1_uf);

    printf("\n 1.2 - Qual o nome dela? [ nomes compostos usar \"-\" ]: ");
    scanf("%s", c1_nome);

    printf("\n 1.3 - Escolha um código:       [ 1 - 4 ]: ");
    scanf("%d", &c1_id);

    printf("\n 1.4 - Qual a população estimada?         [ Ex.: xxxxx s/ \".\"]: ");
    scanf("%d", &c1_pop);

    printf("\n 1.5 - Qual a area total estimada?        [ Ex.: xxxxx s/ \".\"]: ");
    scanf("%f", &c1_km);

    printf("\n 1.6 - Qual o PIB estimado?               [ Ex.: xxxxx s/ \".\"]: ");
    scanf("%f", &c1_pib);

    printf("\n 1.7 - Quantos pontos turisticos possui? ");
    scanf("%d", &c1_pt);

    //---

    printf("\n ----- Cadastro de Carta 2 ----- \n");
    printf("\n 2.1 - De qual estado ela é?              [ A - H ]: ");
    scanf(" %c", &c2_uf);

    printf("\n 2.2 - Qual o nome dela? [ nomes compostos usar \"-\" ]: ");
    scanf("%s", c2_nome);

    printf("\n 2.3 - Escolha um código:       [ 1 - 4 ]: ");
    scanf("%d", &c2_id);

    printf("\n 2.4 - Qual a população estimada?         [ Ex.: xxxxx s/ \".\"]: ");
    scanf("%d", &c2_pop);

    printf("\n 2.5 - Qual a area total estimada?        [ Ex.: xxxxx s/ \".\"]: ");
    scanf("%f", &c2_km);

    printf("\n 2.6 - Qual o PIB estimado?               [ Ex.: xxxxx s/ \".\"]: ");
    scanf("%f", &c2_pib);

    printf("\n 2.7 - Quantos pontos turisticos possui? ");
    scanf("%d", &c2_pt);
    
    //---

    printf(
        "\n ----- Exibindo Carta 1 ----- \n"
        "-> Código: %d \n"
        "-> Estado: %c\n"
        "-> Nome: %s \n"
        "-> Populacao: %d \n"
        "-> Area: %f \n"
        "-> PIB: %f  \n"
        "-> Qtd Pontos Turisticos: %d  \n",
        c1_id,
        c1_uf,
        c1_nome,
        c1_pop,
        c1_km,
        c1_pib,
        c1_pt
    );
    
    //---

    printf(
        "\n ----- Exibindo Carta 2 ----- \n"
        "-> Código: %d \n"
        "-> Estado: %c\n"
        "-> Nome: %s \n"
        "-> Populacao: %d \n"
        "-> Area: %f \n"
        "-> PIB: %f  \n"
        "-> Qtd Pontos Turisticos: %d  \n",
        c2_id,
        c2_uf,
        c2_nome,
        c2_pop,
        c2_km,
        c2_pib,
        c2_pt
    );

    return 0;
}
