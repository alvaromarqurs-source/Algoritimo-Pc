#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE,"");
    printf("Qual o comprimento do jardim(m)?  ")
    float comrimento,largura;
    scanf("%f", &comrimento);
    scanf("%f",&largura);
    printf("Qual a largura do jardim(m)? ");
    perimetro = 2*(comrimento+largura);
    area= comrimento*largura;
    printf("perímetro do jardim:%f",perimetro)
    printf("area do jardim:%f",area)



}
