#include <stdio.h>

void printar_matriz(char matriz[7][7]){
  for(int i = 0; i < 7; i++){
    for(int j = 0; j < 7; j++){
      printf("%c", matriz[i][j]);
    }
    printf("\n");
  }
    return;
}

void transformar(char matriz[7][7], int atual[], int to[]){

    //linhas
    if(atual[1] > to[1]){
      for(int i = atual[1]; i >= to[1]; i--){
        matriz[atual[0]][i] = '#';
      }      
    }else{
      for(int i = atual[1]; i <= to[1]; i++){
        matriz[atual[0]][i] = '#';
      }
    }
    //colunas
    if(to[0] < atual[0]){
      for(int i = atual[0]; i >= to[0]; i--){
        matriz[i][atual[1]] = '#';
      }      
    }else{
      for(int i = atual[0]; i <= to[0]; i++){
        matriz[i][atual[1]] = '#';
      }
    }
    atual[0] = to[0];
    atual[1] = to[1];
  return;
}

void func1(char matriz[7][7]){
  for(int i = 0; i < 7; i++){
    for(int j = 0; j < 7; j++){
      matriz[i][j] = '_';
    }
  }
  return;
}


int main(void) {
    char matriz[7][7],on = {'#'};
    int from[2], to[2], atual[2], flag = 0;
    
    func1(matriz);
    scanf("%d %d", &from[0], &from[1]);
    atual[0] = from[0];
    atual[1] = from[1];

    do{
        scanf("%d %d", &to[0], &to[1]);
        
        if(to[0] == -1 && to[1] == -1){
        flag++;
        printar_matriz(matriz);
        return 0;
        }
            
    transformar(matriz, atual, to);
    
    }while(flag == 0); 

    return 0;
}



