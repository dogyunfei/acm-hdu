#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int m;
	double sum,n;
	while(cin>>n>>m){
		sum=0;
		for(int i=0;i<m;i++){
			sum+=n;
			n=pow(n,0.5);
			//TODO
		}
		printf("%.2f\n",sum);
		
	}
	return 0;
}
