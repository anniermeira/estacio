#include <stdio.h>

int main (){
 
    /*DECLARAÇÕES DAS VARIAVEIS - CARTA 1*/
    char estado01[10], codigoA01[8],cidade01[100];
    int pontos01, habitantes01;
    float area01, pib01, densidade01, pib_per_capita01;

    /*DECLARAÇÕES DAS VARIAVEIS - CARTA 2*/
    char estado02[10], codigoA02[8], cidade02[100];
    int pontos02, habitantes02;
    float area02, pib02, densidade02, pib_per_capita02;

    /*INFORMAÇÕES DA PRIMEIRA CARTA*/
    printf ("Vamos preencher os dados da 1° Carta! \n");
    printf("Informe a SIGLA do Estado: \n");
    scanf("%s", estado01);
    printf("Informe o código da CARTA 1: \n");
    scanf("%s", codigoA01);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", cidade01);
    printf("Informe a quantidade de habitantes:\n");
    scanf("%d", &habitantes01);
    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos01);
    printf("Informe a área em km²:\n");
    scanf("%f", &area01);
    printf("Informe o PIB:\n");
    scanf("%f \n", &pib01);
    
    
    /*INFORMAÇÕES DA SEGUNDA CARTA*/
    printf ("Vamos preencher os dados da 2° Carta! \n");
    printf("Informe a SIGLA do Estado: \n");
    scanf("%s", estado02);
    printf("Informe o código da CARTA 2: \n");
    scanf("%s", codigoA02);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", cidade02);
    printf("Informe a quantidade de habitantes:\n");
    scanf("%d", &habitantes02);
    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos02);
    printf("Informe a área em km²:\n");
    scanf("%f", &area02);
    printf("Informe o PIB:\n");
    scanf("%f", &pib02);

    /*CALCULO PARA INFORMAR A DENSIDADE*/
    densidade01 = habitantes01 / area01;
    densidade02 = habitantes02 / area02;

    /*CALCULO PARA INFORMAR O PIB PERCAPITA*/
    pib_per_capita01 = pib01 / (float)habitantes01;
    pib_per_capita02 = pib02 / (float)habitantes02;

   
    /*IMPRESSÕES DA CARTA 1*/
    printf("\n---- CARTA 1 ----\n");
    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigoA01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %d\n", habitantes01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", pontos01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per Capita: %.2f\n", pib_per_capita01);

    /*IMPRESSÕES DA CARTA 2*/
    printf("\n---- CARTA 2 ----\n");
    printf("Estado: %s\n", estado02);
    printf("Código da carta: %s\n", codigoA02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %d\n", habitantes02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", pontos02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per Capita: %.2f\n", pib_per_capita02);

    printf("FINALIZADO! DADOS INFORMADOS DAS CARTAS 1 E 2 ESTÃO ACIMA.\n");

    return 0;
}