#include <stdio.h>

int main ()
{ int summa; int srok; // Размер вклада и срок
  printf ("Введите сумму и срок \n");
  scanf ("%d %d",&summa,&srok);
  if (summa > 9999 && srok > 0 && srok < 31) // Вклад 1
  {
      (summa = summa - summa / 100 * 10);
      printf("Сумма Равна =  %d\n", summa);
  }
  if (summa > 9999 && summa < 100000 && srok > 30 && srok < 121) // Вклад 2
      
  {
      (summa = summa + summa / 100 * 2);
      printf("Сумма Равна =  %d\n", summa);
  }
      else if (summa > 99999 && srok > 30 && srok < 121)
      {
          (summa = summa + summa / 100 * 3);
      printf("Сумма Равна =  %d\n", summa);
  }
   
  return 0;
}
