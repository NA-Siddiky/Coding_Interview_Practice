// a=[1,1,2,2,3]
#include <stdio.h>
int main()
{
    // for input
    int n;
    printf("Size: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        array[i] = number;
    }

    // for compirasion
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = 0;
            }
        }
    }

    // for final array
    printf("\nOutput: ");
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}