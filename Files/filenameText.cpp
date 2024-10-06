#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char name[20];
	char fl[5]=".txt";
	cout<<"enter your name ";
	cin>>name;
	char* filename=name;
	cout<<filename;
	cout<<endl<<fl;
	int p,q;
	for(p=0; filename[p] != '\0'; p++);//pointing to the index of the last character of x
	
	for(q=0; fl[q] != '\0'; q++,p++)
	{
		filename[p]=fl[q];
	}
	
	cout<<filename;
	
}
