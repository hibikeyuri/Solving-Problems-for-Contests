#include <stdio.h>
int main()
{
    double x;
    int n;
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return optimizedPow(x*x, n/2);
    }
    else{
        return x * optimizedPow(x*x, n/2);
    }
    return 0;
}