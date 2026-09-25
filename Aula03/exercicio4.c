#include<stdio.h>
#include<locale.h>

int main()

{
    setlocale(LC_CTYPE,"");
    float poten_equip,hora_func,consumo;
    printf("Qual a potencia do aparelho(w)? ");
    scanf("%d", &poten_equip);
    printf("Horas de uso diária: ");
    scanf("%d",hora_func);
    consumo = (float)(poten_equip*hora_func*30)/100;
    printf( "Cosnumo mensal: %.2f",consumo);

}
