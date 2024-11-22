#include <stdio.h>
int main(){
int idade;
printf("***Testando condição encadeada.***\n\n");

printf("Digite a idade da pessoa.\n");
scanf("%d",&idade);

if (idade < 12)
{
   printf("Você tem %d anos é uma criança.\n",idade);
}
else if (idade >= 12 && idade <= 18)
{
    printf ("Você tem %d  anos é um adolescente.\n",idade);
}
else if ( idade >= 18 && idade <= 60)
{
    printf("Você tem %d anos é um adulto.\n",idade);

} else if (idade < 60 ){
    printf("Você tem %d anos é um idoso.\n",idade);

}


return 0;
}
