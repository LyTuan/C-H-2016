#include <iostream>

using namespace std;


int main(){
	int b[3]={4,5,6};
	int a[]={4,5,6,7};
	cout<<sizeof(a)/sizeof(*a)<<endl;
	for(int i=0; i<sizeof(a)/sizeof(*a);i++){
		cout<<a[i];
	}
	cout<<endl;
	int c[20][20];
	for(int i=0; i<20;i++){
		for(int j=0; j<20; j++){
			c[i][j]=i;
		}
	}
	for(int i=0; i<20;i++){
		for(int j=0; j<20; j++){
		cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
