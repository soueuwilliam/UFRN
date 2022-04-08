#include <stdio.h>
#include <math.h>

#define tam 10
int main(void){
    //declarando variaveis;
    int i = 0,num = 0;
    //Variaveis para armazenar as somas da media;
    float mediaari = 0, mediageo = 1, mediahar = 0;
    while (i<tam)
    {
        scanf("%d",&num);  
        mediaari += num;
        mediageo *= num;
        mediahar += (1/num);
        i++;
    }
    printf("Média aritmética é %.2f\n",mediaari/tam);
    printf("Média harmônica é %.2f\n",tam/mediahar);
    printf("Média geométrica é %.2lf\n", pow(mediageo,0.10));
    
    return 0;
}