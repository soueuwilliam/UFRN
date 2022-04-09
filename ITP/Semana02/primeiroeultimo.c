#include <stdio.h>

int main(){
  int contador, numero = 1234568;
  int inicio,fim;

  while(numero%10 != 0){
    printf("%d\n",numero%10);
    numero = numero/10;
    if(numero/10 != 0){
      inicio = numero/10;
    }
  }
  printf("%d",inicio);
  return 0;
}