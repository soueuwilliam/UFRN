#include <stdio.h>

int main(){
    //declarando variaveis
    int decimal;
    //recebendo entrada
    scanf("%d", &decimal);
    //calculo de binario
    while (decimal != 0 )
    {
      printf("%d", decimal%2);
      decimal = decimal/2;
    }
    

    return 0;
}
/*
int decimal_binario(int decimal){
  int binario = 0;
  int resto, i = 1;
  while(decimal != 0) {
    resto = decimal % 2;
    decimal = decimal / 2;
    binario = binario + (resto * i);
    i = i * 10;
  }
*/