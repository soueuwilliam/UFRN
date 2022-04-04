#include <stdio.h>

int main(){
  //declaração de variáveis
  char a, b, operacao;
  //pedindo valores
  scanf("%c %c %c", &a, &operacao, &b);
  switch (operacao)
  {
  //tabela verdade do "and"
  case '&':
    printf("-------\n|%c|%c|r|\n+-+-+-+\n|0|0|0|\n+-+-+-+\n|0|1|0|\n+-+-+-+\n|1|0|0|\n+-+-+-+\n|1|1|1|\n-------\n", a, b);
    break;
  //tabela verdade do "or"
  case '|':
    printf("-------\n|%c|%c|r|\n+-+-+-+\n|0|0|0|\n+-+-+-+\n|0|1|1|\n+-+-+-+\n|1|0|1|\n+-+-+-+\n|1|1|1|\n-------\n",a, b);
    break;
   //tabela verdade do  
  case '^':
    printf("-------\n|%c|%c|r|\n+-+-+-+\n|0|0|0|\n+-+-+-+\n|0|1|1|\n+-+-+-+\n|1|0|1|\n+-+-+-+\n|1|1|0|\n-------\n", a, b);
    break;
  
  default:
    break;
  }
   
  return 0;
}