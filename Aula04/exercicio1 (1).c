#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float a,b,c,delta,x1,x2;
    printf("Digite o valor de a: ");
    scanf("%f",&a);

    printf("Digite o valor de b: ");
    scanf("%f",&b);

    printf("Digite o valor de c: ");
    scanf("%f",&c);

    delta = pow(b,2) - 4 * a * c;
    if (delta >=0){

    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("Raízes da Equação:");
    printf("\nx1 = %.1f", x1);
    printf("\nx2 = %.1f", x2);

    }
    else {
        printf("Não existem raízes reais!!!!");
    }

    return 0;
}
