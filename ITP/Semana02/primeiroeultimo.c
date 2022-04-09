#include <stdio.h>

int main(){
  //Declarando variaveis 
  int numero;
  int inicio = 0,fim = 0;
  //Recebendo a entrada
  scanf("%d",&numero);
  //pegando o ultimo algarismo 
  fim = numero%10;
  while(numero%10 != 0){
    numero /= 10;
    //pegando o primeiro algarismo do numero
    if(numero%10 != 0){
      inicio = numero;
    }
  }
  printf("O último numero é: %d\n",fim);
  printf("O primeiro número é: %d\n",inicio);
  printf("A soma é: %d\n",inicio + fim);
  return 0;
}