#include<iostream>
using namespace std;

class A{
	public:
	int a;
	A(){
		cout<<"enter number";
		cin>>a;
	}
	
	A operator +(A A2){
		a=a+A2.a;
		
		return *this;
	}
	
	
};

int main(){
	A A1,A2;
	A1+A2;
	cout<<A1.a;
}
