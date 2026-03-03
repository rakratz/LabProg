#include <stdio.h>

int main()
{
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18){
        printf("Voce tem maior idade\n");
    }
        
    return 0;
}