#include<iostream>
#include<conio.h>
using namespace std;

void toh(int n,char s,char m,char d){
	if(n>0){
		toh(n-1,s,d,m);
		cout<<"\tmove the disk from "<<s<<" to "<<d<<endl;
		toh(n-1,m,s,d);
	}
}

int main(){
	int n;
	cout<<"enter the no. of disks : ";
	cin>>n;
	
	toh(n,'S','M','D');
	getch();
}
