#include <iostream>
#include <fstream>

using namespace std;

void timHang(int a[][100],int m, int n);
void soHoanChinh(int a[][100],int m, int n);
int tinhTongUocChuSo(int n);
int main(){
	ifstream inputFile("numbers.txt");
	int n,m;
	
	inputFile >>m;
	inputFile >>n;
	
	cout<<m<<" ";
	cout<<n<<endl;
	
	int array[m][100];

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			inputFile>>array[i][j];
		}
	}
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	timHang(array,m,n);
	soHoanChinh(array,m,n);
	
	return 0;
}

void timHang(int a[][100],int m, int n){
	int tongHang_i[m];
	
	for(int i=0; i<m; i++){
		tongHang_i[i]=0;
		for(int j=0; j<n; j++){
			tongHang_i[i]+=a[i][j];
		}
	}

	for(int i=0; i<m-1; i++){
		if(tongHang_i[i]==tongHang_i[i+1]){
			cout<<"Hang "<<i;
		}
	}
	cout<<endl;
}

void soHoanChinh(int a[][100],int m, int n){
	cout<<"Cac so Hoan Chinh la:";
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]*2==tinhTongUocChuSo(a[i][j])){
				cout<<"So "<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}

int tinhTongUocChuSo(int n){
	int tong=0;
	for(int i=1; i<=n; i++){
		if(n%i==0){
			tong+=i;
		}
	}
	return tong;
}
