#include <stdio.h>
#include <stdlib.h>

int main()
{
  char cinco = 53;
  char sete = 55;
  char meia = 54;
  char oito = 56;

  putchar('\a'); //eu gosto do barulhinho, desculpa :p
  printf("Letra A: ");
  putchar(meia);
  putchar(cinco);
  putchar('\n');
  printf("Letra B: ");
  putchar(meia);
  putchar(meia);
  putchar('\n');
  printf("Letra C: ");
  putchar(meia);
  putchar(sete);
  putchar('\n');
  printf("Letra D: ");
  putchar(meia);
  putchar(oito);

    return 0;
}
