#include<stdio.h>
#include<locale.h>
#define TAM 8

int main()
{
    setlocale(LC_CTYPE,"");
    int i,contador;
    float soma=0,media,acima_da_media,valor[TAM];

    for(i=0;i<TAM;i++){
        printf("Digite o salário do funcionário %d: ",(i+1));
        scanf("%f", &valor[i]);
        soma+= valor[i];
    }
    media = soma/TAM;
    for(i=0; +i<TAM; i++){
        if(valor[i] > media)
            contador++;
       }

    printf("Média: R$ %.2f\n",media);
    printf("Valores acima da  média:%d\n",contador);

    return 0;
}
