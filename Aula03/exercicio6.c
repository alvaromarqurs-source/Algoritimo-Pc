#include<stdio.h>
#include<locale.h>
#include <math.h>
int main()

{
    setlocale(LC_CTYPE,"");
    float largura,comp,valor_caixas,area_total,valor_total,qnt_caixas;
    printf("Qual é a largura da área (em metros)? ");
    scanf("%f",&largura);

    printf("Qual é o comprimento da área em metros?  ");
    scanf("%f",&comp);

    printf("Qual é o valor de cada caixa? ");
    scanf("%f",&valor_caixas);

    area_total = comp * largura;
    qnt_caixas = area_total/2.5;
    valor_total = ceil(qnt_caixas)*valor_caixas;

    printf("Área total a ser revestida: %.2f m²\nQuantidade de caixas necessárias: %.0f\nCusto total da compra: %.2f",area_total,qnt_caixas,valor_total);




    return 0;


 }
