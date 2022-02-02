#include <stdio.h>

int main(void)
{
    int array1[5] = {9, 7, 7, 3, 9};

    int array2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        array2[array1[i]] = array2[array1[i]] + 1;
    }

    for (int i = 0; i < 10; i++)
                 {
        if (array2[i] > 0)
        {
            printf("(%d => %d) ", i, array2[i]);
        };
    }
}