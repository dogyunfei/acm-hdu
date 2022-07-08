#include<iostream>
using namespace std;

int main(){
	int n,sum,x;
	while(cin>>n){
		sum=1;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x%2==1){
				sum*=x;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
