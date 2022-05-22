#include <stdio.h>

#define tampal 50
#define qtdpal 20

void strsplit(char string[tampal], char caractere, char vetor[qtdpal][tampal], int tam) {
  for (int i = 0, l = 0, c = 0; string[i] != 0; i++) {
    if (string[i] != caractere && string[i] != '\n')
      vetor[l][c++] = string[i];
    else {
      l++;
      c = 0;
    }
  }
}

int main(void) {
  char string[50] = {0};
  char vetor[20][50] = {0};
  char caractere;
  fgets(string, 50, stdin);
  scanf("%c", &caractere);
  strsplit(string, caractere, vetor, tampal);
  for (int l = 0; l < qtdpal; l++) 
    if (vetor[l][0] != 0)
      printf("%s\n", vetor[l]);
  return 0;
}