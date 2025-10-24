#include <stdio.h>

int main() {
    int cont = 0;
    printf("=======WHILE=======\n");
    while(cont < 5 ){
        printf("%d\n", cont);
        //cont = cont + 1; 
        cont += 1;
   
    }

    printf("====DO...WHILE===\n");
    int cont2 = 0;
    do {
        printf("%d\n", cont2);
        //cont2 = cont2 +1;
        cont2++;
    }while(cont2 < 5 ); 

        printf("====FOR===\n");
        for(int cont3 = 0 ; cont3 < 5 ; cont3++) {
            printf("%d\n", cont3);
        }

    return 0;
}