#include <stdio.h>

int main(){
  int a,b;
  int i = 0, j = 0,z = 0;
  //recebendo o vetor
  int tamvetor;
  scanf("%d", &tamvetor);
  int vetor[tamvetor];
  for(i = 0;i < tamvetor;i++){
    scanf("%d", &vetor[i]);
  }
  
  //recebedo a matriz
  int index = 0;
  int linha,colunas;
  scanf("%d %d", &linha,&colunas);
  int matriz[linha][colunas];

  for(z = 0;z<linha;z++){
    for(j = 0;j<colunas;j++,index++){
      matriz[z][j] = vetor[index];
    }
  }
  scanf("%d %d",&a ,&b);
  printf("%d",matriz[a][b]);
  return 0 ;
  }


  