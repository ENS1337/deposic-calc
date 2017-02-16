#include <stdio.h>

int main ()
{ int summa; int srok; // Размер вклада и срок
  printf ("Введите сумму и срок \n");
  scanf ("%d %d",&summa,&srok);
  if (summa > 10000 && srok > 0 && srok < 31)
  {summa = summa - (summa / 100 * 10);
      printf("Сумма Равна =  %d\n", summa);
  }
  return 0;
}
