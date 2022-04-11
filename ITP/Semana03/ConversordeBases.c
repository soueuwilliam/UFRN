#include <stdio.h>

int Conversao(int value,int base){
    if(value == -1){
        printf("Programa encerrado !!");
        return 1;
    }
    else{
        int resul = 0;
        int temp = value;
        while (temp>0)
        {
            resul= (resul*10) + (temp%base);
            temp /= 2;
        }
        printf("Numero %d(10) na base (%d)= %d(%d)\n",value,base,resul,base);
        return 0; 
    }

}
int main(){
    int value,base;
    while (Conversao == 0)
    {
        scanf("%d %d",&value, &base);
        Conversao(value,base);
    }
    return 0;
}