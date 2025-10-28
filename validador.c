#include <stdio.h>

char* ler_cpf(){ //"*" significa um ponteiro, serve como endereço mas principalmente o tamanho do endereço
    static char valor[11]; //"static" faz com que garanta que nao seja alterado
    printf("Digite um número de CPF: ");
    scanf("%11s", valor);

    return valor;
}

int obter_digito_verificador(char* cpf, int ordem) {
    int multiplicador = (ordem == 1) ? 10 : 11; //um modelo utilizado quando o valor for ao contrario do criterio solicitado
    int soma = 0;
    int parada = ((ordem == 1) ? 8 : 9);

    for(int posicao = 0; posicao <= parada; posicao++) {
       //int resultado = cpf[posicao] * multiplicador;
       //soma += resultado;
       //multiplicador--;
       printf("%c\n", cpf[posicao]);
    }
    // int multiplicador; //uma segunda opção
    //if(ordem == 1) {
    //    multiplicador = 10;
    //} else {
    //    multiplicador = 11;

    return soma;
 }

int validar(char* cpf){
    return 0;
}

int main(){
    char* cpf = ler_cpf();

    int result = 

    return 0;
}