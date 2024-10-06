#include<iostream>
#include<conio.h>
using namespace std;

void phibo(int n){
	static int a=0,b=1,c;
	if(n>0){
		c=a+b;
		cout<<a;
		a=b;
		b=c;
		phibo(n-1);
	}
	
}

int main(){
	int n;
	cout<<"how many no to show ? : ";
	cin>>n;
	
	phibo(n);
}
