#include<stdio.h>
#include<locale.h>

int main()
{
        setlocale(LC_CTYPE,"");
        int manha,tarde,soma_total;
        printf("Quantidade recebida pela manhã: ");
        scanf("%d",&manha);

        printf("Quantidade recebida pela tarde: ");
        scanf("%d", &tarde);

        soma_total = (manha+tarde);
        printf("Total de produtos  no dia: %d\n",soma_total);
        scanf("%d", &soma_total);

        return 0;



}
