#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int jollynumber[3001];
    int n = 0;
    while(scanf("%d", &n)!=EOF)
    {
        bool gap[3001] = {0};
        bool flag = true;
        for(int i=0; i<n; ++i)
        {
            scanf("%d", &jollynumber[i]);
        }

        for(int i=1; i<n; ++i)
        {
            int absvalue = abs(jollynumber[i] - jollynumber[i-1]);
            if(absvalue >=n || absvalue == 0 || gap[absvalue]){
                flag = false;
                break;
            }
            gap[absvalue] = true;
        }
        if(flag){
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
    }
    return 0;
}