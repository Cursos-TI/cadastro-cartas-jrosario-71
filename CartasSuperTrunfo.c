#include <stdio.h>

// Calcular média de notas
// Tema 1 - Cadastro das notas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int nota1, nota2, nota3;
  int media;

  printf("Programa de cálculo de media de notas: \n");
  printf("digite sua primeira nota: \n");
  scanf("%d", &nota1);
  printf("digite sua segunda nota: \n");
  scanf("%d", &nota2);
  printf("digite sua terceira nota: \n");
  scanf("%d", &nota3);

  media =  (nota1 + nota2 + nota3) / 3;
  printf("A media é: %d", media);





  // Área para entrada de dados - Cadastro Carta 1
  

  // Área para exibição dos dados da cidade
 

return 0;
} 
