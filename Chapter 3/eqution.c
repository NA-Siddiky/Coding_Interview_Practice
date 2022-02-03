#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 2;

    double eqn = (int)pow(x, 2) * (double)log((int)pow(x, 3));

    printf("%lf\n", eqn);

    return 0;
}
