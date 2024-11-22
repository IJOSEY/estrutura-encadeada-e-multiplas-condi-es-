#include <stdio.h>
int main(){
    int idade;
    float renda;

    printf("***Verifique se você está apto ao desconto especial.****\n\n");

    printf("Informe a sua idade:");
    scanf("%d",&idade);

    printf("Informe a sua renda mensal:");
    scanf("%f",&renda);
    
    if(idade >= 60 || idade <= 18) {
        if(renda < 2000){
         printf("Tem direito ao desconto.\n");
        }else{
         printf("você não tem direito ao desconto devido a renda.\n");
        }
    }else{
        printf("Você não atende aos critérios.\n");
    }
    //maior de 60 anos ou menor de 18 
    //ter renda mensal abaixo de R$2.000
    
    return 0;
}