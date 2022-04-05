#include <stdio.h>

int main(){
    //declarando variavel
    int binario[8] = {0};
    int decimal = 0,index = 7;
    int i;
   
    //recebendo entrada
    scanf("%d", &decimal);
    
    if(decimal<0 || decimal>255){
        printf("Número %d não suportado!!",decimal);
        return 0;
    }
    //calculo de binario
    while ( decimal!=0 )
    {
        binario[index] = decimal%2;
        decimal = decimal/2;
        index-=1;
        
    }
    for (i = 0 ; i <8;i++){
        printf("%d",binario[i]);
    }
    return 0;
}