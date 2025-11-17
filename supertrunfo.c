#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/* DADOS A SEREM UTILIZADOS 
Exemplo de Saída:


Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

Densidade Populacional: 8102.47 hab/km²

PIB per Capita: 56724.32 reais

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30

Densidade Populacional: 5622.24 hab/km²

PIB per Capita: 44532.91 reais*/
int main() {  
  char estado[30], cidade[30], codigo[10];
  int populacao;
  float area, pib;
  int numerodepontosturisticos;
  float densidadepopulacional, pibpercapita;

  char estado2[30], cidade2[30], codigo2[10];
  int populacao2;
  float area2, pib2;
  int numerodepontosturisticos2;
  float densidadepopulacional2, pibpercapita2;

  printf("***************JOGO ******SUPER******TRUNFO****************\n");

  // CARTA 1
  printf("Digite o estado da carta 1: \n");
  scanf("%29s", estado);
  printf("Digite a cidade da carta 1: \n");
  scanf("%29s", cidade);
  printf("Digite o código da carta 1: \n");
  scanf("%9s", codigo);
  printf("Digite a população da carta 1: \n");
  scanf("%d", &populacao);
  printf("Digite a área da carta 1: \n");
  scanf("%f", &area);
  printf("Digite o PIB da carta 1: \n");
  scanf("%f", &pib);
  printf("Digite o número de pontos turísticos da carta 1: \n");
  scanf("%d", &numerodepontosturisticos);

  densidadepopulacional = populacao / area;
  pibpercapita = pib / populacao;

  printf("DADOS DA CARTA 1\n");
  printf("O estado é: %s\n", estado);
  printf("A cidade é: %s\n", cidade);
  printf("O código é: %s\n", codigo);
  printf("A população é: %d\n", populacao);
  printf("A área é: %.2f\n", area);
  printf("O PIB é: %.2f\n", pib);
  printf("O número de pontos turísticos é: %d\n", numerodepontosturisticos);
  printf("-----------------------------\n");
  printf("A densidade populacional é: %.2f\n", densidadepopulacional);
  printf("O PIB per capita é: %.2f\n", pibpercapita);
  printf("*******************************************************\n");

  // CARTA 2
  printf("Digite o estado da carta 2: \n");
  scanf("%29s", estado2);
  printf("Digite a cidade da carta 2: \n");
  scanf("%29s", cidade2);
  printf("Digite o código da carta 2: \n");
  scanf("%9s", codigo2);
  printf("Digite a população da carta 2: \n");
  scanf("%d", &populacao2);
  printf("Digite a área da carta 2: \n");
  scanf("%f", &area2);
  printf("Digite o PIB da carta 2: \n");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos da carta 2: \n");
  scanf("%d", &numerodepontosturisticos2);

  densidadepopulacional2 = populacao2 / area2;
  pibpercapita2 = pib2 / populacao2;

  printf("DADOS DA CARTA 2\n");
  printf("O estado é: %s\n", estado2);
  printf("A cidade é: %s\n", cidade2);
  printf("O código é: %s\n", codigo2);
  printf("A população é: %d\n", populacao2);
  printf("A área é: %.2f\n", area2);
  printf("O PIB é: %.2f\n", pib2);
  printf("O número de pontos turísticos é: %d\n", numerodepontosturisticos2);
  printf("-----------------------------\n");
  printf("A densidade populacional é: %.2f\n", densidadepopulacional2);
  printf("O PIB per capita é: %.2f\n", pibpercapita2);
  printf("*******************************************************\n"); 
    // COMPARAÇÕES ENTRE AS CARTAS

printf("COMPARAÇÕES ENTRE AS CARTAS\n");


  printf ("A carta 2 tem a maior população que a carta 1? %s\n", (populacao2 > populacao) ? "sim" : "não");
  printf ("A carta 2 tem a maior área que a carta 1? %s\n", (area2 > area) ? "sim" : "não");
  printf ("A carta 2 tem o maior PIB que a carta 1? %s\n", (pib2 > pib) ? "sim" : "não");
  printf ("A carta 2 tem o maior número de pontos turísticos que a carta 1? %s\n", (numerodepontosturisticos > numerodepontosturisticos) ? "sim" : "não");
  printf ("A carta 2 tem a maior densidade populacional que a carta 1? %s\n", (densidadepopulacional > densidadepopulacional) ? "sim" : "não");
  printf ("A carta 2 tem o maior PIB per capita que a carta 1? %s\n", (pibpercapita2 > pibpercapita) ? "sim" : "não");



   // Estrutura de decisão da carta vencedora

  if (pibpercapita2 > pibpercapita) {
    printf("A carta 2 é a vencedora! (pibpercapita)\n");
  } else if (pibpercapita > pibpercapita2) {
    printf("A carta 1 é a vencedora!(pippercapita)\n");
  } else {
    printf("As cartas são empatadas!(pippercapita)\n");
      }
      if (populacao2 > populacao) {
    printf("A carta 2 é a vencedora! (populacao)\n");
  } else if (populacao > populacao2) {
    printf("A carta 1 é a vencedora!(populacao)\n");
  } else {
    printf("As cartas são empatadas!(populacao)\n");
      }

      if (area2 > area) {
    printf("A carta 2 é a vencedora!(area)\n");
  } else if (area > area2) {
    printf("A carta 1 é a vencedora!(area)\n");
  } else {
    printf("As cartas são empatadas!(area)\n");
      }
      

    // Menu de opções Switch case
/*
           printf("Escolha o atributo para comparar\n" );
      printf (" Escolha 1 - população\n");
      printf ("Escolha 2 para area\n");
      printf ("Escolha 3 para pib\n");
       printf ("Escolha 4 para numero de pontos turisticos\n");
        printf ("Escolha 5 para densidade\n") ;
         printf ("Escolha 6 para pib per capita\n") ;
  
  int opcao;
  printf("Digite a opção desejada (1-6): ");
  scanf("%d", &opcao);
  switch (opcao) {
    case 1:
      printf("População da carta 1: %d\n", populacao);
      printf("População da carta 2: %d\n", populacao2);
      if (populacao2 > populacao) {
        printf("A carta 2 é a vencedora!(populacao)\n");
      } else if (populacao > populacao2) {
        printf("A carta 1 é a vencedora!(populacao)\n");
      
      } else
      {
       printf("As cartas são empatadas!(populacao)\n");
      }
      
      break;
    case 2:
      printf("Área da carta 1: %.2f\n", area);
      printf("Área da carta 2: %.2f\n", area2);
      if (area2 > area) {
        printf("A carta 2 é a vencedora!(area)\n");
      } else if (area > area2) {
        printf("A carta 1 é a vencedora!(area)\n");
      } else
      {
       printf("As cartas são empatadas!(area)\n");
      }
      
      break;
    case 3:
      printf("PIB da carta 1: %.2f\n", pib);
      printf("PIB da carta 2: %.2f\n", pib2);
      if (pib2 > pib) {
        printf("A carta 2 é a vencedora! (pib)\n");
      } else if (pib > pib2) {
        printf("A carta 1 é a vencedora!(pib)\n");
      } else
      {
        printf("As cartas são empatadas!(pib)\n");
      }
      
      break;
    case 4:
      printf("Número de pontos turísticos da carta 1: %d\n", numerodepontosturisticos);
      printf("Número de pontos turísticos da carta 2: %d\n", numerodepontosturisticos2);
      if (numerodepontosturisticos2 > numerodepontosturisticos) {
        printf("A carta 2 é a vencedora! (número de pontos turísticos)\n");
      } else if (numerodepontosturisticos > numerodepontosturisticos2) {
        printf("A carta 1 é a vencedora!(número de pontos turísticos)\n");
      } else
      {
        printf("As cartas são empatadas!(número de pontos turísticos)\n");
      }
      
      break;
    case 5:
      printf("Densidade populacional da carta 1: %.2f\n", densidadepopulacional);
      printf("Densidade populacional da carta 2: %.2f\n", densidadepopulacional2);
      if (densidadepopulacional2 > densidadepopulacional) {
        printf("A carta 1 é a vencedora! (densidade populacional)\n");
      } else if (densidadepopulacional > densidadepopulacional2) {
        printf("A carta 2 é a vencedora!(densidade populacional)\n");
      } else
      {
  printf("As cartas são empatadas!(densidade populacional)\n");
      }
      
      break;
    case 6:
      printf("PIB per capita da carta 1: %.2f\n", pibpercapita);
      printf("PIB per capita da carta 2: %.2f\n", pibpercapita2);
      if (pibpercapita2 > pibpercapita) {
        printf("A carta 2 é a vencedora! (pibpercapita)\n");
      } else if (pibpercapita > pibpercapita2) {
        printf("A carta 1 é a vencedora!(pippercapita)\n");
      } else
      {
        printf("As cartas são empatadas!(pippercapita)\n");
      }
      break;
    default:
      printf("Opção inválida!\n");
      break;
  }
*/
  //Implementando Comparações Avançadas com Atributos Múltiplos em C
 printf("***Bem Vindo ao Jogo de Comparações Avançadas***\n");
printf("Escolha um atributo para comparar as cartas:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de Pontos Turísticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - PIB per Capita\n");
int opcao, resultado1, resultado2;
while (opcao != 0) {
printf("Digite a opção desejada (1-6): ");
scanf("%d", &opcao);

switch (opcao ) {
    case 1:
      printf("População da carta 1: %d\n", populacao);
      printf("População da carta 2: %d\n", populacao2);
      resultado1 = populacao > populacao2? 1:0;  
             break;
    case 2:
      printf("Área da carta 1: %.2f\n", area);
      printf("Área da carta 2: %.2f\n", area2);
      resultado1 = area > area2? 1:0;  
             break;
    case 3:
      printf("PIB da carta 1: %.2f\n", pib);
      printf("PIB da carta 2: %.2f\n", pib2);
      resultado1 = pib > pib2? 1:0;  
             break;
    case 4:
      printf("Número de pontos turísticos da carta 1: %d\n", numerodepontosturisticos);
      printf("Número de pontos turísticos da carta 2: %d\n", numerodepontosturisticos2);
      resultado1 = numerodepontosturisticos > numerodepontosturisticos2? 1:0;  
             break;
    case 5:
      printf("Densidade populacional da carta 1: %.2f\n", densidadepopulacional);
      printf("Densidade populacional da carta 2: %.2f\n", densidadepopulacional2);
      resultado1 = densidadepopulacional < densidadepopulacional2? 1:0;  
             break;
    case 6:
      printf("PIB per capita da carta 1: %.2f\n", pibpercapita);
      printf("PIB per capita da carta 2: %.2f\n", pibpercapita2);
      resultado1 = pibpercapita > pibpercapita2? 1:0;  
             break;
    default:
      printf("Opção inválida!\n");
      break;
  }

  printf("Digite a opção desejada para a segunda comparação (1-6): ");
  int opcao2;
  scanf("%d", &opcao2);

  switch (opcao2) {
  case 1:
      printf("População da carta 1: %d\n", populacao);
      printf("População da carta 2: %d\n", populacao2);
      resultado2 = populacao > populacao2? 1:0;  
             break;
    case 2:
      printf("Área da carta 1: %.2f\n", area);
      printf("Área da carta 2: %.2f\n", area2);
      resultado2 = area > area2? 1:0;  
             break;
    case 3:
      printf("PIB da carta 1: %.2f\n", pib);
      printf("PIB da carta 2: %.2f\n", pib2);
      resultado2 = pib > pib2? 1:0;  
             break;
    case 4:
      printf("Número de pontos turísticos da carta 1: %d\n", numerodepontosturisticos);
      printf("Número de pontos turísticos da carta 2: %d\n", numerodepontosturisticos2);
      resultado2 = numerodepontosturisticos > numerodepontosturisticos2? 1:0;  
             break;
    case 5:
      printf("Densidade populacional da carta 1: %.2f\n", densidadepopulacional);
      printf("Densidade populacional da carta 2: %.2f\n", densidadepopulacional2);
      resultado2 = densidadepopulacional < densidadepopulacional2? 1:0;  
             break;
    case 6:
      printf("PIB per capita da carta 1: %.2f\n", pibpercapita);
      printf("PIB per capita da carta 2: %.2f\n", pibpercapita2);
      resultado2 = pibpercapita > pibpercapita2? 1:0;  
             break;
    default:
      printf("Opção inválida!\n");
      break;
  }

  if (resultado1 && resultado2) {
    printf("A carta 1 é a vencedora nas duas comparações!\n");
  } else if (!resultado1 && !resultado2) {
    printf("A carta 2 é a vencedora nas duas comparações!\n");
  } else {
    printf("As cartas empataram nas comparações!\n");
  }
  
}


return 0;

}
// Fim do programa