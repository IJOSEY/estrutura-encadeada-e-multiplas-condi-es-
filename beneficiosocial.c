#include <stdio.h>

int main() {
int idade, dependentes;
float renda;

printf("Verificação de benefício.\n\n");

printf("Informe a sua idade:");
scanf("%d",&idade);

printf("Quanto depedentes possui:");
scanf("%d",&dependentes);

printf("Iforme a sua renda:");
scanf("%f",&renda);
if(idade >= 18 && idade < 65 ){
    if(renda < 3000 ){
        if(dependentes > 2 ){
            printf("Você tem direito ao benfício!!.\n");

        }else {
            printf("Numero de dependentes não atende ao critério.\n");
        }
    } else{
        printf("Renda não atende ao critério.\n");
    }
} else{
    printf("Idade não atende aos critérios.\n");
}

return 0;
}