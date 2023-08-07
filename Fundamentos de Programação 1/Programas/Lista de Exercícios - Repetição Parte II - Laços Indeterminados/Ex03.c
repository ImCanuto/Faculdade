#include<stdio.h>

int main()
{

    int senha=2002, n;

    while(n != senha)
    {
    printf("Digite a senha:" );
    scanf("%d", &n);

    if (n != senha)
        printf("Senha Invalida!\n\n");

    else
        printf("Acesso Permitido!\n\n");
    }






return 0;
}
