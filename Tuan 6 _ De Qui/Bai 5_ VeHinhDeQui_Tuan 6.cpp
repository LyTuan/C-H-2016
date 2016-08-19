/**
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	De bai: ve hinh

**/
#include <iostream>

using namespace std;

void veHinhDeQui(int n);

int main(){
	veHinhDeQui(10);
	return 0;	
}

void veHinhDeQui(int n){
	if(n==1){
		cout<<"*"<<endl;
	}else{
	
		veHinhDeQui(n-1);
			for(int i=0; i<n; i++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}
