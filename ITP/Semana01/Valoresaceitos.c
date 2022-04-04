#include <stdio.h>

int main(){
    //declarando variaveis
    int a,b,c,d;
    //pegando valores
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(b>c && d>a && c + d > a + b && (c> 0 && d> 0))
    {
        printf("Valores Aceitos\n");
    }
    else{
        printf("Valores Não Aceitos condições violadas:");
        if(!(b>c)){
            printf(" 1");
        }
        if(!(d>a)){
            printf(" 2");
        }
        if(!(c + d > a + b)){
            printf(" 3");
        }
        if(!(c> 0 && d> 0)){
            printf(" 4");
        }
    }
    return 0;
}