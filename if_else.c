#include <stdio.h>

int main() {
    int numA,numB;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numA);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numB);

    printf("Números digitados: %d, %d\n", numA, numB);

    if(numA > numB) {
        printf("Maior número: %d\n", numA);
        printf("Menor número: %d\n", numB);
    } else if(numB > numA) {
        printf("Maior número: %d\n", numB);
        printf("Menor número: %d\n", numA);
    } else {
        printf("Os números são iguais\n");
    }

    float media = (numA + numB) / 2;
    
    printf("A média entre os números é: %f\n", media);

    return 0;
}