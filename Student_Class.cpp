#include <iostream>

using namespace std;

class Student{
	public:
	string name;
	int age;
	int day;
	int month;
	int year;
	public:
		void inputStudent(Student [],int );
		void outputStudent(Student [], int );
		void rankStudent(Student [], int );
		void inputStudentByFile();
};

void inputStudent(Student student[], int amount){
	cout<<"==========---ENTER  LIST OF STUDENT-----========\n";
	for(int i=0; i<amount; i++){
		cin.ignore();
		cout<<"Enter name:";
		getline(cin, student[i].name);
		cout<<"Enter age:";
		cin>>student[i].age;
		cout<<"Enter date of birth:";
		cin>>student[i].day;
		cin>>student[i].month;
		cin>>student[i].year;
	}
	
}

void outputStudent(Student student[],int amount){
	cout<<"==========----PRINT LIST OF STUDENT----==========\n";
	for(int i=0; i<amount; i++){
		cout<<"Name: "<<student[i].name<<endl;
		cout<<"Age: "<<student[i].age<<endl;
		cout<<"Date of birth:"<<student[i].day<<"/"<<student[i].month<<"/"<<student[i].year<<"\n";
	}
}
void rankStudent(Student student[], int amount){
	cout<<"========-----RANK LIST OF STUDENT----=============\n";
	for(int i=0; i<amount; i++){
		for(int j=i; j<amount ; j++){
			if(student[i].age<student[j].age){
				Student temp;
				temp = student[i];
				student[i] = student[j];
				student[j]=temp; 
			}	
		}
		
	}
	
}
int main(){
	int amount; 
	cout<<"Enter the amount:";
	cin>>amount;
	Student student[amount];
	inputStudent(student,amount);
	outputStudent(student, amount);
	rankStudent(student, amount);
	outputStudent(student, amount);
	return 0;
}
