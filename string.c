#include <stdio.h>

int main(){
    char nome [10] = "Guilherme";

    //char letra = 'G';

    printf("%s\n", nome);

    //for(int cont = 0; cont < 9; cont++){
    for(int cont = 0; nome[cont] != '\0'; cont++){    
    printf("%c\n", nome[cont]);
    }

    char mensagem [20];

    printf("digite uma mensagem curta: ");
    //scanf("%s", mensagem);
    //scanf("%[^\n]", mensagem); //lê ate a primeira quebra de linha 
    //scanf("%20s", mensagem);
    scanf("%20[^\n]", mensagem);

    printf("%s\n", mensagem);

    return 0;
}