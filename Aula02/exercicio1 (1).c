#include<stdio.h>
#include<locale.h>
# define PI 3.14
int main()
{
    setlocale(LC_CTYPE,"");

    float raio,area;
    printf("Qual a médidada do raio(em cm)?  ");
    scanf("%f", &raio);
    area = 2*PI*raio;
    printf("o perímetro da circunferência é %f", area);
    return 0;

}
