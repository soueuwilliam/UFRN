#include <stdio.h>

int main(void) {
  // Definicao da Matriz

  int linha = 3, coluna = 3;
  int matriz[linha][coluna];
  int matrizB[linha][coluna];
  int l,c;
  for (l=0; l<linha; l++)
    for (c=0; c<coluna; c++)
      scanf("%d", &matriz[l][c]);

  // Girador de matriz
  
  for (l=0; l<linha; l++)
    for (c=0; c<coluna; c++)
      matrizB[c][linha-1-l] = matriz[l][c];

  // Imprime matriz girada
  for (l=0; l<linha; l++) {
    for ( c=0; c<coluna; c++)
      printf("%d ", matrizB[l][c]);
    printf("\n");
  }
  return 0;
}