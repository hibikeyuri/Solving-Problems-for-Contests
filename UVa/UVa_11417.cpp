#include <stdio.h>
int main()
{
    int A = 5;
    if(A>3)
        A++;
    else
        A--;
        A--;
    printf("%d\n", A);
    A << 2;
    printf("%d\n", A);
    A << 2;
    printf("%d\n", A);
    return 0;
}