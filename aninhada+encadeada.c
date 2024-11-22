#include <stdio.h>
int main (){
    int numero;

    printf("Verificação se numero e impar ou par, negativo ou positivo.\n\n");

    printf("Digite um número:");
    scanf("%d",&numero);

    if(numero > 0){
        if(numero % 2 ==0){
            printf("Número é par.\n");
        }else {
            printf("Número é impar.\n");
        }
        printf("positivo.\n");
    }else if(numero == 0){
        printf("número igual a 0.\n");
    } else {
        printf("negativo!\n");
    }

    return 0;
}