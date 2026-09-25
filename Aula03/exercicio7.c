#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE,"");
    float n1,n2,n3,n4,media;

    printf("Digite o primeiro valor:");
    scanf("%f",&n1);

     printf("Digite o segundo valor:");
    scanf("%f",&n2);

     printf("Digite o terceiro valor:");
    scanf("%f",&n3);

     printf("Digite o quarto valor:");
    scanf("%f",&n4);

    media = (n1+n2+n3+n4)/4;
    printf("A média aritmética é %.2f",media);









    return 0;


 }
