#include<iostream>
using namespace std;

int main() {
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int a, b, c, sum = 0;
	while (~scanf("%d/%d/%d", &a, &b, &c)) {
		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
			month[1] = 29;
		}
		for (int i = 1; i < b; i++) {
			sum += month[i];
		}
		sum += c;
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
}
