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
    
int main(){
    //declaração de Variavel
    int intervaloAini,intervaloAfinal,intervaloBini,intervaloBfinal;
    int Temamigos = 0;
    int i,j;
    //entradas de valores
    scanf("%d %d",&intervaloAini,&intervaloAfinal);
    scanf("%d %d",&intervaloBini,&intervaloBfinal);
    //teste no intervalo
    for(i = intervaloAini; i <= intervaloAfinal; i++){
        for (j = intervaloBini; j <=intervaloBfinal; j++){
            if (testa_amigos(i,j) == 0 && i != j)
            {
                printf("O %d possui um amigo!\n",i);
                Temamigos++;
            }        
        }    
    }
    if(Temamigos == 0){
        printf("Os intervalos nao apresentam amigos!\n");
    }
    return 0;
}