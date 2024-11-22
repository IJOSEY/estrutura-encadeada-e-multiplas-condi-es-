#include <stdio.h>
int main(){
int idade;
printf("***Testando condição encadeada.***\n\n");

printf("Digite a idade da pessoa.\n");
scanf("%d",&idade);

if (idade > 60)
{
   printf("Você tem %d anos é uma idoso.\n",idade);
}
else if (idade >= 18 && idade <= 60)
{
    printf ("Você tem %d  anos é um adulto.\n",idade);
}
else if ( idade >= 12 && idade <= 18)
{
    printf("Você tem %d anos é um adolecente .\n",idade);

} else {
    printf("Você tem %d anos é um criança.\n",idade);

}


return 0;
}
