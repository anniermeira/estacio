#include <stdio.h>

int main (){
 
    //DECLARAÇÕES DAS VARIAVEIS - CARTA 1
    char estado01[30], codigo01[10],cidade01[100];
    int pontos01;
    unsigned int habitantes01, poder01;
    float area01, pib01, densidade01, pib_per_capita01;

    //DECLARAÇÕES DAS VARIAVEIS - CARTA 2
    char estado02[30], codigo02[8], cidade02[100];
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
    printf("\n");

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
    printf("Código da carta: %s\n", codigo01);
    printf("Estado: %s\n", estado01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %u\n", habitantes01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", pontos01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per Capita: %.2f\n", pib_per_capita01);

    //IMPRESSÕES DA CARTA 2
    printf("\n---- CARTA 2 ----\n");
    printf("Estado: %s\n", estado02);
    printf("Código da carta: %s\n", codigo02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %u\n", habitantes02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", pontos02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per Capita: %.2f\n", pib_per_capita02);
    printf("\n");
    printf("********FINALIZADO! DADOS INFORMADOS DAS CARTAS 1 E 2 ESTÃO ACIMA.*******\n \n");

    //COMPARANDO A POPULAÇÃO DAS CARTAS
    printf("COMPARAÇÃO DE CARTAS****\n");
    if (habitantes01 > habitantes02) {
      printf("População: CARTA 1 venceu! \n");
      } else if (habitantes01 < habitantes02){
        printf("População: CARTA 2 venceu! \n");
      } else { printf("População: As cartas empataram!");
      };
    
    //COMPARANDO A ÁREA DAS CARTAS
    if (area01 > area02){
        printf("Área: CARTA 1 venceu! \n");
        } else if (area01 < area02){
            printf("Área: CARTA 2 venceu! \n");
        }else { printf("Área: As cartas empataram!");
      };

    //COMPARANDO O PIB DAS CARTAS
    if (pib01 > pib02){
        printf("PIB: CARTA 1 venceu! \n");
        } else if (pib01 < pib02){
            printf("PIB: CARTA 2 venceu! \n");
        }else { printf("População: As cartas empataram!");
      };

    //COMPARANDO O PONTOS TURISTICOS DAS CARTAS
    if (pontos01 > pontos02){
        printf("Pontos Turisticos: CARTA 1 venceu! \n");
        } else if (pontos01 < pontos02){
            printf("Pontos Turisticos: CARTA 2 venceu! \n");
        }else { printf("População: As cartas empataram!");
      };

    //COMPARANDO A DENSIDADE POPULACIONAL DAS CARTAS
    if (densidade01 < densidade02){
        printf("Densidade Populacional: CARTA 1 venceu! \n");
        } else if (densidade01 > densidade02){
            printf("Densidade Populacional: CARTA 2 venceu! \n");
        }else { printf("População: As cartas empataram!");
      };

    //COMPARANDO O PIB PER CAPITA DAS CARTAS
    if (pib_per_capita01 > pib_per_capita02){
        printf("PIB per Capita: CARTA 1 venceu! \n");
        } else if (pib_per_capita01 < pib_per_capita02){
            printf("PIB per Capita: CARTA 2 venceu! \n");
        }else { printf("População: As cartas empataram!");
      };
    
    //COMPARANDO O SUPER PODER DAS CARTAS
    if (poder01 > poder02) {
      printf("Super Poder: CARTA 1 venceu! \n");
      } else if (poder01 < poder02){
        printf("Super Poder: CARTA 2 venceu! \n");
      }else { printf("População: As cartas empataram!");
      };

    return 0;
}