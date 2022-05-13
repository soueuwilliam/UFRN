#include <stdio.h>



int main(){
  int tamvetor;
  scanf("%d",&tamvetor);
  int vetor[tamvetor];

  for(int i =0;i<tamvetor;i++){
    scanf("%d",&vetor[i]);
  }
  for(int i = 0;i<tamvetor;i++){
    for(int j = i+ 1;j<tamvetor;j++){
      if(vetor[i] == vetor[j]){
        printf("%d ",vetor[i]);
      }  
    }
  }
}
  
