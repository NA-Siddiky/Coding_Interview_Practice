#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 2;

    double eqn = (int)pow(x, 3) - (((6 * (int)pow(x, 2)) / 19) + ((42 * x) / 71) - (3701 / 9993));
    printf("output: %d\n", eqn);

    return 0;
}
