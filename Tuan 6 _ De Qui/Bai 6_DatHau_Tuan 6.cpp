/**
Nguoi thuc hien: Ly Van Tuan
Ma Sinh vien: 1402513
gmail: 14020513
Bai: Dat 8 hau vao ban co vua sao cho cac quan hau khong an nhau
**/

#include <iostream>

using namespace std;

void datHau(int soHau);//Ham tim tat ca cac truong hop xep hau voi ban co N*N o.
int kiemTra(int soHau, int hang);//k la con hau thu k, hang la hang cua con hau vua duoc dat

int kiemTra(int soHau,int hang);
int kiemTra(int soHau,int hang);


const int N=8;
int vitri[N];
int dem =0;


int main(){
	
	datHau(0);
	
	return 0;
}
//Ham dat Hau
void datHau(int soHau){
		//Kiem tra neu k bang so quan Hau N thi in ra man hinh
	if(soHau==N){
		cout<<"Giai phap "<<dem++<<": ";
		for(int i=0; i<N; i++){
			cout<<"("<<i<<","<<vitri[i]<<") ";
			
		}
		cout<<endl;
	}else{//Neu khong thi thuc hien de qui quay lui vet can:
		for(int i=0; i<N; i++){
			if(kiemTra(soHau,i)==1){
				
				vitri[soHau]= i;
				datHau(soHau+1);
			}
		}
	}
}
//Ham kiem tra xem hau dat o vi tri co bi an hay khong
int kiemTra(int soHau,int hang){
	for(int i=0; i<soHau;i++){
		int hangKhac = vitri[i];
		//Kiem tra hang bi trung khong voi hangKhac==hang 
		//Kiem tra duong cheo co bi trung khong voi  hangKhac == hang -(soHau-i)|| hangKhac == hang +(soHau-i)
		if(hangKhac== hang|| hangKhac == hang -(soHau-i)|| hangKhac == hang +(soHau-i)){
			return 0;			
		}
	}
	return 1;
}


