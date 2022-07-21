#include <stdio.h>
#include <string.h>
#include <ctype.h> //para usar a função tolower();
#include <time.h> //gerar numeros aleatorios


void forca(int estado){
  if(estado==0){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n____________");
  printf("\n////////////\n\n");
  }
  else if(estado==1){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|        0");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n____________");
  printf("\n////////////\n\n");
  }
  else if(estado==2){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|        0");
  printf("\n|        |");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n____________");
  printf("\n////////////\n\n");
  }
  else if(estado==3){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|        0");
  printf("\n|       /|");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n____________");
  printf("\n////////////\n\n");
  }
  else if(estado==4){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|        0");
  printf("\n|       /|\\");
  printf("\n|");
  printf("\n|");
  printf("\n|");
  printf("\n____________");
  printf("\n////////////\n\n");
  }
  else if(estado==5){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|        0");
  printf("\n|       /|\\");
  printf("\n|       /");
  printf("\n|");
  printf("\n|");  
  printf("\n____________");
  printf("\n////////////\n\n");
  }
  else if(estado==6){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|        0");
  printf("\n|       /|\\");
  printf("\n|       / \\");
  printf("\n|");
  printf("\n| GAME OVER!");
  printf("\n____________");
  printf("\n////////////\n\n");
  }
  else if(estado==7){
  printf("\n----------");
  printf("\n|        |");
  printf("\n|");
  printf("\n|");
  printf("\n|       \\0");
  printf("\n|        |\\");
  printf("\n|       / \\");
  printf("\n____________");
  printf("\n////////////\n\n");
  }
}

int main(void) {

  //Para gerar números aleatórios
  srand((unsigned)time(NULL));
  
  char p_sec[100];//palavra secreta
  printf("---------------------\n");
  printf("      JOGADOR 1\n");
  printf("---------------------\n\n");
  printf("Palavra secreta: ");
  fgets(p_sec, 100, stdin);
  //formata a palava secreta em maiusculo
  for(int i = 0; i<strlen(p_sec); i++){
    p_sec[i]=toupper(p_sec[i]);
  }
  system("clear"); //limpar tela
    
  //retira o ultimo caracter de p_sec que esta a mais devido a captura ser com fgets()
  p_sec[strlen(p_sec)-1]='\0';
  char p_tela[100];//palavra para tela
  strcpy(p_tela, p_sec);//copia de p_sec 
  //substitui letras por '_'
  for(int i=0;i<strlen(p_tela);i++){
    p_tela[i]='_';
  }
  
  int erros = 0;
  int chances = 6;
  while(1){
    //imprimir a forca
    system("clear"); //limpar tela
    printf("---------------------\n");
    printf("      JOGADOR 2\n");
    printf("---------------------\n\n");
    printf("A palavra secreta tem %lu caracteres.\n", strlen(p_sec));
    forca(erros);
    //imprimir os underline/underscores '_' para cada letra da palavra secreta, ou seja, imprimir p_tela
    printf("\nPalavra secreta: ");
    for(int i=0;i<strlen(p_tela);i++){
      printf("%c ", p_tela[i]);
    }
    printf("\n\nVocê tem: %i chance(s)", chances);
    //recebe a letra
    printf("\nLetra: ");
    char letra;
    scanf(" %c", &letra);//o espaço antes do % é por conta do repl.it usado via web...
    //se letra correta atualiza palavra na tela 
    //verifica se a letra esta correta
    int sera_que_errou=1;//1=sim 0=nao
    for(int i=0;i<strlen(p_tela); i++){
      if(toupper(letra)==toupper(p_sec[i])){//certo
        p_tela[i]=toupper(letra);
        sera_que_errou=0;
      } 
    }
    //senao, incrementa erros
    if(sera_que_errou==1){
      erros++;
      chances--;
    }
    //verifica se o jogo acabou
    //verifica se ganhou
    //verifica se p_sec é igual a p_tela
    if(strcmp(p_tela,p_sec)==0){
      //ENTAO ganhou
      system("clear"); //limpar tela
      printf("---------------------\n");
      printf("      JOGADOR 2\n");
      printf("---------------------\n\n");
      printf("VOCÊ VENCEU!!! PARABÉNS!!!\n");
      forca(7);
      printf("\nPalavra secreta: ");
      for(int i=0;i<strlen(p_tela);i++){
        printf("%c ", p_tela[i]);
      }
      break;
    }
    //verifica se perdeu
    if(erros==6){
      //perdeu
      system("clear"); //limpar tela
      printf("---------------------\n");
      printf("      JOGADOR 2\n");
      printf("---------------------\n\n");
      printf("VOCÊ PERDEU!!! :(\n");
      forca(erros);
      printf("A palavra secreta era: %s\n", p_sec);
      break;
    }
  }

  return 0;
}