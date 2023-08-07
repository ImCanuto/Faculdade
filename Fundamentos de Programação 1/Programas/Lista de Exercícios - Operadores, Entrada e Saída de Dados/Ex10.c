#include<stdio.h>

int main()
{

float raio_r, volume;
float PI = 3.14159;

printf("Digite o valor do raio da esfera:\n");
scanf("%f", &raio_r);

volume = (4.0/3.0) * PI * raio_r * raio_r * raio_r;

printf("\nO volume da esfera eh: %.3f", volume);

return 0;
}
