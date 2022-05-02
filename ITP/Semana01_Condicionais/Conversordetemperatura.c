#include <stdio.h>

int main(){
    //valor da temperatura
    float num;
    //valores atual,e serem convertido
    char temperaturaatual, temperaturaconveter;
    scanf("%f %c > %c", &num, &temperaturaatual, &temperaturaconveter);
    switch (temperaturaatual) {
        //caso a temperatura atual seja celsius 
        case 'C':
            //para transformar em fahrenheit
            if(temperaturaconveter == 'F'){
                printf("%.2f F\n",(num*1.8) + 32);
              
            }
              
            //Para transformar em kelvin 
            else{
                printf("%.2f k\n",num + 273.15);
              
            }
        break;
        //caso o valor atual ofr fahrenheit    
        case 'F':
            //para trasformar em celsius
            if(temperaturaconveter == 'C'){
              printf("%.2f C\n",(num - 32)/1.8);
              
            }
            //Para transformar em kelvim
            else{
              printf("%.2f K\n",((num - 32)/1.8)+273.15);
              
            }
        break;
        //Caso o valor atual for kelvin
        case 'K':
          //para transformar em celsius
          if(temperaturaconveter == 'C'){
            printf("%.2f C\n",num - 273.15);
          }
          else{
            printf("%.2f F\n", 1.8*num - (523,67));
          }
        break;
    }
    return 0;
}