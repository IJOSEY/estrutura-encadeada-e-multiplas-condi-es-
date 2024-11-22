#include <stdio.h>
int main(){
    float nota;
    printf("Qual conceito sua nota se enquadra.\n\n");

    printf("Digite a sua nota?\n");
    scanf("%f",&nota);

    if(nota >= 9.0 ){
         printf("Sua nota tem conceito A");

    }else if(nota >= 8.0 && nota < 9.0 ){
        printf("Sua nota tem conceito B");

    }else if (nota >= 7.0 && nota < 8.0 ){
        printf("Sua nota tem conceito C");

    }else if (nota >= 6.0 && nota < 7.0  ){
        printf("Sua nota tem conceito D");

    }else{
        printf("Sua nota tem conceito E");

    }

    return 0;
}