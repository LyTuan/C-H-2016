/**
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	De bai: Tim Max

**/
#include <iostream>


using namespace std;

int timMax(int a[], int n);
int main(){
	int n;
	cout<<"Nhap do lon mang:";
	cin>>n;
	int a[n];
	
	cout<<"Nhap mang:";
	for(int i=0; i<n; i++){
		cout<<"Nhap a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<timMax(a,n);
	return 0;
	
}

int timMax(int a[],int n){
	if(n==0){
		return a[0];
	}else{
		if(a[n-1]>timMax(a,n-1)){
			return a[n-1];
		}else{
			return timMax(a,n-1);
		}
	}
}
