#include <stdio.h>

int main()
{
    double coe = (double)9 / 5;
    double Cel, increase;
    int times = 0;

    scanf("%d", &times);
    
    for(int i=0; i<times; ++i)
    {
        scanf("%lf%lf", &Cel, &increase) == 2;
        double Fer = coe * Cel + 32.0;
        Fer += increase;
        Cel = (Fer - 32.0) / coe;
        printf("Case %d: %.2f\n", i+1, Cel);
    }

    return 0;
}