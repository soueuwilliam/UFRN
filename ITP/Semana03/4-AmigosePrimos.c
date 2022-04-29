#include<stdio.h>
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
//Função para somar os divisores
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
//Funções para testar se é amigos 
int testa_amigos(int num1 ,int num2){
    if(soma_divisores(num1) == num2 && soma_divisores(num2) == num1){
        return 0;
    }
    else{
        return 1;
    }
}
int teste_Primo(int Numero){
    int divisores = 1;
    int i = 0;
    for(i = 1 ;i<Numero+1;i++){
        if(Numero%i == 0){
            divisores++;
        }
    }
    //caso não for primo
    if(divisores>2){
        printf("O numero %d é nao primo!");
        return 0;
    }
    //caso for primo
    else{
        printf("O numero %d é primo!");
        return 1;
    }

}
int main(){
    int num1,num2;

    return 0;
}