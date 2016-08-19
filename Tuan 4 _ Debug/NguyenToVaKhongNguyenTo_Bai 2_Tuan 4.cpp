/*
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	gmail: lytuanduong96@gmail.com
	Bai 2_Tuan 4: Tim tat ca cac cap nguyen to cung nhau hoac deu khong la nguyen to
*/
#include <iostream>
#include <cmath>

using namespace std;
void timCapNguyenTo(int n, int a[]);
void nguyenToCungNhau(int n, int a[]);
int kiemTraNguyenTo(int n);

int main(){
	int n;
	cout<<"Nhap do lon cua mang vao:";
	cin>>n;
	
	int a[n];
	for(int i=0;i<n; i++){
		cout<<"Nhap phan tu a["<<i<<"]=";
		cin>>a[i];
	}
	timCapNguyenTo(n,a);
	nguyenToCungNhau(n,a);
	
	return 0;
	
}
void timCapNguyenTo(int n, int a[]){
	for(int i=0;i<n; i++){
		for(int j=i+1; j<n; j++){
			if(kiemTraNguyenTo(a[i])==0&&kiemTraNguyenTo(a[j])==0){
				cout<<a[i]<<"Va"<<a[j]<<endl;
			}
		}
	}
}
void nguyenToCungNhau(int n, int a[]){
	for(int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			
			if(kiemTraNguyenTo(a[i])==1&&kiemTraNguyenTo(a[j])==1){
				
				cout<<a[i]<<" va "<<a[j]<<endl;
			}
		}
	}
}
int kiemTraNguyenTo(int n){
	if(n==2||n==3){
		return 0;
	}else{
		for (int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 1;
			}
		}
		return 0;	
	}
	
}
