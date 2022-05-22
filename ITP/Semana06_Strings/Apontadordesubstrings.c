#include <stdio.h>
#include <string.h>

#define tam 40

void substr(char str1[], char str2[], int posicao, int tamanho) {
  for (int i1 = posicao, i2 = 0; i1 < (posicao+tamanho); i1++, i2++)
    str2[i2] = str1[i1];
  str2[tamanho] = 0;
}

int main(void) {
  char string[tam];
  char substring[tam];
  char stranalise[tam];
  int posicoes[10] = {0};
  fgets(substring, tam, stdin);
  // Converte tudo pra minusculas em substring
  for (int i = 0; i < strlen(substring); i++)
    substring[i] = tolower(substring[i]);
  fgets(string, tam, stdin);
  // Converte tudo pra minusculas em string
  for (int i = 0; i < strlen(string); i++)
    string[i] = tolower(string[i]);
  
  substring[strlen(substring)-1] = 0;
  int tamsub = strlen(substring);
  string[strlen(string)-1] = 0;
  int conta = 0;
  for (int i = 0, p = 0; i < tam - tamsub; i++) {
    substr(string, stranalise, i, tamsub);
    if (strcmp(substring, stranalise) == 0) {
      posicoes[p++] = i;
      conta++;
    }
  }
  printf("Repetições: %d\n", conta);
  if (conta > 0)
    printf("Posições: ");
  for (int i = 0; i < conta; i++)
    printf("%d ", posicoes[i]);
  printf("\n");
  return 0;
}