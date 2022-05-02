#include <stdio.h>

int main(){
    int A;
    int b[3] = {0};
    int c[3] = {0};
    int d[3] = {0};
    int i;
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    scanf("%d %d %d",&c[0],&c[1],&c[2]);
    scanf("%d %d %d",&d[0],&d[1],&d[2]);

    printf("A = [");
    for (i = 0; i < 3; i++)
    {
        printf("%d",(b[i] + c[i] - (5*d[i])));
        if(i<2){
            printf(",");
        }
    }
    printf("]");
    return 0;




}