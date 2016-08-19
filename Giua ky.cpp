/*
	Nguoi thuc hien: Ly Van Tuan 
	Ma sinh vien: 14020513
	gmail:lytuanduong96@gmail.com
	Bai 1: Cho mang n phan tu  gia tri phan tu bat ky
	tinh tong cac  phan tu chinh 
	phan tu lon hon hai phan tu ben canh
	
*/
#include <iostream>

using namespace std;
void tinhTong(int a[],int n);

int main(){
	int n;
	cout <<"Nhap so phan tu cua mang:";
	cin>> n;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	tinhTong(a,n);
	return 0;
}
void tinhTong(int a[],int n){
	int sum =0;
	for(int i=1; i<n; i++){
		if(a[i]>a[i-1]&&a[i]>a[i+1]){
			sum+=a[i];//Tinh tong 
		}
	}
	cout<<"Sum:"<<sum;
}
