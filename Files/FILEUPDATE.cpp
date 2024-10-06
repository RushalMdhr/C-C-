#include<iostream>
#include<fstream>
using namespace std;

class student{
	char name[20];
	int roll;
	public:
	void set(){
		cout<<"enter name and roll";
		cin>>name>>roll;
	}
	
	
};

int main(){
	student s;
	char filename[20];
	
	ofstream fout;
	
	
//	cout<<"enter file name";
//	cin>>filename;
//	
//	fout.open("rushal.txt",ios::ate);
//	cout<<"enter the obj to be updated\n";
//	int loc,obj;
//	cin>>obj;
//	loc=(obj-1)*sizeof(s);
//	fout.seekp(loc,ios::beg);
	s.set();
	fout.seekp(0,ios::cur);
	fout.write((char*)&s,sizeof(s));
	fout.close();
	
}
