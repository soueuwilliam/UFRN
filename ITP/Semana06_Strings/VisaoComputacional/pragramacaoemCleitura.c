#include <stdio.h>

int main(){
    int vet[4] = {1,2,1,4};
    int i ,j,z;
    for(i = 0;i<4;i++){
        for(j = i+1;j<4;j++){
            if(vet[i] == vet[j]){
                vet[j] = vet[j+1];
            }
        }
    }
    for(z = 0;z<4;z++){
        printf("%d",&vet[z]);
    }

    return 0;
}