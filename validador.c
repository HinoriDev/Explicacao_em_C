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
       int resultado =  (cpf[posicao] - '0') * multiplicador;
       soma += resultado;
       multiplicador--;

       //soma += (cpf[posicao] - '0') * multiplicador--;
       //printf("%d\n", (cpf[posicao] - '0')); //'' considera como caracter 
       //printf("%d\n", (cpf[posicao] - 48));
    // int multiplicador; //uma segunda opção
    //if(ordem == 1) {
    //    multiplicador = 10;
    //} else {
    //    multiplicador = 11;
    }

    int resto = soma % 11;
    if(resto < 2 ) {
        return 0;
    }


    return 11 - resto;
 }
                                                                         
int validar(char* cpf){
    int dv = obter_digito_verificador(cpf, 1);
    if(dv != (cpf[9] - '0')){
        return 1;
    }else {
        dv = obter_digito_verificador(cpf, 2);
        if(dv != (cpf[10] - '0')){
            return 1;
        }
    }
    return 0;
}

int main(){
    char* cpf = ler_cpf();

    if(validar(cpf) == 1){
        printf("CPF Inválido\n");
    }else {
        printf("CPF Válido\n");
    }
    //int result = obter_digito_verificador(cpf, 1);

    //printf("%d", result);

    return 0;
}