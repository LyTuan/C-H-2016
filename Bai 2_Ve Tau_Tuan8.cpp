#include <iostream>

using namespace std;

class VeTau{
	public:
		int gioDen;
		int phutDen;
		int giayDen;
		int ngayDen;
		int gioDi;
		int phutDi;
		int giayDi;
		int ngayDi;
		string gaDi;
		string gaDen;
		string loaiTau;
		string loaiChoNgoi;	
		int soToa;
		int soGhe;
	public:
		void nhapDanhSachVe(VeTau [],int );
		void inDanhSachVeDenHue(VeTau [],int );
		void inVeNgay_8_6_2014(VeTau[],int);
		void demKhachVeNgoiMem(VeTau[],int);
		void inVe(VeTau [],int );
};
void nhapDanhSachVe(VeTau VeTau[],int soVe){
	cout<<"============================NHAP VE TAU========================\n";
	for(int i=0; i<soVe; i++){
		cout<<"---------Ve so "<<i<<"---------------"<<endl;
		cout<<"Nhap gio,phut, giay,ngay di:";
		cin>>VeTau[i].gioDi;
		cin>>VeTau[i].phutDi;
		cin>>VeTau[i].giayDi;
		cin>>VeTau[i].ngayDi;
		
		cout<<"Nhap gio phut giay ngay den:";
		cin>>VeTau[i].gioDen;
		cin>>VeTau[i].phutDen;
		cin>>VeTau[i].giayDen;
		cin>>VeTau[i].ngayDen;
		cin.ignore();
		
		cout<<"Nhap ga Di:";
		getline(cin,VeTau[i].gaDi);

		cin.ignore();
		cout<<"Nhap ga Den:";
		getline(cin,VeTau[i].gaDen);


		cout<<"Nhap loai Tau (Ngoi/Nam):";
		getline(cin,VeTau[i].loaiTau);


		cout<<"Nhap loai cho ngoi:";
		getline(cin,VeTau[i].loaiChoNgoi);

		
		cout<<"Nhap so toa:";
		cin>>VeTau[i].soToa;
		
		cout<<"Nhap so Ghe:";
		cin>>VeTau[i].soGhe;
	}
}

void inVe(VeTau VeTau[],int i){
	cout<<"\n=========================IN VE TAU===================================\n";
//		for(int i=0; i<soVe; i++){
		cout<<"---------Ve so "<<i<<"---------------"<<endl;
		cout<<"Gio di:";
		cout<<VeTau[i].gioDi<<":";
		cout<<VeTau[i].phutDi<<":";
		cout<<VeTau[i].giayDi<<"\n";
		cout<<"Ngay di:";
		cout<<VeTau[i].ngayDi<<"\n";
		cout<<"Gio den:";
		cout<<VeTau[i].gioDen<<":";
		cout<<VeTau[i].phutDen<<":";
		cout<<VeTau[i].giayDen<<"\n";
		cout<<"Ngay Den:";
		cout<<VeTau[i].ngayDen<<"\n";
		cout<<"Ga Di: ";
		cout<<VeTau[i].gaDi<<"\n";
		cout<<"Ga Den:";
		cout<<VeTau[i].gaDen<<"\n";
		cout<<"Loai Tau (Ngoi/Nam):";
		cout<<VeTau[i].loaiTau<<"\n";
		cout<<"Loai cho ngoi:";
		cout<<VeTau[i].loaiChoNgoi<<"\n";
		cout<<"So toa:";
		cout<<VeTau[i].soToa<<"\n";
		cout<<"So Ghe:";
		cout<<VeTau[i].soGhe<<"\n";
//	}
}

void inDanhSachVeDenHue(VeTau VeTau[],int soVe){
	for(int i=0; i<soVe; i++){
		if(VeTau[i].gaDen=="Hue"){
			inVe(VeTau,i);
		}
	}
}
void inVeNgay_8_6_2014(VeTau VeTau[],int soVe){
	for(int i=0; i<soVe; i++){
		if(VeTau[i].ngayDi==8){
			inVe(VeTau,i);
		}
	}
}
void demKhachVeNgoiMem(VeTau VeTau[],int soVe){
	int dem =0;
		for(int i=0; i<soVe; i++){
		if(VeTau[i].loaiTau =="Nam"&&VeTau[i].loaiChoNgoi=="Cung"){
			inVe(VeTau,i);
			dem++;
		}
		cout<<"\nCo tat ca "<<dem<<" ve la nam hoac Cung(Co phan biet chu hoa thuong)";
	}
}

int main(){
	int n;
	cout<<"Nhap so ve:";
	cin>>n;
	VeTau array[n];
	nhapDanhSachVe(array,n);
	inDanhSachVeDenHue(array,n);
	demKhachVeNgoiMem(array,n);
	inVeNgay_8_6_2014(array,n);
	return 0;
}
