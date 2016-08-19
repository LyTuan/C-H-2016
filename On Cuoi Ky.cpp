/*
	Nguoi thuc hien: Ly Van Tuan
	Email: lytuanduong96@gmail.com
	Ma sinh vien: 14020513
	Bai 1: Kiem tra la chu thuong chu hoa, khong phai ky tu ASKII
	Bai2 : In bang ma ky tu ASKII
	Bai 3: Doi co so tu he thap phan sang co so n
	Bai 4: Tham chieu doi cho 2 so
	Bai 5: Tim day con co tong la lon nhat don dieu tang
	Bai 6: Random 10.000 so tu 0 32000
	Bai 7: Vao ra file
*/
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <stdlib.h>
#include <fstream>

using namespace std;
void kiemTraChuBai1(char c);
void inBangASKII_2();
void doiCoSo(int so, int heCoSo);
void swap(int &a, int &b);
void timDayCon(int a[],int n);
void random();
void file();
int main(){
//	cout<<"=========Bai 1==============================================\n";
//	char c;
//	cout<<"Nhap 1 ky tu vao:";
//	cin>>c;
//	kiemTraChuBai1(c);

	
//	cout<<"=========Bai 2==============================================\n";
//	inBangASKII_2();

	
//	cout<<"=========Bai 3===============================================\n";
//	int so, heCoSo;
//	cout<<"Nhap so can chuyen:";
//	cin>>so;
//	cout<<"Nhap he co so de chuyen tu he thap phan sang:";
//	cin>>heCoSo;
//	doiCoSo(so,heCoSo);


//	cout<<"=========Bai 4===============================================\n";
//	int a=5,b=6;
//	cout<<"Ban dau a="<<a<<" va b="<<b<<"\n";
//	swap(a,b);
//	cout<<"Sau swap a="<<a<<" b="<<b;



//	cout<<"=========Bai 5==============================================\n";
//	int n;
//	cout<<"Nhap do lon mang:";
//	cin>>n;
//	int a[n];
//	for(int i=0; i<n; i++){
//		cout<<"a["<<i<<"]=";
//		cin>>a[i];
//	}
//	timDayCon(a,n);

//	cout<<"=========Bai 6==============================================\n";
//	random();
	
	cout<<"=========Bai 7==============================================\n";
	file();
	return 0;
}

void kiemTraChuBai1(char c){
	if(islower(c)){
		cout<<"The upper case of "<<c<<" is ";
		putchar(toupper(c));
	}else if(isupper(c)){
		cout<<"The lowercase of "<<c<<" is ";
		putchar(tolower(c));
	}else{
		cout<<"Can not ASKII";
	}
	cout<<endl;
}
void inBangASKII_2(){
	for(int i=0; i<256; i++){
		char c=i;
		cout<<i<<" : "<<c<<setw(4);
	}
	cout<<endl;
}

void doiCoSo(int so, int heCoSo){
	cout<<so<<" o he thap phan chuyen sang he "<<heCoSo<<" la :";
	int a[1000];
	int dem=0;
	while(so!=0){
		a[dem++]=so%heCoSo;
		so=so/heCoSo;
	}
	
	
	for(int i= dem-1; i>=0; i--){
		cout<<a[i];
	}
	cout<<endl;
}

void swap(int &a, int &b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}

void timDayCon(int a[], int n){
	int sum[n];
	int end[n];
	int dem=0;
	for(int i=0; i<n; i++){
		int j=i;
		sum[i]=a[i];
		while(j<n-1&&a[j]<a[j+1]){
			sum[i]+=a[j+1];
			j++;
		}	
		end[i]=j;
	}
	
	int max = sum[0];
	int index=0;
	for(int i=0; i<n; i++){
		if(max<sum[i]){
			max = sum[i];
			index=i;
		}
	
	
	}

	cout<<"Day con tang dan co tong lon nhat la:\n";
	for(int i=index; i<=end[index]; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void random(){
	int array[32000];
	
	for(int i=0; i<32000; i++){
		array[i]=0;
	}
	
	for(int i=0; i<10000; i++){
		int a = rand()%32000;
		array[a] +=1;
	}
	int max= array[0];
	int index=0;
	for(int i=0; i<10000; i++){
		if(array[i]!=0){
			cout<<i<<" xuat hien "<<array[i]<<" lan\n";
			if(max<array[i]){
				max=array[i];
				index=i;
			}	
		}
		
	}
	cout<<index<<" xuat hien nhieu nhat voi "<<max<<" lan";
}

void file(){
	ofstream outfile("cuoiky.txt");
	outfile<<"Day la bai cuoi ky";
	outfile.close();
	
	ifstream infile("cuoiky.txt");
	char array[100];
	infile.getline(array,100);
	cout<<array;
}


