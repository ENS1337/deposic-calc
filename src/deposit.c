#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "deposit.h"

int Bklad (int summa,int srok)
{
    if (summa > 9999 && srok > 0 && srok < 31) // Вклад 1
    {
      summa = summa - summa / 100 * 10;
    }
    if (summa > 9999 && summa < 100000 && srok > 30 && srok < 121) // Вклад 2
    {
      summa = summa + summa / 100 * 2;
    } else if (summa > 99999 && srok > 30 && srok < 121) {
      summa = summa + summa / 100 * 3;
    }
    if (summa > 9999 && summa < 100000 && srok > 120 && srok < 241) // Вклад 3
    {
      summa = summa + summa / 100 * 6;
    } else if (summa > 99999 && srok > 120 && srok < 241) {
      summa = summa + summa / 100 * 8;
    }
    if (summa > 9999 && summa < 100000 && srok > 240 && srok < 366) // Вклад 4
    {
        summa = summa + summa / 100 * 12;
    } else if (summa > 99999 && srok > 240 && srok < 366) {
        summa = summa + summa / 100 * 15;
    }
    return summa;
}
int check (int summa, int srok) {   
    if ((srok < 0) || (srok > 365) || (summa < 10000))
    {
        return 0;
    }
    return 1;
}

