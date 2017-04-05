#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "deposit.h"

short int is_correct_number(char *a) // Проверка правильности ввода
{
    for (int i = 0; i < strlen(a) - 1; i++) {
        if (isdigit((int) a[i]) == 0) {
            return 0;
        }
    }
    return 1;
}
