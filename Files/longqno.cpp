#include<iostream>
#include<fstream>
using namespace std;

class student{
	char name[20];
	int roll;
	float marks;
	
	public:
		void get(){
			cout<<"enter name: ";
			cin>>name;
			cout<<"roll: ";
			cin>>roll;
			cout<<"marks: ";
			cin>>marks;
		}
};

int main(){
	student s;
	
	int n;
	
	ofstream fout;
	fout.open("students.txt",ios::out);
	
	cout<<"enter the number of student";
	cin>>n;
	
	for(int i=0;i<n;i++){
		s.get();
		fout.write((char*)&s,sizeof(s));
	}
	
	
}

