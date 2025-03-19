#include <stdio.h>

int main (){
    /*DECLARAÇÕES DE VARIAVEIS*/
    char estado [100];
    char codigo [4];
    char cidade [100];
    int populacao;
    float area;
    float pib;
    int turistico;

    char ESTADOS [100];
    char CODIGOS [4];
    char CIDADES [100];
    int POPULACOES;
    float AREAS;
    float PIBS;
    int TURISTAS;


    /*INFORMAÇÕES DA PRIMEIRA CARTA*/
    printf ("Vamos preencher os dados da 1° Carta! \n");
    printf ("Informe a Inicial do Estado (uma letra de 'A' a 'H'): \n");
    scanf("%c", estado);

    printf ("Informe o código da Carta: \n");
    scanf("%s", codigo);

    printf ("Infomre a Cidade: \n");
    scanf(" %[^\n]", cidade);

    printf ("Informe a população: \n");
    scanf("%d", &populacao);

    printf ("Informe a Área (em km²): \n");
    scanf("%f", &area);

    printf ("Informe o número do PIB: \n");
    scanf("%f", &pib);

    printf ("Informe o número de Pontos Turísticos: \n");
    scanf("%d", &turistico);
    printf("\n");


    /*INFORMAÇÕES DA SEGUNDA CARTA*/
    printf ("Vamos preencher os dados da 2° Carta! \n");
    printf ("Informe a Inicial do Estado (uma letra de 'A' a 'H'): \n");
    scanf("%s", ESTADOS);

    printf ("Informe o código da Carta: \n");
    scanf("%s", CODIGOS);

    printf ("Infomre a Cidade: \n");
    scanf(" %[^\n]", CIDADES);

    printf ("Informe a população: \n");
    scanf("%d", &POPULACOES);

    printf ("Informe a Área (em km²): \n");
    scanf("%f", &AREAS);

    printf ("Informe o número do PIB: \n");
    scanf("%f", &PIBS);

    printf ("Informe o número de Pontos Turísticos: \n");
    scanf("%d", &TURISTAS);
    printf ("\n \n");


    /*IMPRESSÕES DAS CARTAS*/
    printf ("Carta 1! \n");
    printf("Estado: %s \n", &estado);
    printf("Código: %s \n", &codigo);
    printf("Nome da Cidade: %s \n", &cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.3f km² \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turistico);
    printf("\n \n");

    printf ("Carta 2! \n");
    printf("Estado: %s \n", &ESTADOS);
    printf("Código: %s \n", &CODIGOS);
    printf("Nome da Cidade: %s \n", &CIDADES);
    printf("População: %d \n", POPULACOES);
    printf("Área: %.3f km² \n", AREAS);
    printf("PIB: %.2f \n", PIBS);
    printf("Número de Pontos Turísticos: %d \n", TURISTAS);

    return 0;
}