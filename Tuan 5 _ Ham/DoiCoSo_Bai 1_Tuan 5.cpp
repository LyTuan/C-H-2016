#include <iostream>

using namespace std;

void doiCoSo(int n);
void doiCoSoDeQui(int n);
int main(){
	doiCoSo(5);
	cout<<endl;
	doiCoSoDeQui(11);
	return 1;
}
void doiCoSo(int n){
	int a[100];
	int dem =0;
	while(n!=0){
		a[dem++]= n%2;
		n=n/2;
	}
	for(int i = dem; i>=0; i--){
		cout<<a[i];
	}
}
void doiCoSoDeQui(int n){
	if(n==0){
		return ;
	}else{
		doiCoSoDeQui(n/2);
		cout<<n%2;		
	}	
}
