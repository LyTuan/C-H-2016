#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	char array[100];

	int n=5;
	int a[n];
	ofstream outfile("dulieu.txt");
	outfile<<"Cong hoa xa hoi Viet Nam\n";
	outfile<<n<<endl;
	for(int i ; i<9 ; i++){
		outfile<<i*i<<" ";
	}
	ifstream infile("dulieu.txt");
	infile.getline(array,100);
	cout<<array<<endl;
	infile>>n;
//	int a[n];
	cout<<n<<endl;
	for(int i=0; i<n; i++){
		infile>>a[i];
		cout<<(a[i])<<setw(2);
	}
	
	infile.close();
	outfile.close();
	return 0;	
			
}
