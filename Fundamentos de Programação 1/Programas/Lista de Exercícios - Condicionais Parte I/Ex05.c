#include<stdio.h>
#include<math.h>

int main()
{
    int coef_A, coef_B, coef_C, delta;
    float raiz_1, raiz_2;

    printf("Digite o coeficiente A:\n");
    scanf("%d", &coef_A);
    printf("\nDigite o coeficiente B:\n");      //captura dos coeficientes
    scanf("%d", &coef_B);
    printf("\nDigite o coeficiente C:\n");
    scanf("%d", &coef_C);

    delta = (coef_B * coef_B) * coef_A * coef_C -4;
    raiz_1= ((-coef_B) + sqrt(delta)) / (2*coef_A);
    raiz_2= ((-coef_B) - sqrt(delta)) / (2*coef_A);

    if (delta<0)
        printf("\n ");

    else if (delta>0)
        printf("As raizes sao: %.2f e %.2f", raiz_1, raiz_2);

    else
        printf("As raizes sao: %.2f e %.2f", raiz_1, raiz_2);

return 0;
}
