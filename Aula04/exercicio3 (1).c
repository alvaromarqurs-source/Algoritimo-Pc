#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float media,frequencia;

    printf("Digite sua Frequência: ");
    scanf("%f", &frequencia);

    printf("Digite sua média: ");
    scanf("%f",&media);

    if (frequencia < 75){

        printf("Reprovado por falta");
    }
    else if(media < 6){

        printf("Reprovado por nota");
    }
    else{
        printf("Você foi aprovado");
    }
    return 0;
}
