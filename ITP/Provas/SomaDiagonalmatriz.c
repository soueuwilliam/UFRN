#include <stdio.h>

int main(){
#include <stdio.h>

int main(){
  int tammatriz;
  scanf("%d",&tammatriz);
  int matriz[tammatriz][tammatriz];
  int soma1 = 0,soma2 = 0;
  int n = 0,m=0;
  
  for(int i = 0;i<tammatriz;i++){
    for(int j = 0;j<tammatriz;j++){
      scanf("%d",&matriz[i][j]);
    }
  }
  
  for(int j = 0;j<tammatriz;j++){
      soma1 += matriz[j][n+j];
    
  }
  
  for(int z = tammatriz-1;z>=0;z--){
    soma2 += matriz[z][m+z ];
  }
  
  
  printf("%d",soma1 + soma2);

  return 0;
}