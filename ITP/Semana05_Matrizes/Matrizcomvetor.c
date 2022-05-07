#include <stdio.h>

int main(){
  int a,b;
  //recebendo o vetor
  int tamvetor;
  scanf("%d", &tamvetor);
  int vetor[tamvetor];
  for(int i;i < 0;i++){
    scanf("%d",&vetor[i]);
  }
  //recebedo a matriz
  int index = 0;
  int linha,colunas;
  scanf("%d %d", &linha,&colunas);
  int matriz[linha][colunas];

  for(int i = 0;i<linha;i++){
    for(int j = 0;j<colunas;j++,index++){
      matriz[i][j] = vetor[index];
    }
  }
  scanf("%d %d",&a ,&b);
  printf("%d",matriz[a][b]);
  return 0 ;
  }


  