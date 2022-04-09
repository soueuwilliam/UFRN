#include <stdio.h>

int main(){
    int num,aux = 0,teste;
    scanf("%d",&num);
    while (num%10 != 0)
    {
        printf("%d\n",num);
        aux = aux + (num/10);
        num /= 10;    
    }
    printf("\naux :%d",aux);
    return 0;
}