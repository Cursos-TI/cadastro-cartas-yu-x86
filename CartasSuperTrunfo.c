#include <stdio.h>

/* AVISO */
// Código simples pois estou seguindo conforme a faculdade deseja!!

// Segue a call do pai aq bb
int main(){
  // declarando as váariáveis a serem utilizadas
  // confesso que não gosto de fazer assim, código fica feião
  char estado, estado2, codigoDaCarta[4], codigoDaCarta2[4], cidade[50], cidade2[50];
  int populacao, populacao2, quantidadePontosTuristicos, quantidadePontosTuristicos2;
  float area, area2, pib, pib2;

  // aqui eu fiquei agoniado, queria criar struct e otimizar com for, mas ok, foi pedido assim
  printf("Criacao das cartas do super trunfo\n\n");

  /*
  criação da carta 1
  não utilizei acentos para evitar conflitos
  */
  printf("Estado: ");
  scanf("%c", &estado);
  printf("Codigo: ");
  scanf("%s", &codigoDaCarta);
  printf("Cidade: ");
  getchar();
  fgets(cidade, sizeof(cidade), stdin);
  printf("Populacao: ");
  scanf("%d", &populacao);
  printf("Area: ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Quantidade de pontos turisticos: ");
  scanf("%d", &quantidadePontosTuristicos);

  printf("\n");
  getchar();

  // criação da segunda carta
  printf("Carta 2:\n");
  printf("Estado: ");
  scanf("%c", &estado2);
  printf("Codigo: ");
  scanf("%s", &codigoDaCarta2);
  printf("Cidade: ");
  getchar();
  fgets(cidade2, sizeof(cidade2), stdin);
  printf("Populacao: ");
  scanf("%d", &populacao2);
  printf("Area: ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Quantidade de pontos turisticos: ");
  scanf("%d", &quantidadePontosTuristicos2);

  printf("\n\n");

  //Exibição das cartas
  printf("Cartas criadas:\n\n");

  printf("Carta 1:\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigoDaCarta);
  printf("Cidade: %s", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2fkm2\n", area);
  printf("PIB: R$%.2f\n", pib);
  printf("Quantidade de pontos turisticos: %d\n", quantidadePontosTuristicos);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigoDaCarta2);
  printf("Cidade: %s", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2fkm2\n", area2);
  printf("PIB: R$%.2f\n", pib2);
  printf("Quantidade de pontos turisticos: %d\n", quantidadePontosTuristicos2);
  return 0;
}