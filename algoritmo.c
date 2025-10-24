//Algoritmo que leia idade até que seja informado um valor negativo e classifica
//como " criança" (0-12 anos), "Adolecente" (13-17 anos), "Adulto" (18-59 anos), ou "Idoso" (60+ anos).
#include <stdio.h>
int main (){
    int idade = 0;
    do{

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("idade %d\n", idade);

        if(idade <= 12){
            printf("Criança\n");
        } else if(idade <= 17){
            printf("Adolecente\n");
        } else if(idade <= 59){
            printf("Adulto\n");
        }else {
            printf("Idoso\n");
        }
 } while(idade >= 0);

    return 0;
}