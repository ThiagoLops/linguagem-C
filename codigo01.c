#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int x, y;

    printf("Hello word!\n");
    printf("Digite um numero:");
    scanf("%d", &y);
    printf("TABOADA DO NUMERO %d \n", y);

    for (int i = 0; i-1 < 10; i++)
    {
       x = 0;
       x = y * i;
       printf("%d X %d = %d \n", y, i, x);
    }
    
    return 0;
}