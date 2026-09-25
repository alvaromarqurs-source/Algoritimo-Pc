#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float nota1,nota2,media;

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    media =(nota1+nota2)/2;
    if (media>=6){
        printf("Parabens, Você foi aprovado!!!Sua nota foi %.1f",media);
    }
    else if (media >=3.0){
        printf("Voce está de exame com média %.1f",media);
    }
    else {
        printf("Reprovado, Sua média foi %.1f",media);
        }
    return 0;
}
