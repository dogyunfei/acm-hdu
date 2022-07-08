#include<iostream>
using namespace std;

int main(){
	int n,sum=1;
	while(cin>>n){
		sum=0;
		for(int i=n;i>=1;i--){
			sum=(sum+1)*2;
			
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
