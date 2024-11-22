#include <stdio.h>
int main(){
    float nota;
    printf("Qual conceito sua nota se enquadra.\n\n");

    printf("Digite a sua nota?\n");
    scanf("%f",&nota);

    if(nota >= 9.0 ){
         printf("Sua nota tem conceito A.\n");

    }else if(nota >= 8.0 && nota < 9.0 ){
        printf("Sua nota tem conceito B.\n");

    }else if (nota >= 7.0 && nota < 8.0 ){
        printf("Sua nota tem conceito C.\n");

    }else if (nota >= 6.0 && nota < 7.0  ){
        printf("Sua nota tem conceito D.\n");

    }else if (nota >= 5.0 && nota < 6.0){
        printf("Sua nota tem conceito E.\n");

    }else{
         printf("Sua nota tem conceito F.\n");
    }

    return 0;
}