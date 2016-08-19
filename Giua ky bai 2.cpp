/*
	Nguoi thuc hien: Ly Van Tuan 
	Ma sinh vien: 14020513
	gmail:lytuanduong96@gmail.com
	Bai 2: Cho mang mxn  chi ra cot nao co tong cac phan tu bang khong. 
	dem so cot nhu the.
*/
#include <iostream>

using namespace std;


//void timCotTongKhong(int a[][n],int m, int n);

int main(){
	int n;
	int m;
	cout<<"Nhap chieu dai mang:";
	cin>>m;
	cout<<"Nhap chieu rong mang:";
	cin>>n;
	int a[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
	int sum =0;
	int dem=0;
	for(int j=0; j<n; j++){
			for(int i=0; i<m; i++){
				 sum+= a[i][j];
				cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j];
				
		}
		if(sum=0){
			cout<<j;
			dem++;
			sum =0;
		}
	}
	cout<<"Co tat ca "<<dem<<"cot bang khong";
	return 0;
	
}
//void timCotTongKhong(int a[][],int m, int n){
	
//}
