#include<iostream>
using namespace std;

int main() {
	int m, n, sum1, sum2;
	while (cin >> m >> n) {
		
		sum1=0; sum2 =  0;
		if(m>n){
			int temp;
			temp=m;
			m=n;
			n=temp;
		}
		for (int i = m; i <= n; i++) {
			if (i % 2 == 0) {
				sum1 += (i * i);
			} else {
				sum2 += (i * i * i);
			}
		}
		printf("%d %d\n", sum1, sum2);

	}

	return 0;
}
