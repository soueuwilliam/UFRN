#include <stdio.h>

void tipotriangulo(int l1,int l2, int l3){
  if(l1 > l2 + l3 || l2 >l1 + l3 || l3 > l2 + l1){
    printf("Os números informados não constituem os lados de um triângulo\n");
  }
  else{
    if(l1 == l2 && l2 == l3){
        printf("triângulo equilátero");
    }
    else if(l1 == l2 || l1== l3 || l2 == l3){
      printf("triângulo isósceles");
    }
    else{
      printf("triângulo escaleno");
    }
  }
}

int main(){
  int l1,l2,l3;
  scanf("%d %d %d",&l1,&l2,&l3);
  tipotriangulo(l1,l2,l3);  
  return  0;
  
}