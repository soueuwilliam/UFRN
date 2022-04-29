#include <stdio.h>

int Dentrooufora(float tx1,float ty1,float tx2, float ty2, float x1, float y1,float x2,float y2){
   
        //para caso a tela seha maior que o retangulo
        if(tx1<x1 && x1<tx2 && tx1<x2 && x2<tx2 && ty1<y1 && y1<ty2 && ty1<y2 && y2<ty2 ){
            printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n",tx1,ty1,tx2,ty2,x1,y1,x2,y2);
            return 1;
        }
        //para caso o retangulo for maior que a tela
        else if(tx1>x1 && tx1<x2 && tx2>x1 && tx2<x2 && ty1>y1 && ty1<y2 && ty2>y1 && ty2<y2 ){
            printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n",x1,y1,x2,y2,tx1,ty1,tx2,ty2);
            return 1;
        }
        else{
            printf("Nao posso afirmar!\n");
            return 1;
        }
 }
    
int main(){
    //tamanho do retangulo
    float x1,y1,x2,y2;
    //tamanhp da tela
    float tx1,ty1,tx2,ty2;
    //tamanho da tela 
    scanf("%f %f %f %f",&tx1,&ty1,&tx2,&ty2);
    do
    {
        //tamanho do retângulo
        scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
        //condiação de parada
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0){
            break;
        }
        else{
            Dentrooufora(tx1,ty1,tx2,ty2,x1,y1,x2,y2);
        }
    } while (Dentrooufora != 0);
    return 0;
}