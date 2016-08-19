/**
	Nguoi thuc hien: Ly Van Tuan
	Ma sinh vien: 14020513
	De bai: Tinh tong Cac chu so

**/
#include <iostream>

using namespace std;

int tinhTongCacChuSo(int n);
int tinhTongCacChuSoDeQui(int n);

int main(){
	int n;
	cout<<"Nhap so can tinh tong cac chu so:";
	cin>>n;
	cout<<"Ket qua:"<<endl;
	cout<<tinhTongCacChuSo(n)<<endl;
	cout<<tinhTongCacChuSoDeQui(n)<<endl;
	return 0;
}

int tinhTongCacChuSo(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n=n/10;
	}
	return tong;
}
int tinhTongCacChuSoDeQui(int n){
	if(n==0){
		return 0;
	}else{
		return n%10+tinhTongCacChuSoDeQui(n/10);
	}
}

