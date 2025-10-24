//lf - long float (usado quando utiliza o variavel double)
#include <stdio.h>

double somar(double num_a, double num_b) {
    return num_a + num_b;
}

double subtrair(double num_a, double num_b){
    return num_a - num_b;
}

int main() {
    double num_1, num_2;
    int operadocao;
    double resultado;

    printf("Digite um número: ");
    scanf("%lf", &num_1);

    printf("Digite um número: ");
    scanf("%lf", &num_2);    

    return 0;
}