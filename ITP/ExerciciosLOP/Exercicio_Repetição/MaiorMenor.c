#include<stdio.h>

int main(){
    float maior= -999999999 , menor=999999999;
    float num;
    int i;
    for(i = 0;i<15;i++){
        scanf("%f",&num);
        if(num > maior){
            maior = num;
        }else{
            menor = num;
        }
    }
    printf("Maior: %.0f\nMenor: %.0f", maior, menor);
    return 0;
}