#include <stdio.h>

//IMPRIME MATRIZES
void print_mat (int l, int c, int R[l][c]) {
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", R[i][j]);
    }
    printf("\n");
  }
}

//Multiplica duas matrizes A e B e armazena resultado em R
void mult_mat (int lA, int cA, int A[lA][cA], int lB, int cB, int B[lB][cB], int R[lA][cB]) {

  for (int i = 0; i < lA; i++) {
  
    for (int j = 0; j < cB; j++) {
      
      R[i][j] = 0;
      
      for (int k = 0; k < cA; k++) {
        R[i][j] += A[i][k] * B[k][j];
      }
      
    }
    
  }

}

//Soma duas matrizes A e B e armazena resultado em R
void sum_mat (int lA, int cA, int A[lA][cA], int lB, int cB, int B[lB][cB], int R[lB][cB]) {
  for (int i = 0; i < lA; i++) {
    for (int j = 0; j < cA; j++) {
      R[i][j] = A[i][j] + B[i][j];
    }
  }
}

//Função PRINCIPAL recebe valores
int main(void) {
  
  //Declarar e receber tamanhos da matriz LA e CA
  int lA = 0, cA = 0;
  scanf("%d %d", &lA, &cA);
  //Declarar e receber valores da matriz A
  int matA[lA][cA];
  for (int i = 0; i < lA; i++) {
    for (int j = 0; j < cA; j++) {
      scanf("%d", &matA[i][j]);
    }
  }
  
  //Declarar e receber tamanhos da matriz LB e CB
  int lB = 0, cB = 0;
  scanf("%d %d", &lB, &cB);
  //Declarar e receber valores da matriz B
  int matB[lB][cB];
  for (int k = 0; k < lB; k++) {
    for (int l = 0; l < cB; l++) {
      scanf("%d", &matB[k][l]);
    }
  }

  //Declarar e receber tamanhos da matriz LB e CB
  int lC = 0, cC = 0;
  scanf("%d %d", &lC, &cC);
  //Declarar e receber valores da matriz B
  int matC[lC][cC];
  for (int i = 0; i < lC; i++) {
    for (int j = 0; j < cC; j++) {
      scanf("%d", &matC[i][j]);
    }
  }

  //Declarar e receber tamanhos da matriz LB e CB
  int lD = 0, cD = 0;
  scanf("%d %d", &lD, &cD);
  //Declarar e receber valores da matriz B
  int matD[lD][cD];
  for (int i = 0; i < lD; i++) {
    for (int j = 0; j < cD; j++) {
      scanf("%d", &matD[i][j]);
    }
  }

  
  if ( lA != cB || lB != cC || lC != cD) {
    printf("Valor de alguma das multiplicações não pode ser calculado");
  } else {
    int result_multA[lA][cB];
    mult_mat(lA, cA, matA, lB, cB, matB, result_multA);
    int result_multB[lB][cC];
    mult_mat(lB, cB, matB, lC, cC, matC, result_multB);
    int result_multC[lC][cD];
    mult_mat(lC, cC, matC, lD, cD, matD, result_multC);

    if ( ( lA != lB && cB != cC ) || ( lB != lC && cC != cD ) || (lA != lC && cB != cD ) ) {
      printf("Valor da soma não pode ser calculado");
    } else {

      int result_sumA[lA][cB];
      sum_mat(lA, cB, result_multA, lB, cC, result_multB, result_sumA);

      int result_sumB[lA][cB];
      sum_mat(lA, cB, result_sumA, lC, cD, result_multC, result_sumB);

      print_mat(lA, cB, result_sumB);    
    } 
  }
  return 0;
}