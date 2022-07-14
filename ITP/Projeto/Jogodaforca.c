#include <stdio.h>
#include <string.h>



void forca(int estado){

    switch (estado)
    {
    case 0:
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-------------------\n");
        break;
    case 1:
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 0");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-------------------\n");
        break;
    case 2:
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 0");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-------------------\n");
        break;
    case 3:
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 0");
        printf("\n|                /|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-------------------\n");
        break;
    case 4:
        printf("\n-------------------\n");
        printf("\n|                 |");
        printf("\n|                 0");
        printf("\n|                /|\\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-------------------\n");
        break;
    case 5:
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 0");
        printf("\n|                /|\\");
        printf("\n|                /");
        printf("\n|");
        printf("\n|");
        printf("\n-------------------\n");
        break;
    case 6:
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 0");
        printf("\n|                /|\\");
        printf("\n|                / \\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n Perdeu o game|");
        printf("\n-------------------\n");
        break;
    }
} 

void limpatela(){
    system("cls");
}


int main(){

    int erros = 0;
    char p_sec[100];
    char p_tela[100];



    printf("JOGADOR 1:\n");
    printf("Palavra secreta:\n");
    fgets(p_sec,99,stdin);
    printf("A palavra Secreta e: %s ",p_sec);
    printf("A palavra tem %i caracteres", strlen(p_sec) - 1);
    


    strcpy(p_tela,p_sec);

    p_tela[strlen(p_tela) - 1] = '\n';

    int i = 0;
    
    for(i =0;i< strlen(p_tela)-1;i++){
        p_tela[i] = '_';
    }


   char letra;
    

 


    while (1)
    {
        limpatela();
        //Imprime a forca
        forca(erros);

        //Imprimir os underlines para cada letra da palavra
        printf("Adivinhe: ");
        for(i = 0;i<strlen(p_tela);i++){
            printf("%c ",p_tela[i]);
        }

        //recebe a letra
        printf("\nLetra: ");
        char letra;
        scanf("%c", &letra);

        int sera_que_errou = 1; //0 - Não errou 1 - errou


        //Se a letra correta atualiza palavra na tela
        for(i = 0;i<strlen(p_tela);i++){
            if(letra == p_sec[i]){
                p_tela[i] = letra;
                sera_que_errou = 0;
            }
            
        }
        
        //verifica se o jogador errou a palavra
        if(sera_que_errou == 1){
                erros++;
        }

        //verifica se ganhou
        if(strcmp(p_tela,p_sec) == 0){
            printf("ganhou");
            break;
        }
        
        //verifica se o jogo acabou
        //verifica se perdeu
        if(erros == 6){
             forca(erros);
            break;
        } 
    }
    return 0;
}