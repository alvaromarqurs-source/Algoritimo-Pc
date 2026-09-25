#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE,"");
    int qntd_diarias;
    char opcao;


    printf("Hopedagem Analia\n");
    printf("[S] Quarto simples\n");
    printf("[D] Quarto duplo\n");
    printf("[T] Quarto triplo\n");
    printf("Digite uma opção: ");
    scanf(" %c", &opcao);


    printf("Qual é a quantidades de diarías:  ");
    scanf("%d",&qntd_diarias);

    if (opcao == 's' || opcao == 'S'){

        printf("Total a pagar R$ %d",(qntd_diarias*300));
    }
    else if (opcao == 'd' || opcao == 'D'){

        printf("Total a pagar R$ %d",(qntd_diarias*450));
    }
    else if (opcao == 'T' || opcao == 'T'){

        printf("Total a pagar R$ %d",(qntd_diarias*600));
    }
    else {

        printf("opção invalida!!!");
    }






    return 0;
}
