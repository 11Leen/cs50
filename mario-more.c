#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int i = 1; i <= n; i++) // حلقة الصفوف
    {
        for (int j = 0; j < n - i; j++) // طباعة المسافات للهرم الاول
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // طباعة الهاشتاغات للهرم الاول
        {
            printf("#");
        }

        for (int f = 0; f < 2; f++) // للفجوة بين الهرمين )gap
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) // طباعة الهاشتاجات للهرم الثاني المحاذية لليسار
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
