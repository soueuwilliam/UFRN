#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define tam 10

int main(void){
    //declarando variaveis;
    int i = 0,num = 0;
    //Variaveis para armazenar as somas da media;
    float mediaari = 0, mediageo = 1, mediahar = 0;
    //Variaves para salva os erros
    float erromed = 0 , errogeo = 0, errohar = 0,soma;
    while (i<tam)
    {
        scanf("%d",&num);  
        mediaari += num;
        mediageo *= num;
        mediahar  = 1;
        soma+=(mediahar/num);
        i++;
    }
    mediaari = mediaari/tam;
    mediahar = tam/soma;
    mediageo = pow(mediageo,0.10);
    printf("Média aritmética é %.2f\n",mediaari);
    printf("Média harmônica é %.2f\n",mediahar);
    printf("Média geométrica é %.2f\n",mediageo);
    errohar = (mediahar - mediaari)/mediaari;
    errogeo = (mediageo - mediaari)/mediaari;
    erromed = (errohar + errogeo)/2;
    printf("Erro médio é %.2f",erromed);
    return 0;
}