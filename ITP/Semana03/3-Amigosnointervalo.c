#include <stdio.h>

//Função pra saber se um numero é divisor do outro
int testa_divisor(int numero,int divisor){
    //caso seja verdadeiro
    if(numero%divisor == 0){
        return 0;
    }
    //caso seja falso
    else{
        return 1;
    }
}
int soma_divisores(int value){
   int i =1;
   int soma = 0;
   for(i; i < value ;i++){
            if(testa_divisor(value,i) == 0){
                soma+=i;     
            }
        }
    return soma;
}
int main(){
    //declaração de variaveis
    int num1 , num2;
    int i = 1;

    //Entrada de valores
    scanf("%d",&num1);
    printf("%d",soma_divisores(num1));

    return 0;
}