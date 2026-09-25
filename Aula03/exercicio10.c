#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()

{
    setlocale(LC_CTYPE,"");
    float vel_inicial,angulo_lanc,ang_radianos,alcance_h;

    printf("Qual a velocidade inicial (m/s): ");
    scanf("%f",&vel_inicial);

    printf("Qual o ângulo de lançamento em graus:");
    scanf("%f",&angulo_lanc);

    ang_radianos = angulo_lanc*(3.14/180);
    alcance_h = (pow(vel_inicial,2) + sin(2*ang_radianos)) /9.8;
    printf("O alcance horizontal estimado é %.2f metros",alcance_h);













    return 0;


 }
