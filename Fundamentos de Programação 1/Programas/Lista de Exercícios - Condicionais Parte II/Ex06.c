#include<stdio.h>

int main()
{

    int cord_x, cord_y;

    printf("Digite os valores de X e Y: ");
    scanf("%d%d", &cord_x, &cord_y);

    if (((cord_x >= 0) && (cord_x <=432)) && ((cord_y >= 0) && (cord_y <=468)))
        printf("\nd\n");
    else
        printf("\nf\n");

return 0;
}
