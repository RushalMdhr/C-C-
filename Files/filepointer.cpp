#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fio;
	fio.open("pointer.txt",ios::out);
	char ch;
	
	fio.seekg(0,ios::beg);
	cin.get(ch);
	while(ch!='\n'){
		fio<<ch;
		cin.get(ch);
	}
	
	
	
	fio.seekp(3,ios::beg);
	fio.get(ch);
	while(fio){
		cout.put(ch);
		fio.get(ch);
	}
	
	
	fio.close();
}
