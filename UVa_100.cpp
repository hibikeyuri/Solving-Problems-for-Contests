#include <stdio.h>

int collatz(int num)
{   
    int count = 1;
    while (num != 1)
    {
        count += 1;
        if (num % 2 == 0) {
            num = num / 2;
        }
        else num = 3 * num + 1;
    }
    return  count;
}
int solve(int first, int end)
{
    int MAX = 0;
    for(int i=first; i<=end; ++i)
    {
        int count = collatz(i);
        if (count > MAX) MAX = count;
    }
    return MAX;
}

int main()
{
    int first = 0, end = 0;
    while(scanf("%d%d", &first, &end) != EOF)
    {
        int notinorder = false;
        if(first > end){
            int temp;
            temp = first;
            first = end;
            end = temp;
            notinorder = true;
        }
        int MAX = solve(first, end);
        if(notinorder){
            printf("%d %d %d", end, first, MAX);
        }
        else{
            printf("%d %d %d", first, end, MAX);
        }
        printf("\n");
    }
    
    return 0;
}