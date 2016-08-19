/*
 Nguoi thuc hien: Ly Van Tuan
 Ma sinh vien:14020513
 gmail:lytuanduong96@gmail.com
 Bai: Tinh Tong duong cheo matran mxm
 */
 #include <iostream>
 
 using namespace std;
 
 int main(){
 	int a[4][4];
 	for(int i=0; i<4; i++){
 		for(int j=0; j<4; j++){
 			cout<<"a["<<i<<"]"<<"["<<j<<"]=";
 			cin>>a[i][j];
		 }
	 }
	 int sum=0;
	 for(int i=0; i<4; i++){
	 	for(int j=0; j<4; j++){
	 		if(i=j){
	 			sum+=a[i][j];
			 }
		 }
	 }
	 cout<<sum;
 }
