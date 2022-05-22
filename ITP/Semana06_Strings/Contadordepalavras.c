#include <stdio.h>

#define qtdpal 20
#define tampal 20

// Retorna tamanho de txt (strlen)
int tamstr(char txt[]) {
    int tam;
    for (tam = 0; txt[tam] != 0; tam++);
    return tam;
}

// Retorna 1 se str1 == str2, 0 em caso contrário (strcmp)
int compstr(char str1[tampal], char str2[tampal]) {
    int match = 1;
    if (tamstr(str1) != tamstr(str2))
        match = 0;
    else
        for (int i = 0; i < tamstr(str1); i++)
            if (str1[i] != str2[i]) {
                match = 0;
                break;
            }
    return match;
}

// Copia o conteúdo de strsrc em strdst (strcpy)
void copystr(char strsrc[tampal], char strdst[tampal]) {
    int i;
    for (i = 0; i <= tamstr(strsrc); i++)
        strdst[i] = strsrc[i];
}

// Adiciona word em words caso ela não exista, incrementando a contagem em caso contrário
void adicionaPalavra(char word[tampal], char words[qtdpal][tampal], int count[qtdpal]) {
    int p, achou;
    for (p = 0, achou = 0; words[p][0] != 0 && p < qtdpal && !achou; p++)
        if (compstr(word, words[p])) {
            // printf("Achou '%s' na posição %d de palavras\n", word, p);
            count[p]++;
            achou = 1;
        }
    if (!achou && p < qtdpal) {
        // printf("Adicionando '%s' na posição %d de palavras\n", word, p);
        copystr(word, words[p]);
        count[p] = 1;
    }
}

// Detecta todas as palavras em txt, chamando adicionaPalavra para acrescentá-las em words
void buscaPalavras(char txt[], char words[qtdpal][tampal], int count[qtdpal]) {
    char word[tampal] = {0};
    int elemento = 0;
    for (int i = 0; i <= tamstr(txt); i++) {
        if (txt[i] != ' ' && txt[i] != 0)
            word[elemento++] = txt[i];
        else {
            if (i > 0 && txt[i-1] != ' ') {
                // printf("Encontrou palavra '%s' \n", word);
                adicionaPalavra(word, words, count);
                // zera word
                for (int j = 0; j < tampal; j++)
                    word[j] = 0;
                elemento = 0;
            }
        }
    }
}

int main(void) {
    char texto[256] = {0};                  // Texto a ser digitado pelo usuário
    char palavras[qtdpal][tampal] = {0};    // Dicionário de palavras
    int contapalavras[qtdpal] = {0};        // Contador da ocorrência das palavras
    scanf("%[^\n]s", texto);
    // printf("%d caracteres: %s\n", tamstr(texto), texto);
    buscaPalavras(texto, palavras, contapalavras);
    // printf(">>>> Imprimindo dicionário:\n");
    for (int p = 0; p < qtdpal; p++) {
        if (palavras[p][0] != 0)
            printf("%d: %s\n", contapalavras[p], palavras[p]);
    }
    return 0;
}