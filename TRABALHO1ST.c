#include <stdio.h>

int main (){
 
    //DECLARAÇÕES DAS VARIAVEIS - CARTA 1
    char estado01[10], codigoA01[8],cidade01[100];
    int pontos01;
    unsigned long int habitantes01;
    float area01, pib01, densidade01, pib_per_capita01, poder01;

    //DECLARAÇÕES DAS VARIAVEIS - CARTA 2
    char estado02[10], codigoA02[8], cidade02[100];
    int pontos02;
    unsigned long int habitantes02;
    float area02, pib02, densidade02, pib_per_capita02, poder02;

    //INFORMAÇÕES DA PRIMEIRA CARTA
    printf ("Vamos preencher os dados da 1° Carta! \n");
    printf("Informe a SIGLA do Estado: \n");
    scanf("%s", estado01);
    printf("Informe o código da CARTA 1: \n");
    scanf("%s", codigoA01);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", cidade01);
    printf("Informe a quantidade de habitantes:\n");
    scanf("%lu", &habitantes01);
    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos01);
    printf("Informe a área em km²:\n");
    scanf("%f", &area01);
    printf("Informe o PIB:\n");
    scanf("%f", &pib01);
    printf("\n");
    
    
    //INFORMAÇÕES DA SEGUNDA CARTA
    printf ("Vamos preencher os dados da 2° Carta! \n");
    printf("Informe a SIGLA do Estado: \n");
    scanf("%s", estado02);
    printf("Informe o código da CARTA 2: \n");
    scanf("%s", codigoA02);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", cidade02);
    printf("Informe a quantidade de habitantes:\n");
    scanf("%lu", &habitantes02);
    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos02);
    printf("Informe a área em km²:\n");
    scanf("%f", &area02);
    printf("Informe o PIB:\n");
    scanf("%f", &pib02);

    //CALCULO PARA INFORMAR A DENSIDADE
    densidade01 = habitantes01 / area01;
    densidade02 = habitantes02 / area02;

    //CALCULO PARA INFORMAR O PIB PERCAPITA
    pib_per_capita01 = pib01 / (unsigned long)habitantes01;
    pib_per_capita02 = pib02 / (unsigned long)habitantes02;

    //CALCULO PARA INFORMAR O SUPER PODER
    poder01 = pontos01 + habitantes01 + area01 + pib01 - densidade01 + pib_per_capita01;
    poder02 = pontos02 + habitantes02 + area02 + pib02 - densidade02 + pib_per_capita02;

   
    //IMPRESSÕES DA CARTA 1
    printf("\n---- CARTA 1 ----\n");
    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigoA01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %lu\n", habitantes01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", pontos01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per Capita: %.2f\n", pib_per_capita01);

    //IMPRESSÕES DA CARTA 2
    printf("\n---- CARTA 2 ----\n");
    printf("Estado: %s\n", estado02);
    printf("Código da carta: %s\n", codigoA02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %lu\n", habitantes02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", pontos02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per Capita: %.2f\n", pib_per_capita02);
    printf("\n");

    printf("FINALIZADO! DADOS INFORMADOS DAS CARTAS 1 E 2 ESTÃO ACIMA.\n \n");

    //SE O ATRIBUTO FOR POPULAÇÃO
    printf("CARTA 1 - população: %lu\n", habitantes01);
    printf("CARTA 2 - população: %lu\n", habitantes02);
    if (habitantes01 > habitantes02) {
      printf("Resultado: CARTA 1 - %s venceu! \n", cidade01);
      } else {
        printf("Resultado: CARTA 2 - %s venceu! \n", cidade02);
      };
    
    //SE O ATRIBUTO FOR AREA
    printf("CARTA 1 - área: %.2f\n", area01);
    printf("CARTA 2 - área: %.2f\n", area02);
    if (area01 > area02){
        printf("Resultado: CARTA 1 - %.2f venceu! \n", area01);
        } else {
            printf("Resultado: CARTA 2 - %.2f venceu! \n", area02);
        };

    //DECLARANDO A CARTA VENCEDORA PELO PODER
    printf("CARTA 1 : %s\n", poder01);
    printf("CARTA 2 : %s\n", poder02);
    if (poder01 > poder02) {
      printf("Resultado: CARTA 1 - %s venceu! \n", poder01);
      } else {
        printf("Resultado: CARTA 2 - %s venceu! \n", poder02);
      };

    return 0;
}