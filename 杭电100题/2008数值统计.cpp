#include<iostream>
using namespace std;

int main(){
	int zheng=0,fu=0,zero=0;
	int n;double x;;
	while(cin>>n){
		if(n==0){
			break;
			//TODO
		}
		for(int i=0;i<n;i++){
			cin>>x;
			if(x>0){
				zheng+=1;
			}else if(x==0){
				zero+=1;
			}else{
				fu+=1;
			}
		}
		printf("%d %d %d\n",fu,zero,zheng);
		zheng=0,fu=0,zero=0;
		//TODO
	}
	
	
	return 0;
}
