#include <stdio.h>

#define STEP(a) (a) * (a)
#define MODUL(a) (a) < 0 ? (-a) : (a)
#define MIN(x, y, z) ((x) + (y)) < ((x) + (z)) ? STEP(((x) + (y))) : STEP(((x) + (z)))
#define MAX(x, y, z) STEP(x) > (5 * (MODUL((y - z)))) ? STEP(x) : (5 * (MODUL((y - z))))
#define PRINT(w) puts("control output"); \
                 printf(#w" = %d\n", w)

#define Z_VALUE 20
int main()
{
    int x, y, z;
    char ch;
    do
    {
        printf("Enter 2 numbers:\n");
        scanf_s("%d", &x);
        scanf_s("%d", &y);
        z = Z_VALUE;
        PRINT(x);
        PRINT(y);
#if (Z_VALUE < 1 || Z_VALUE >= 10)
        printf("Max of (x, y, z) = %d", MAX(x, y, z));

#else
        printf("Min of (x, y, z) = %d", MIN(x, y, z));
#endif

        puts("\nRepeat? y/n - ");
        getchar();
        ch = getchar();
    } while (ch == 'y');
}