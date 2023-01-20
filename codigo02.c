#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main () 
{
    int x, senha;
    senha = 1234;

    printf("Digite a senha de acesso: ****\n");
    scanf("%d", &x);

    
    while (senha != x)
    {
        printf("\nSENHA INCORRETA! FAVOR VERIFICAR\n");
        printf("Digite a senha de acesso: ****\n");
        scanf("%d", &x);
    }
    
    printf("BEM VINDO!");

    return 0;
}

