#include<stdio.h>

//exemplo de WHILE (usado quando vc sabe exatemente quantas vezes precisa repetir)
int main(){

    int i=0, num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    printf("\nTabuada do %d\n", num);

    while (i <=10){
        printf("\n%d * %d = %d",num, i, (num*i));
        i++;
    }

    return 0;
}
