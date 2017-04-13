#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "deposit.h"

int main() {
    int summa ;
    int srok;// Размер вклада и срок
    int k = 0;
    
    printf("Введите сумму не менее 10000р и срок не более 365 дней \n");
    scanf("%d",&summa);
    scanf("%d",&srok);
    
    k = check (summa,srok);

    if (k == 1)
      {
      int sum = Bklad (summa,srok);
      printf("Сумма равна = %d\n",sum);
      }
    else {
      printf ("Сумма и срок введены неверно \n");
      }
    return 0;
}
    

