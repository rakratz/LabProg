#include <stdio.h>
#include <string.h> 
int main() {
    
        char p1[20], p2[20], p3[20];
        
        scanf("%s",p1);
        scanf("%s",p2);
        scanf("%s",p3);
 
    if (strcmp(p1, "vertebrado") == 0) {
        // vertebrado
        if (strcmp(p2, "ave") == 0){
            // ave
            if (strcmp(p3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pombo\n");
            }
        } else {
            // mamifero
            if (strcmp(p3, "onivero") == 0)
            {
                printf("homen\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    } else {
        // invertebrado
        if (strcmp(p2, "inseto") == 0)
        {
            // inseto
            if (strcmp(p3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("largata\n");
            }
        }
        else
        {
            // anelideo
            if (strcmp(p3, "hematofago") == 0)
            {
                printf("sanguesuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}