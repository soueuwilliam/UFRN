#include <stdio.h>

int main(){
  int linhas,Contador = 1;
  scanf("%d",&linhas);
  if(linhas<= 0){
    printf("Você entrou com %d, tente de novo na próxima\n",linhas);
  }
  else{
    for(int i =0 ; i<linhas; i++){
      for(int j = 0 ;j < i+1;j++){
        printf("%2d ",Contador);
        Contador++;
      }
      printf("\n");
    }  
  }
  return 0;
}