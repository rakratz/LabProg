#include <stdio.h>

int main(){
    double n1, n2, n3, media;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;
    printf("A média é %0.2lf", media);
    system("PAUSE");
    return 0;
}