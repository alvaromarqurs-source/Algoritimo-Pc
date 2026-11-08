
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    const char *meses[] = {
        "jan", "fev", "mar", "abr", "mai", "jun",
        "jul", "ago", "set", "out", "nov", "dez"
    };

    const char *operadoras[] = {"Vivo", "Claro", "TIM"};

    int vendas[3][12] = {
        {120, 135, 150, 140, 160, 175, 180, 170, 165, 190, 200, 210},
        {110, 125, 145, 150, 155, 160, 170, 180, 175, 185, 195, 205},
        {100, 115, 130, 125, 140, 150, 160, 155, 170, 175, 185, 190}
    };

    int totalGeral = 0;
    int totalOperadora[3] = {0, 0, 0};
    int totalMes[12] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 12; j++) {
            totalOperadora[i] += vendas[i][j];
            totalMes[j] += vendas[i][j];
            totalGeral += vendas[i][j];
        }
    }


    int mediaGeral = (totalGeral + 36 - 1) / 36;

    int maiorOperadora = 0;

    for (int i = 1; i < 3; i++) {
        if (totalOperadora[i] > totalOperadora[maiorOperadora]) {
            maiorOperadora = i;
        }
    }

    int maiorMes = 0;

    for (int j = 1; j < 12; j++) {
        if (totalMes[j] > totalMes[maiorMes]) {
            maiorMes = j;
        }
    }


    printf("RELATORIO ANUAL DE VENDAS\n\n");

    printf("Media mensal geral: %d chips\n\n", mediaGeral);

    for (int i = 0; i < 3; i++) {
        int media = (totalOperadora[i] + 12 - 1) / 12;

        printf("Media da %s: %d chips\n",
               operadoras[i], media);
    }

    int mediaMaiorMes = (totalMes[maiorMes] + 3 - 1) / 3;

    printf("\nMes com maior media de vendas: %s - %d chips\n",
           meses[maiorMes], mediaMaiorMes);

    printf("Total do ano da operadora com maior venda: %s - %d chips\n",
           operadoras[maiorOperadora],
           totalOperadora[maiorOperadora]);

    return 0;
}
