#include <iostream>

using namespace std;

int main()
{
	int n;
	int sum=0;
	while(scanf("%d", &n) != EOF && n){
		while(n/10){
			n = n / 10 + n % 10;
		}
		cout << n << endl;
    }
}