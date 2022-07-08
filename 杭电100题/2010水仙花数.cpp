#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int m,n,count=0;
	int ge,shi,bai,sum;
	while(cin>>m>>n){
		sum=0;
		for(int i=m;i<=n;i++){
			ge=i%10;
			shi=i/10%10;
			bai=i/100;
			sum=pow(ge,3)+pow(shi,3)+pow(bai,3);
			
			if(sum==i){
				if(count!=0){
					//TODO
					printf(" ");
				}
				printf("%d",i);
				count+=1;
			}
			
		}
		if(count==0){
			printf("no ");
			//TODO
		}

		printf("\n");
	}
	return 0;
}
