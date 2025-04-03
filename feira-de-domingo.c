#include <stdio.h>
void ordena_frutas(char** frutas) {

}

void printa_frutas(char** frutas, int qtd) {
    printf("--------------- FRUTAS ------------\n");
    for (int i = 0; i < qtd; i++) {
        printf("%s\n",frutas[i]);
    }
    printf("-----------------------------------\n");
} 

int main() {
    int qtd; // define um inteiro que lê a quantidade
    const int MAX_TAMANHO_STRING = 20; // o tamanho máximo da string de frutas, 20 caracteres
    printf("Digite a quantidade de frutas a serem lidas \n");
    scanf("%d", &qtd); // lê a quantidade p/ alocação dinâmica
    char **frutas = (char**)malloc(qtd * sizeof(char*));
    printf("Digite as frutas: \n");
    for (int i = 0; i < qtd; i++) {
        frutas[i] = (char*)malloc(MAX_TAMANHO_STRING * sizeof(char));
        scanf("%s", frutas[i]);
    }
    printa_frutas(frutas, qtd);
    return 0;
}