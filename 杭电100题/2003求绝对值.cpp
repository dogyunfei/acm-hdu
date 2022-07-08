#include<iostream>
using namespace std;

int main(){
	double x;
	while(cin>>x){
		if(x>=0){
			printf("%.2f\n",x);
			//TODO
		}else{
			printf("%.2f\n",-x);
		}
	}
	return 0;
}
