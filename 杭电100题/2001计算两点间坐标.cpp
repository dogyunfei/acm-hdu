#include<iostream>
#include<math.h>

using namespace std;

int main(){
	double x1,y1,x2,y2;
	while(cin>>x1>>y1>>x2>>y2){
		//TODO
		double distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		printf("%.2f\n",distance);
	}
	return 0;
}

