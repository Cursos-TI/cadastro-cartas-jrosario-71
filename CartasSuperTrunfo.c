#include <stdio.h>

// Calcular média de notas
// Tema 1 - Cadastro das notas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Declaracao das variavies

    char produtoA[30] = "ProdutoA";
    char produtoB[30] = "PrudutoA";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 500;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned estoqueMinimoA = 500;
    unsigned estoqueMinimoB = 2.500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir as inormacoes dos produtos

    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparacoes com o valor minimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);


  int a = 10;
  int b = 20;

  printf("a > b: %d\n", a > b);
  printf("a < b: %d\n", a < b);
  printf("a == b: %d\n", a == b);
  printf("a != b: %d\n", a != b);


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
  printf("A media é: %d\n", media);





  // Área para entrada de dados - Cadastro Carta 1
  

  // Área para exibição dos dados da cidade
 

return 0;
} 
