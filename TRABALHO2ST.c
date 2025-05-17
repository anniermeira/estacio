#include <stdio.h>

int main (){
 
    //DECLARAÇÕES DAS VARIAVEIS - CARTA 1
    char estado01[30], codigo01[10],cidade01[100];
    int pontos01;
    unsigned int habitantes01, poder01;
    float area01, pib01, densidade01, pib_per_capita01;

    //DECLARAÇÕES DAS VARIAVEIS - CARTA 2
    char estado02[30], codigo02[10], cidade02[100];
    int pontos02;
    unsigned int habitantes02, poder02;
    float area02, pib02, densidade02, pib_per_capita02;

    //INFORMAÇÕES DA PRIMEIRA CARTA
    printf ("Vamos preencher os dados da 1° Carta! \n");
    printf("Informe a SIGLA do Estado: ");
    scanf("%s", estado01);
    printf("Informe o código da CARTA 1: ");
    scanf("%s", codigo01);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade01);
    printf("Informe a quantidade de habitantes: ");
    scanf("%u", &habitantes01);
    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontos01);
    printf("Informe a área em km²: ");
    scanf("%f", &area01);
    printf("Informe o PIB: ");
    scanf("%f", &pib01);
    printf("\n");
    
    
    //INFORMAÇÕES DA SEGUNDA CARTA
    printf ("Vamos preencher os dados da 2° Carta! \n");
    printf("Informe a SIGLA do Estado: ");
    scanf("%s", estado02);
    printf("Informe o código da CARTA 2: ");
    scanf("%s", codigo02);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade02);
    printf("Informe a quantidade de habitantes: ");
    scanf("%u", &habitantes02);
    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontos02);
    printf("Informe a área em km²: ");
    scanf("%f", &area02);
    printf("Informe o PIB: ");
    scanf("%f", &pib02);

    //CALCULO PARA INFORMAR A DENSIDADE
    densidade01 = habitantes01 / area01;
    densidade02 = habitantes02 / area02;

    //CALCULO PARA INFORMAR O PIB PERCAPITA
    pib_per_capita01 = pib01 / (float)habitantes01;
    pib_per_capita02 = pib02 / (float)habitantes02;

    //CALCULO DO SUPER PODER
    poder01 = pontos01 + habitantes01 + area01 + pib01 - densidade01 + pib_per_capita01;
    poder02 = pontos02 + habitantes02 + area02 + pib02 - densidade02 + pib_per_capita02;

   
    //IMPRESSÕES DA CARTA 1
    printf("\n---- CARTA 1 ----\n");
    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %u\n", habitantes01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", pontos01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per Capita: %.2f\n", pib_per_capita01);
    printf("Super Poder: %u\n", poder01);

    //IMPRESSÕES DA CARTA 2
    printf("\n---- CARTA 2 ----\n");
    printf("Estado: %s\n", estado02);
    printf("Código da carta: %s\n", codigo02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %d\n", habitantes02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", pontos02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per Capita: %.2f\n", pib_per_capita02);
    printf("Super Poder: %u\n", poder02);
    printf("\n");
    printf("FINALIZADO! DADOS INFORMADOS DAS CARTAS 1 E 2 ESTÃO ACIMA.\n \n");

int comando = 0;
while (comando != 7){
    printf("\nEscolha qual será o atributo para a carta vencer: \n");
    printf("OPÇÃO 1 - POPULAÇÃO \n");
    printf("OPÇÃO 2 - AREA \n");
    printf("OPÇÃO 3 - PIB \n");
    printf("OPÇÃO 4 - DENSIDADE \n");
    printf("OPÇÃO 5 - PIB PER CAPITA \n");
    printf("OPÇÃO 6 - SUPER PODER \n");
    printf("OPÇÃO 7 - PARA SAIR \n");
    scanf("%d", &comando);
    printf("\n");

    //SE O ATRIBUTO FOR POPULAÇÃO
    if (comando == 1){
    if (habitantes01 > habitantes02) {
        printf("O atributo escolhido foi: POPULAÇÃO \n");
        printf("Resultado: CARTA 1 venceu! \n \n");
          } else if (habitantes01 < habitantes02){
            printf("O atributo escolhido foi: POPULAÇÃO \n");
            printf("Resultado: CARTA 2 venceu! \n \n");
         } else {
            printf("O atributo escolhido foi: POPULAÇÃO \n");
            printf("As populações das cartas são iguais. \n");
         };
    } else if (comando == 2){
    //SE O ATRIBUTO FOR ÁREA
    if (area01 > area02) {
        printf("O atributo escolhido foi: ÁREA \n");
        printf("Resultado: CARTA 1 venceu! \n \n");
          } else if (area01 < area02){
            printf("O atributo escolhido foi: ÁREA \n");
            printf("Resultado: CARTA 2 venceu! \n \n");
         } else {
          printf("O atributo escolhido foi: ÁREA \n");
            printf("As áreas informadas nas cartas são iguais. \n");
         };
    } else if (comando == 3){
    //SE O ATRIBUTO FOR PIB
    if (pib01 > pib02) {
        printf("O atributo escolhido foi: PIB \n");
        printf("Resultado: CARTA 1 venceu! \n \n");
          } else if (pib01 < pib02){
            printf("O atributo escolhido foi: PIB \n");
            printf("Resultado: CARTA 2 venceu! \n \n");
         } else{
          printf("O atributo escolhido foi: PIB \n");
          printf("Os valores de PIB das cartas são iguais. \n");
         };
    } else if (comando == 4){
    //SE O ATRIBUTO FOR DENSIDADE
    if (densidade01 < densidade02) {
        printf("O atributo escolhido foi: DENSIDADE \n");
        printf("Resultado: CARTA 1 venceu! \n \n");
          } else if (densidade01 > densidade02){
            printf("O atributo escolhido foi: DENSIDADE \n");
            printf("Resultado: CARTA 2 venceu! \n \n");
         } else {
            printf("O atributo escolhido foi: DENSIDADE \n");
            printf("As densidades são iguais. \n");
         };
    } else if (comando == 5){
    //SE O ATRIBUTO FOR PIB PER CAPITA
    if (pib_per_capita01 > pib_per_capita02) {
        printf("O atributo escolhido foi: PIB PER CAPITA \n");
        printf("Resultado: CARTA 1 venceu! \n \n");
          } else if (pib_per_capita01 < pib_per_capita02){
            printf("O atributo escolhido foi: PIB PER CAPITA \n");
            printf("Resultado: CARTA 2 venceu! \n \n");
         } else{
          printf("O atributo escolhido foi: PIB PER CAPITA \n");
          printf("Os valores de PIB Per Capita são iguais. \n");
         };
    }else if (comando == 6){
    //SE O ATRIBUTO FOR SUPER PODER
    if (poder01 > poder02) {
        printf("O atributo escolhido foi: SUPER PODER \n");
        printf("Resultado: CARTA 1 venceu! \n \n");
          } else if (poder01 < poder02){
            printf("O atributo escolhido foi: SUPER PODER \n");
            printf("Resultado: CARTA 2 venceu! \n \n");
         } else{
          printf("O atributo escolhido foi: SUPER PODER \n");
          printf("Os poderes das cartas são iguais. \n");
         };
    } else {
        printf("A OPÇÃO DIGITADA É INVALIDA. \n");
    };
};

    return 0;
}