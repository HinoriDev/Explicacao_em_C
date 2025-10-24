//vetor é uma variavel que armazena um quantidade de dados do mesmot tipo, sendo o 0 como priemiro.
#include <stdio.h>
int main(){
    int  valores[4];
    int aux;

    for(int cont = 0; cont < 4; cont++){
    printf("digite um valor inteiro: ");
    scanf("%d", &valores[cont]);
}

    for(int cont = 0; cont < 4; cont++){
        if(valores[cont] > valores[cont + 1]){
            aux = valores[cont];
            valores[cont] = valores[cont + 1];
            valores[cont + 1 ] = aux;
            cont = -1;
        }
    }

    printf("valores ordenados: ");
    for (int cont = 0; cont < 4; cont++){
        printf("%d, ", valores[cont]);
    }
    printf("\n");

return 0;
}