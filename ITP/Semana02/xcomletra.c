#include <stdio.h>

int main(){
    int qtd,linha,coluna;
    char letra;
    scanf("%d %c",&qtd ,&letra);

    for(linha = 1;linha< qtd;linha++){
        for(coluna =1;coluna<qtd;coluna++){
            if((coluna == linha) || (coluna == qtd - linha)){
                printf("%c", letra);
            }
            else{
                printf(" ");
            }   
        }
        printf("\n");
    }
    return 0;
}