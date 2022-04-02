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
            //para transformar em feren
            if(temperaturaconveter == 'F'){
                printf("%.2f F\n",(num*1.8) + 32);
            }else{
                printf("%.2f k\n",num + 273.15);
            }
            break;
            

    }
    return 0;
}