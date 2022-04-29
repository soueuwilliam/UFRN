#include <stdio.h>

int main(){
  int mul3[20] = {0};
  int mul4[20] = {0};
  int semmul[20] = {0};
  int i = 0;
  int j =0,k = 0,l =0;
  int num;
  for(i = 0; i<20;i++){
    scanf("%d",&num);
    if(num%3 == 0){
      mul3[j] = num;
      j++;
    }
    else if(num%4 == 0){
      if(num%4 == 0 && num%3 ==0){
        mul3[j] = num;
        j++;
        mul4[k] = num;
      
      }
      mul4[k] = num;
      k++;
    }
    else{
      semmul[l] = num;
      l++;
    }
    
  }
  for(int i = 0; i<j;i++){
    printf("%d,",mul3[i]);
  }
  printf("\n");
  for(int i = 0; i<k;i++){
    printf("%d,",mul4[i]);
  }
  printf("\n");
  for( int i = 0; i<l;i++){
    printf("%d,",semmul[i]);
  }
}