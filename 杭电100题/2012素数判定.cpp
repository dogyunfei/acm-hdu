#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int x)
{
	if (x <= 1) return false;
	for (int i = 2; i <= x / i; i++)
	{
		if (x % i == 0)return false;
	}
	return true;
}

int main()
{
	int x, y, t;
	
	while (cin >> x >> y)
	{
		bool flag = 1;
		if (x == 0 && y == 0)break;
		for (int i = x; i <= y; i++)
		{
			
			t = i * i + i + 41;
			if (!isPrime(t))
			{
				flag = 0;
				break;
			}
		}
		if (flag == 0) cout << "Sorry" << endl;
		else cout << "OK" << endl;
	}

	return 0;
}
