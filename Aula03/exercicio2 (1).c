#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    int hora,minutos,total;
    printf("horas:");
    scanf("%d",&hora);

    printf("minutos:");
    scanf("%d",&minutos);

    total = (hora)*60 + minutos;
    printf("Ja se passaram: %d", total);
    scanf("%d",&total);




    return 0;
}
