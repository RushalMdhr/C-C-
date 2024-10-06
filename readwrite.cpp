#include<iostream>
#include<fstream>
using namespace std;

class student{
	char name[20];
	int roll;
	public:
		
	void getdata(){
		cout<<"Details\n";
		cin>>name>>roll;
	}
	
	void display(){
		cout<<"Details\n"<<name<<"\t"<<roll<<endl;
	}
	
};

int main(){
	V v;
	
	fstream fout;
	fout.open("student.txt",ios::in|ios::out);

		v.getdata();
		cout<<"Details done\n";
		
		fout.seekp(0,ios::cur);
		fout.write((char*)&v,sizeof(v));
	

//	ifstream fin;
//	fin.open("student.txt",ios::in);
		
		fout.seekg(0,ios::beg);
		while(fout){
		fout.read((char*)&v,sizeof(v));
		v.display();
		}
	fout.close();
	
}

//finout.write((char*)&obj,sizeof(v));
