#include <stdio.h>
int Conversao(int value,int base){
        int resul = 0;
        int temp = value;
        int mul = 1;
        while (temp>0)
        {
            resul= resul + (temp%base)*mul;
            mul = mul*10;
            temp /= base;
        }
        printf("Numero %d(10) na base %d = %d(%d)\n",value,base,resul,base);
        return 0; 
}

int main(){
    int value,base;
    do
    {
        scanf("%d",&value);
        if(value == -1){
            printf("Programa Encerrado!");
            break;
        }
        scanf("%d",&base);
        Conversao(value,base);
    
        
    } while (value != -1);
    
    return 0;
}