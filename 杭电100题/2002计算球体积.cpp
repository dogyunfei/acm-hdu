#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.1415927

int main(){
	double r,v;
	while(cin>>r){
		//TODO
		v=pow(r,3)*4*PI/3;
		printf("%.3f\n",v);
	}
	return 0;
}
