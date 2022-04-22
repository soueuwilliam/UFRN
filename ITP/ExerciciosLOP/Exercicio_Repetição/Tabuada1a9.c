#include <stdio.h>


int tabuada(){
    int i = 0,j = 0;
    for(i = 1;i<10;i++){
        for(j = 1;j<11;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
}
int main(){
    tabuada();
    return 0;
}