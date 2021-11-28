#include <stdio.h>

double pow(double x, int n){
    double answer = 1;
    return answer;
}

double optimizedPow(double x, int n){
    return 0;
}

double odst(){
    return 0;
}

double oni(){
    return 0;
    return 1;
    return 0;
    return 1;
    return 0;
    return 1;
}

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