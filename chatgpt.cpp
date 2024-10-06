#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int i,n=0;
	string txt,word[5],user;
	char qno;
	
	
	
	while(1){
	ofstream fout;
	fout.open("qno.txt",ios::out);
	cout<<"USER: ";
	cin.get(qno);
	while(qno!='\n'){
		fout.put(qno);
		cin.get(qno);
	}
	fout.close();
	
	ifstream fin2;
	fin2.open("qno.txt",ios::in);
	while(fin2){
		while(getline(fin2,txt)){
			user=txt;
		}
	}
	fin2.close();
	
	
		ifstream fin;
		fin.open("rw.txt",ios::in);
		while(fin){
			while(getline(fin,txt)){
				if(user==txt){
					getline(fin,txt);
					cout<<"AI: "<<txt<<endl;
					break;
				}
				
			}
		}
	
		
	fin.close();
	}
	
}

