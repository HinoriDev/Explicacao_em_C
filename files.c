#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("teste.txt", "w"); //fopen = "file opean" = função / "w" = modulo escrita / "r" = modulo leitura
    
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "Olá Arquivo!!!\n");

    fclose(arquivo);
    
    return 0;
}