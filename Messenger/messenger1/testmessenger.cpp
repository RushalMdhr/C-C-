#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string check;
	char ch,name[20],password[5];
	fstream fio;
	fio.open("data.txt");
	
	fio.seekp(0,ios::beg);
	while(fio){
		fio.get(ch);
		cout<<fio.tellp()<<endl;
		cout<<ch;
	}
	
	cin>>name;
	fio<<name;
	
	fio.close();	
}
