/**
	Nguoi thuc hien: Ly Van Tuan
	Ma SV: 14020513
	gmail: lytuanduong96@gmail.com
	De bai: Tim day con tang dan co tong lon nhat	
*/
#include <iostream>

using namespace std;

void dayConTangDanCoTongMax(int n, int a[]);
int main(){
	int n;
	cout<<"Nhap do dai mang:";
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cout<<"Nhap a["<<i<<"]= ";
		cin>>a[i];
	}
	dayConTangDanCoTongMax(n,a);
	return 0;
}
void dayConTangDanCoTongMax(int n, int a[]){
	int sum[n];
	int end[n];
	
	//Tinh tong cac phan tu tang dan bat dau tu vi tri thu i
	for(int i=0;i<n;i++){
		sum[i]=a[i];
		int j=i+1;
		while(j<n&&a[j]>a[j-1]){
			sum[i]+= a[j]; // Tinh tong cac phan tu tang dan bat dau tu i
			j++;
		}
		end[i] = j-1; // Lay vi tri cuoi cua day tang dan
	}
		
	
	int maxSum=sum[0];
	int index=0;
	
	//Tim gia tri max trong mang sum tim ra phan tu bat dau cua day
	for(int i=0; i<n; i++){
		if(maxSum<sum[i]){
			 maxSum = sum[i];
			index=i;
		}
	}
	
	//In day
	cout<<"Day tang dan co tong lon nhat la: ";
	for(int i=index; i<=end[index];i++)
	{
		cout<<a[i]<<" ";
	}
	
}
