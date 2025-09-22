#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
#include <stdio.h>
  //declaração das variaveis carta 1
  char estado1 [18];
  int populacao1;
  float area1;
  int pib1;
  int pontosturisticos1;

  //declaração das variaveis carta 2
  char estado2 [18];
  int populacao2;
  float area2;
  int pib2;
  int pontosturisticos2;


  // cadastro da carta 1
 printf ( "cadastro da carta 1\n");
 printf ("digite o estado(A-H):");
 scanf("%c",&estado1);
 printf ("digite a populacao:");
 scanf ("%d", &populacao1 );
 printf ("digite a area:");
 scanf ("%f", &area1);
 printf ("digite o pib:");
 scanf ("%d", &pib1);
 printf(" digite os pontos turisticos:");
 scanf ("%d", &pontosturisticos1);
  
 // cadastro da carta 2
 printf ( "cadastro da carta 2\n");
 printf ("digite o estado(A-H):");
scanf("%c",&estado2);
 printf ("digite a populacao:");
 scanf ("%d", &populacao2);
 printf ("digite a area:");
scanf ("%f", &area2);
printf ("digite o pib:");
scanf ("%d", &pib2);
 printf(" digite os pontos turisticos:");
scanf ("%d", &pontosturisticos2);


return 0;
} 
