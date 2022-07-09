#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int m, x;double sum = 0;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x;
		sum = 0;
		for (double i = 1; i <= x; i++) {
			sum += pow(-1, i + 1) * (1 / i);
		}
		printf("%.2f\n",sum);
	}
	return 0;
}
