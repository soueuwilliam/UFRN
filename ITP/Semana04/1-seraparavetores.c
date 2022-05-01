#include <stdio.h>

int main(){
  int mul3[20] = {0};
  int mul4[20] = {0};
  int semmul[20] = {0};
  int i = 0,j = 0,n3 = 0,n4 = 0,n0 = 0;
  int num;

  for(i;i<20;i++){
    scanf("%d", &num);
    if(num%3 == 0 && num%4 == 0){
      mul3[n3] = num;
      n3++;
      mul4[n4] = num;
      n4++;
    }
    else if(num%3 == 0){
      mul3[n3] = num;
      n3++;
    }
    else if(num%4 == 0){
      mul4[n4] = num;
      n4++;
    }
    else{
      semmul[n0] = num;
      n0++;
    }
  }

  //Printando os vetores que são multiplos de 3 
  printf("a)");
  for (i = 0; i < 20; i++)
  {
    if(mul3[i] != 0){ 
      printf("%d",mul3[i]);
      if(mul3[i+1] != 0){
        printf(",");
      }
    }
  }
  printf("\n");
  //printando os vetores que são multiplos de 4 
  printf("b)");
  for (i = 0; i < 20; i++)
  {
    if(mul4[i] != 0){ 
      printf("%d",mul4[i]);
      if(mul4[i+1] != 0){
          printf(",");
      }
    }
    
  }
  printf("\n");
  //Printando o vetor dos nuemros que não são multiplos de 3 e 4 
  printf("c)");
  for (i = 0; i < 20; i++)
  { 
    if(semmul[i] != 0){
      printf("%d",semmul[i]);
      if(semmul[i+1] !=0){
        printf(",");
      }
    }
    
  }

}