#include <stdio.h>

int main (){
 
    //DECLARAÇÕES DAS VARIAVEIS - CARTA 1
    char pais01[100], codigo01[10], cidade01[100];
    int pontos01;
    unsigned int habitantes01;
    float area01, pib01, densidade01, pib_per_capita01;

    //DECLARAÇÕES DAS VARIAVEIS - CARTA 2
    char pais02[100], codigo02[10], cidade02[100];
    int pontos02;
    unsigned int habitantes02;
    float area02, pib02, densidade02, pib_per_capita02;

    //INFORMAÇÕES DA PRIMEIRA CARTA
    printf ("Vamos preencher os dados da 1° Carta! \n");
    printf("Informe o código da CARTA 1: ");
    scanf("%s", codigo01);
    printf ("Informe o nome do pais: ");
    scanf("%s", pais01);
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
    printf("Informe o código da CARTA 2: ");
    scanf("%s", codigo02);
    printf ("Informe o nome do pais: ");
    scanf("%s", pais02);
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

    // MENU PARA ESCOLHA DO ATRIBUTO
    int opcao1, opcao2;

    printf("\nEscolha qual será o atributo para a carta vencer: \n");
    printf("OPÇÃO 1 - POPULAÇÃO \n");
    printf("OPÇÃO 2 - AREA \n");
    printf("OPÇÃO 3 - PIB \n");
    printf("OPÇÃO 4 - DENSIDADE \n");
    printf("OPÇÃO 5 - PIB PER CAPITA \n");
    printf("OPÇÃO 6 - PARA FINALIZAR \n");
    scanf("%d", &opcao1);

    if (opcao1 == 6) {
            printf("----- VOCÊ ESCOLHEU ENCERRAR O JOGO!\n");
            return 0;
        }
    if (opcao1 < 1 || opcao1 > 5) {
            printf("----- ESSA OPÇÃO É INVÁLIDA!\n");
            return 0;
        }

    // SEGUNDO MENU SEM A OPÇÃO ESCOLHIDA NO ANTERIOR
    printf("\nEscolha o segundo atributo para comparar:\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("OPÇÃO 1 - POPULAÇÃO \n"); break;
                case 2: printf("OPÇÃO 2 - AREA \n"); break;
                case 3: printf("OPÇÃO 3 - PIB \n"); break;
                case 4: printf("OPÇÃO 4 - DENSIDADE \n"); break;
                case 5: printf("OPÇÃO 5 - PIB PER CAPITA \n"); break;
            }
        }
    
    } scanf("%d", &opcao2);

    float valor1_atrib1 = 0, valor1_atrib2 = 0;
    float valor2_atrib1 = 0, valor2_atrib2 = 0;

    // FUNÇÃO PARA COMPARAÇÃO DO PRIMEIRO ATRIBUTO
    switch (opcao1) {
        case 1:
            valor1_atrib1 = habitantes01;
            valor2_atrib1 = habitantes02;
            break;
        case 2:
            valor1_atrib1 = area01;
            valor2_atrib1 = area02;
            break;
        case 3:
            valor1_atrib1 = pib01;
            valor2_atrib1 = pib02;
            break;
        case 4:
            valor1_atrib1 = densidade01;
            valor2_atrib1 = densidade02;
            break;
        case 5:
            valor1_atrib1 = pib_per_capita01;
            valor2_atrib1 = pib_per_capita02;
            break;
    }

    // FUNÇÃO PARA COMPARAÇÃO DO SEGUNDO ATRIBUTO
    switch (opcao2) {
        case 1:
            valor1_atrib2 = habitantes01;
            valor2_atrib2 = habitantes02;
            break;
        case 2:
            valor1_atrib2 = area01;
            valor2_atrib2 = area02;
            break;
        case 3:
            valor1_atrib2 = pib01;
            valor2_atrib2 = pib02;
            break;
        case 4:
            valor1_atrib2 = densidade01;
            valor2_atrib2 = densidade02;
            break;
        case 5:
            valor1_atrib2 = pib_per_capita01;
            valor2_atrib2 = pib_per_capita02;
            break;
    }

    // DENSIDADE: MENOR É MELHOR
    float soma1 = 0, soma2 = 0;
    soma1 += (opcao1 == 4) ? -valor1_atrib1 : valor1_atrib1;
    soma2 += (opcao1 == 4) ? -valor2_atrib1 : valor2_atrib1;
    soma1 += (opcao2 == 4) ? -valor1_atrib2 : valor1_atrib2;
    soma2 += (opcao2 == 4) ? -valor2_atrib2 : valor2_atrib2;

    // RESULTADOS
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("País 1: %s | Atributo 1: %.2f | Atributo 2: %.2f | Soma: %.2f\n", pais01, valor1_atrib1, valor1_atrib2, soma1);
    printf("País 2: %s | Atributo 1: %.2f | Atributo 2: %.2f | Soma: %.2f\n", pais02, valor2_atrib1, valor2_atrib2, soma2);

    if (soma1 > soma2) {
        printf("Resultado: %s venceu!\n", pais01);
    } else if (soma1 < soma2) {
        printf("Resultado: %s venceu!\n", pais02);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}