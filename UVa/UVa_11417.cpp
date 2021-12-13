#include <stdio.h>

int main()
{
    int a[100];
    int b[100];
    int n = 0;
    int q = 0;
    a[0] = 0;
    for(int i=0; i<n; ++j){
        q = -100;
        for(int i=0; i<j; ++i){
            if(q < b[i] + a[j-i]){
                q = b[i] + a[j-i];
            }
        }
        a[j] = q;
    }
    return b[0];
}

