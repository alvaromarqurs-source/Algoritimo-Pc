#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE,"");

     float n1,n2,n3,soma,media;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

     printf("Digite a segunda nota:");
    scanf("%f",&n2);

     printf("Digite a terceiro nota:");
    scanf("%f",&n3);


    media = (n1*1+n2*2+n3*4)/7;
    printf("A média ponderada é %.2f",media);











    return 0;


 }
