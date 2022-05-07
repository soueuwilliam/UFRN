#include <stdio.h>

void intecalacao(int tamA,int tamB, int vetorA[tamA],int vetorB[tamB]){
    int i;
    printf("Resultado: ");
    for (i = 0; i < tamA + tamB; i++)
    {
        if(i < tamA){
            printf("%d ", vetorA[i]);
        }
         if(i < tamB){
            printf("%d ", vetorB[i]);
        }
    }
}

int main(){
    int i;
    //Declaração do tamanho do vetor A
    int tama;
    //Entrado do tamanho de vetorA
    scanf("%d", &tama);
    //Declarção do vetor
    int a[tama];
    for(i = 0;i<tama;i++){
        scanf("%d",&a[i]);
    }

    //Declaração do tamanho do vetor B
    int tamb;
    //Entrado do tamanho de vetorB
    scanf("%d", &tamb);
    //Declarção do vetor
    int b[tamb];
    for(i = 0;i<tamb;i++){
        scanf("%d",&b[i]);
    }

    intecalacao(tama,tamb,a,b);
    return 0;
}