#include <stdio.h>



int main(){
  int tamvetor;
  scanf("%d",&tamvetor);
  int vetor[tamvetor];

  for(int i =0;i<tamvetor;i++){
    scanf("%d",&vetor[i]);
  }
  for(int i = 0;i<tamvetor;i++){
    for(int j = i;j<tamvetor;j++){
      if(vetor[i] == vetor[j+1]){
        printf("%d ",vetor[i]);
      }  
    }
  }
}
  
