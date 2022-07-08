#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int x) {
	if (x==1) return false;
	else if (x==2 ) return true;
	else{
		for(int i=0;i<=sqrt(x);i++){
			if(x%i==0){
				return false;
			}
			return true;
		}
	}

}

int main() {
	int x,y,t;
	while(cin>>x>>y){
		
		
	}

	return 0;
}
