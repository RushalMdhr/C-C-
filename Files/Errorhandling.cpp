#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student{
	char name[20];
	int roll;

	public:
		
	void get(){
		cin>>name>>roll;
	}
	
};

int main(){
	student s;
	int loc,obj;
	fstream fio;
	char ch;
	fio.open("ios2.txt",ios::out);
	
	while(ch!='n'){
	s.get();
	fio.write((char*)&s,sizeof(s));
		cin>>ch;
	}
	
	
	cout<<"enter obj";
	cin>>obj;
	loc=(obj-1)*sizeof(s);
	fio.seekp(loc,ios::beg);
	int p=fio.tellp();
	cout<<p;
	
	s.get();
	fio.write((char*)&s,sizeof(s));
	
	
	
}
