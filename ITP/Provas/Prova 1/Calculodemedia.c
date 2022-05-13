#include <stdio.h>

float media(char tipo, float n1,float n2,float n3){
  float media;
  if(tipo == 'A'){
    media =(n1+ n2 +n3)/3; 
  }
  else if(tipo == 'P'){
    media =(n1*4 + n2*5 +n3 * 6)/15;
  }
  return media;
}

int main(){
  char tipo;
  float n1,n2,n3;
  scanf("%c %f %f %f",&tipo,&n1,&n2,&n3);
  printf("Média %.2f\n",media(tipo,n1,n2,n3));

  return 0;
}