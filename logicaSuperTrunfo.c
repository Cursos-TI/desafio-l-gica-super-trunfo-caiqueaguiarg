#include <stdio.h>
#include <string.h>

int main(){

   unsigned int opcao;
    printf("Menu Desafio SuperTrunfo:\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair do Jogo\n");
    printf("Digite a opcao Desejada: ");
    scanf("%u", &opcao);


    switch (opcao){
        case 1:{
            int carta1 = 1;
            char estadoC1;
            char codigoCartaC1[4], nomeCidadeC1[25];
            int populacaoC1, pontosTuristicosC1;
            float areaKM2C1, PIBC1, densidadePopulacional1, PibPerCapita1, superPoder1;
        
            int carta2 = 2;
            char estadoC2;
            char codigoCartaC2[4], nomeCidadeC2[25];
            int populacaoC2, pontosTuristicosC2;
            float areaKM2C2, PIBC2, densidadePopulacional2, PibPerCapita2, superPoder2;
        
            printf("\nBem Vindo ao Jogo do SuperTrunfo!\n\n");
        
            printf("Digite os dados da Primeira carta:\n");
        
        
            printf("Codigo Carta: ");
            scanf("%s", codigoCartaC1);
            
            printf("Estado: ");
            scanf(" %c", &estadoC1);  
        
        
            printf("Nome Cidade: ");
            scanf("%s", nomeCidadeC1);  
        
            printf("Populacao: ");
            scanf("%d", &populacaoC1);
        
            printf("Pontos Turisticos: ");
            scanf("%d", &pontosTuristicosC1);
        
            printf("Area KM2: ");
            scanf("%f", &areaKM2C1);
        
            printf("PIB: ");
            scanf("%f", &PIBC1);
        
            printf("\n\nDigite os dados da Segunda carta:\n");
        
            printf("Codigo Carta: ");
            scanf("%s", codigoCartaC2);
        
            printf("Estado: ");
            scanf(" %c", &estadoC2);
        
            printf("Nome Cidade: ");
            scanf("%s", nomeCidadeC2);
        
            printf("Populacao: ");
            scanf("%d", &populacaoC2);
        
            printf("Pontos Turisticos: ");
            scanf("%d", &pontosTuristicosC2);
        
            printf("Area KM2: ");
            scanf("%f", &areaKM2C2);
        
            printf("PIB: ");
            scanf("%f", &PIBC2);
        
            densidadePopulacional1 = (float) populacaoC1 / areaKM2C1;
            densidadePopulacional2 = (float) populacaoC2 / areaKM2C2;
            PibPerCapita1 = (float) PIBC1 / populacaoC1;
            PibPerCapita2 = (float) PIBC2 / populacaoC2;
        
            superPoder1 = (float) populacaoC1 + areaKM2C1 + PIBC1 + pontosTuristicosC1 + PibPerCapita1 + (1 / densidadePopulacional1);
            superPoder2 =(float) populacaoC2+ areaKM2C2 + PIBC2 + pontosTuristicosC2 + PibPerCapita2 + (1 / densidadePopulacional2);
        
            int comparaPopulacao, comparaArea, comparaPIB, comparaPontosTuristicos, comparaDensidadePopulacional, comparaPibPerCapita, comparaSuperPoder;

            char primeiraComparacao, segundaComparacao;
            unsigned int resultado1, resultado2;
            float primeiracartasoma1, primeiracartasoma2, segundacartasoma1, segundacartasoma2;
            char nomePrimeiroAtributo[30], nomeSegundoAtributo[30];

            printf("\n\nDados Primeira Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Densidsidade Populacional: %.2f hab/km2\n PIB Per Capita: %.2f reais\n Super poder: %.2f \n",
                carta1, estadoC1, codigoCartaC1, nomeCidadeC1, populacaoC1, pontosTuristicosC1, areaKM2C1, PIBC1, densidadePopulacional1, PibPerCapita1, superPoder1);
            
            printf("\n\nDados Segunda Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area: %.2f km2\n PIB: %.2f bilhoes de reais\n Densidade Populacional: %.2f hab/km2\n PIB Per Capita: %.2f reais\n Super poder: %.2f \n",
                carta2, estadoC2, codigoCartaC2, nomeCidadeC2, populacaoC2, pontosTuristicosC2, areaKM2C2, PIBC2, densidadePopulacional2, PibPerCapita2, superPoder2);


            printf("\nAtributos para Primeira Comparacao:\n");
            printf("A - Populacao\n");
            printf("B - Area\n");
            printf("C - PIB\n");
            printf("D - Pontos Turisticos\n");
            printf("E - Densidade Populacional\n");
            printf("F - PIB per Capita\n");
            printf("G - Super Poder \n");
            printf("Escolha o Primeiro atributo a ser comparado: ");
            scanf(" %c", &primeiraComparacao);

            switch (primeiraComparacao){
                case 'A':
                case 'a':
                    printf("\nVoce escolheu Comparar a Populacao!\n");
                    resultado1 = populacaoC1 > populacaoC2 ? 1 : populacaoC1 == populacaoC2 ? 10 : 0;
                    resultado1 == 1? printf(" \n\nA carta 1 venceu a comparacao de populacao\n\n ") : resultado1 == 10 ? printf("\n\nPopulacao empatada\n\n") : resultado1 == 0 ? printf("\n\nA carta 2 venceu a comparacao de populacao\n\n") : 0;
                    primeiracartasoma1 = populacaoC1;
                    primeiracartasoma2 = populacaoC2;
                    strcpy(nomePrimeiroAtributo, "Populacao");
                break;

                case 'B':
                case 'b':
                    printf("Voce escolheu Comparar a Area!\n");
                    resultado1 = areaKM2C1 > areaKM2C2? 1 : areaKM2C1 == areaKM2C2 ? 10 : 0;
                    resultado1 == 1? printf(" \n\nA carta 1 venceu a comparacao de Area\n\n ") : resultado1 == 10 ? printf("\n\nArea empatada\n\n") : resultado1 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Area\n\n") : 0;
                    primeiracartasoma1 = areaKM2C1;
                    primeiracartasoma2 = areaKM2C2;
                    strcpy(nomePrimeiroAtributo,"Area");
                break;

                case 'C':
                case 'c':
                    printf("Voce escolheu Comparar o PIB!\n");
                    resultado1 = PIBC1 > PIBC2 ? 1 : PIBC1 == PIBC2 ? 10 : 0;
                    resultado1 == 1? printf(" \n\nA carta 1 venceu a comparacao de PIB\n\n ") : resultado1 == 10 ? printf("\n\nPIB empatado\n\n") : resultado1 == 0 ? printf("\n\nA carta 2 venceu a comparacao de PIB\n\n") : 0;
                    primeiracartasoma1 = PIBC1;
                    primeiracartasoma2 = PIBC2;
                    strcpy(nomePrimeiroAtributo,"PIB");
                break;

                case 'D':
                case 'd':
                    printf("Voce escolheu Comparar os Pontos Turisticos!\n");
                    resultado1 = pontosTuristicosC1 > pontosTuristicosC2 ? 1 : pontosTuristicosC1 == pontosTuristicosC2 ? 10 : 0; 
                    resultado1 == 1? printf(" \n\nA carta 1 venceu a comparacao de Pontos Turisticos\n\n ") : resultado1 == 10 ? printf("\n\nPontos Turisticos empatados\n\n") : resultado1 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Pontos Turisticos\n\n") : 0;
                    primeiracartasoma1 = pontosTuristicosC1;
                    primeiracartasoma2 = pontosTuristicosC2;
                    strcpy(nomePrimeiroAtributo,"PontosTuristicos");
                break;

                case 'E':
                case 'e':
                    printf("Voce escolheu Comparar a Densidade Populacional!\n");
                    resultado1 = densidadePopulacional1 < densidadePopulacional2 ?1 : densidadePopulacional1 == densidadePopulacional2 ? 10 :0;
                    resultado1 == 1? printf(" \n\nA carta 1 venceu a comparacao de Densidade Populacional\n\n ") : resultado1 == 10 ? printf("\n\nDensidade Populacional empatada\n\n") : resultado1 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Densidade Populacional\n\n") : 0;
                    primeiracartasoma1 = densidadePopulacional1;
                    primeiracartasoma2 = densidadePopulacional2;
                    strcpy(nomePrimeiroAtributo,"DensidadePopulacional");
                break;

                case 'F':
                case 'f':
                    printf("Voce escolheu Comparar o PIB per Capita!\n");
                    resultado1 = PibPerCapita1 > PibPerCapita2 ? 1 : PibPerCapita1 == PibPerCapita2 ? 10 : 0;
                    resultado1 == 1? printf(" \n\nA carta 1 venceu a comparacao de PIB per Capita\n\n ") : resultado1 == 10 ? printf("\n\nPIB per Capita  empatada\n\n") : resultado1 == 0 ? printf("\n\nA carta 2 venceu a comparacao de PIB per Capita\n\n") : 0;
                    primeiracartasoma1 = PibPerCapita1;
                    primeiracartasoma2 = PibPerCapita2;
                    strcpy(nomePrimeiroAtributo,"PIBperCapita");
                break;

                case 'G':
                case 'g':   
                    printf("Voce escolheu Comparar o Super Poder!\n");
                    resultado1 = superPoder1 > superPoder2 ? 1 : superPoder1 == superPoder2 ? 10 : 0;
                    resultado1 == 1? printf(" \n\nA carta 1 venceu a comparacao de Super Poder\n\n ") : resultado1 == 10 ? printf("\n\nSuper Poder empatado\n\n") : resultado1 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Super Poder\n\n") : 0;
                    primeiracartasoma1 = superPoder1;
                    primeiracartasoma2 = superPoder2;
                    strcpy(nomePrimeiroAtributo,"SuperPoder");
                break;

                default:
                    printf("Opcao Invalida!\n");
                break;

            }

            printf("\nAtributos para Segunda Comparacao:\n");
            printf("A - Populacao\n");
            printf("B - Area\n");
            printf("C - PIB\n");
            printf("D - Pontos Turisticos\n");
            printf("E - Densidade Populacional\n");
            printf("F - PIB per Capita\n");
            printf("G - Super Poder \n");
            printf("Escolha o Segundo atributo a ser comparado: ");
            scanf(" %c", &segundaComparacao);

            if(primeiraComparacao == segundaComparacao){
                printf("\n\nVoce escolheu o mesmo atributo para comparar!\n");
                printf("\nFavor escolher outro atributo!\n\n");
            } else{
                switch (segundaComparacao){
                    case 'A':
                    case 'a':
                        printf("\nVoce escolheu Comparar a Populacao!\n");
                        resultado2 = populacaoC1 > populacaoC2 ? 1 : populacaoC1 == populacaoC2 ? 10 :0;
                        resultado2 == 1? printf(" \n\nA carta 1 venceu a comparacao de populacao\n\n ") : resultado2 == 10 ? printf("\n\nPopulacao empatada\n\n") : resultado2 == 0 ? printf("\n\nA carta 2 venceu a comparacao de populacao\n\n") : 0;
                        segundacartasoma1 = populacaoC1;
                        segundacartasoma2 = populacaoC2;
                        strcpy(nomeSegundoAtributo,"Populacao");
                      
                    break;

                    case 'B':
                    case 'b':
                        printf("Voce escolheu Comparar a Area!\n");
                        resultado2 = areaKM2C1 > areaKM2C2 ? 1 : areaKM2C1 == areaKM2C2 ? 10 : 0;
                        resultado2 == 1? printf(" \n\nA carta 1 venceu a comparacao de Area\n\n ") : resultado2 == 10 ? printf("\n\nArea empatada\n\n") : resultado2 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Area\n\n") : 0;
                        segundacartasoma1 = areaKM2C1;
                        segundacartasoma2 = areaKM2C2;
                        strcpy(nomeSegundoAtributo,"Area");
                    break;

                    case 'C':
                    case 'c':
                        printf("Voce escolheu Comparar O PIB!\n");
                        resultado2 = PIBC1 > PIBC2 ? 1: PIBC1 == PIBC2 ? 10 : 0; 
                        resultado2 == 1? printf(" \n\nA carta 1 venceu a comparacao do PIB\n\n ") : resultado2 == 10 ? printf("\n\n PIB empatado\n\n") : resultado2 == 0 ? printf("\n\nA carta 2 venceu a comparacao do PIB\n\n") : 0;
                        segundacartasoma1 = PIBC1;
                        segundacartasoma2 = PIBC2;
                        strcpy(nomeSegundoAtributo,"PIB");
                    break;

                    case 'D':
                    case 'd':
                        printf("Voce escolheu Comparar os Pontos Turisticos!\n");
                        resultado2 = pontosTuristicosC1 > pontosTuristicosC2 ? 1 : pontosTuristicosC1 == pontosTuristicosC2 ? 10 : 0;
                        resultado2 == 1? printf(" \n\nA carta 1 venceu a comparacao de Pontos Turisticos\n\n ") : resultado2 == 10 ? printf("\n\nPontos Turisticos empatada\n\n") : resultado2 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Pontos Turisticos\n\n") : 0;
                        segundacartasoma1 = pontosTuristicosC1;
                        segundacartasoma2 = pontosTuristicosC2;
                        strcpy(nomeSegundoAtributo, "PontosTuristicos");
                    break;

                    case 'E':
                    case 'e':
                        printf("Voce escolheu Comparar a Densidade Populacional!\n");
                        resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : densidadePopulacional1 == densidadePopulacional2 ? 10: 0;
                        resultado2 == 1? printf(" \n\nA carta 1 venceu a comparacao de Densidade Populacional\n\n ") : resultado2 == 10 ? printf("\n\nDensidade Populacional empatada\n\n") : resultado2 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Densidade Populacional\n\n") : 0;
                        segundacartasoma1 = densidadePopulacional1;
                        segundacartasoma2 = densidadePopulacional2;
                        strcpy(nomeSegundoAtributo, "DensidadePopulacional");
                    break;

                    case 'F':
                    case 'f':
                        printf("Voce escolheu Comparar o PIB per Capita!\n");
                        resultado2 = PibPerCapita1 > PibPerCapita2 ? 1 : PibPerCapita1 == PibPerCapita2 ? 10 : 0;
                        resultado2 == 1? printf(" \n\nA carta 1 venceu a comparacao de PIB per Capita\n\n ") : resultado2 == 10 ? printf("\n\nPIB per Capita empatado\n\n") : resultado2 == 0 ? printf("\n\nA carta 2 venceu a comparacao de PIB per Capita\n\n") : 0;
                        segundacartasoma1 = PibPerCapita1;
                        segundacartasoma2 = PibPerCapita2;
                        strcpy(nomeSegundoAtributo,"PIBperCapita");
                    break;

                    case 'G':
                    case 'g':
                        printf("Voce escolheu Comparar o Super Poder\n");
                        resultado2 = superPoder1 > superPoder2 ? 1 : superPoder1 == superPoder2 ? 10 : 0;
                        resultado2 == 1? printf(" \n\nA carta 1 venceu a comparacao de Super Poder\n\n ") : resultado2 == 10 ? printf("\n\nSuper Poder empatado\n\n") : resultado2 == 0 ? printf("\n\nA carta 2 venceu a comparacao de Super Poder\n\n") : 0;
                        segundacartasoma1 = superPoder1;
                        segundacartasoma2 = superPoder2;
                        strcpy(nomeSegundoAtributo,"SuperPoder");
                    break;
                }
                float resultadoPrimeiraSoma = (float) primeiracartasoma1 + segundacartasoma1;
                float resultadoSegundaSoma =  (float) primeiracartasoma2 + segundacartasoma2;

                printf("\n\n!!!!!!!!!! Resultado da Rodada: !!!!!!!!\n");


                printf("\n\nNome da Cidade: %s\n", nomeCidadeC1);
                printf("Primeiro Atributo: %s\n", nomePrimeiroAtributo);
                printf("Valor: %.2f\n", primeiracartasoma1);
                printf("Segundo Atributo: %s\n", nomeSegundoAtributo);
                printf("Valor: %.2f\n",segundacartasoma1);
                printf("Resultado da Soma: %.2f\n", resultadoPrimeiraSoma);


                printf("\n\nNome da Cidade: %s\n", nomeCidadeC2);
                printf("Primeiro Atributo: %s\n", nomePrimeiroAtributo);
                printf("Valor: %.2f\n", primeiracartasoma2);
                printf("Segundo Atributo: %s\n", nomeSegundoAtributo);
                printf("Valor: %.2f\n", segundacartasoma2);
                printf("Resultado da Soma: %.2f\n", resultadoSegundaSoma);
                

                if(resultadoPrimeiraSoma > resultadoSegundaSoma){
                    printf("\n\nA Carta 1  venceu, pois a soma dos atributos escolhidos e maior!\n\n");
                } else if(resultadoSegundaSoma > resultadoPrimeiraSoma){
                    printf("\n\nA Carta 2 venceu, pois a soma dos atributos escolhidos e maior!\n\n");
                } else{
                    printf("\n\nAs cartas empataram, pois a soma dos atributos escolhidos e igual!\n\n");
                }
            }
            break;
    }
    case 2:{
        printf("\nRegras do Jogo:\n");
        printf("1. Cada jogador tem um baralho de cartas com atributos.\n");
        printf("2. O jogador escolhe um atributo para comparar.\n");
        printf("3. O jogador com o maior valor na soma do valor dos atributos escolhido vence a rodada. (densidade populacional e o menor)\n");
        printf("4. O jogador que vencer mais rodadas ganha o jogo.\n");
        break;
    }
    case 3:{
        printf("\nSaindo do Jogo...\n\n");
        break;
    }
    default:{
        printf("Opcao Invalida!\n");
        break;
    }
    }
    return 0;
}
