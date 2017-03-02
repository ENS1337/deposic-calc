#include <stdio.h>

int main ()
{ int summa; int srok; // Размер вклада и срок
  printf ("Введите сумму не менее 10000р и срок не более 365 дней \n");
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
   if (summa > 9999 && summa < 100000 && srok > 120 && srok < 241) // Вклад 3
  {
      (summa = summa + summa / 100 * 6);
      printf("Сумма Равна =  %d\n", summa);
  }
      else if (summa > 99999 && srok > 120 && srok < 241)
      {
          (summa = summa + summa / 100 * 8);
      printf("Сумма Равна =  %d\n", summa);
  }
   if (summa > 9999 && summa < 100000 && srok > 240 && srok < 366) // Вклад 4
   {
       (summa = summa + summa / 100 * 12);
      printf("Сумма Равна =  %d\n", summa);
  }
      else if (summa > 99999 && srok > 240 && srok < 366)
      {
          (summa = summa + summa / 100 * 15);
      printf("Сумма Равна =  %d\n", summa);
  }
return 0;
}
