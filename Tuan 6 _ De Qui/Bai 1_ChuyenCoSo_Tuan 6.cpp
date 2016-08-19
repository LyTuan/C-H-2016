/**
	Nguoi thuc hien: Ly Van Tuan
	Ma SV: 14020513
	gmail: lytuanduong96@gmail.com
	De bai: Chuyen co so thap phan sang co so nhi phan	
*/

#include <iostream>

using namespace std;
void ChuyenCoSo(int n);

int main(){
		int n;
		cout<<"Nhap so can chuyen:";
		cin>>n;
		cout<<n<<" o he co so nhi phan la: ";
		ChuyenCoSo(n);
		return 0;
}

void ChuyenCoSo(int n){
	int a[100];
	int dem=0;
	//Chuyen co so
	while(n!=0){
		a[dem] = n%2;
		n = n/2;
		dem++;
	}	
	//In so
	for(int i=dem-1;i>=0;i--){
		cout<<a[i];
	}
}
