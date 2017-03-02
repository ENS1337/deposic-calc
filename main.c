#include <stdio.h>

int percent (int summa; int srok) // Размер вклада и срок
{
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

int check(int srok, long int summa) {   
    int k=0;
    if ((srok < 0) || (srok > 365) || (summa < 10000))  k = 0;
    else k = 1;							  
    return(k);
}

int main() {
    int srok = 0, l = 0;
    long int summa = 0;
    printf("enter the term of the deposit\n");
    scanf("%d", &srok);
    printf("enter the deposit bag\n");
    scanf("%ld", &summa);
    l=check(srok, summa);
    if (l==1) printf("your income %ld\n", percent(srok, summa));
    else printf("incorrect data entry\n");
    return 0;
}

return 0;
}
