#include <stdio.h>


int main(){
    //Declarando variáveis
    float n1,n2,n3;
    float p1,p2,p3;
    float media;
    //pedindo valores de notas e pesos
    scanf("%f , %f", &n1, &p1);
    scanf("%f , %f", &n2, &p2);
    scanf("%f , %f", &n3, &p3);
    media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    //caso o aluno seja reprovado direto
    if(media<3){
        printf("O aluno foi REPROVADO com média %.2f\n",media);
    }
    //caso o aluno fique em recuperaçãop
    else if (media > 3 && media < 7)
    {
        printf("O aluno ficou em RECUPERAÇÃO com média %.2f precisando de %.2f\n",media,10 - media);
    }
    //caso o aluno seja aprovado
    else{
        printf("O aluno foi APROVADO com a média %.2f\n",media);
    }
    return 0;
}