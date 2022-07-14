#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char palavra1[] = {'I', 'M', 'D','\0'};
    char palavra2[] = "imd";

    char palavra3[100];
    scanf("%s",palavra3);
    palavra2[0] = 'c';
    palavra2[1] = '\0';
    printf("%s\n",palavra2);

    printf("Está é uma mensagem");
    return 0;

}