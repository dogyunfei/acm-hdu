#include<iostream>
using namespace std;
int n;
int main()
{
	cin>>n;
	n%=998244353;
	printf("%lld",n*n%998244353);
	return 0;
}
