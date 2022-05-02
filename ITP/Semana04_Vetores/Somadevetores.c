#include <stdio.h>

int main(){
    int Tam = 0;
    scanf("%d", &Tam);

    int vetorA[Tam];
    int vetorB[Tam];
    int vetorsoma[Tam];
    int i,j,z;
    //Caso o tamanho seja maior que 
    if (Tam>10)
    {
      printf("Muitos elementos");
      return 0;
    }

    else
    {
      //Entradas de valores 
    for (i = 0; i<Tam; i++)
    {
      scanf("%d",&vetorA[i]);
    }
    for (j =0; j<Tam; j++){
      scanf("%d",&vetorB[j]);
    }
    for (z = 0; z< Tam; z++)
    {
      vetorsoma[z] = vetorA[z] + vetorB[z];
      printf("%d ",vetorsoma[z]);
    }
    return 0;
    }

}