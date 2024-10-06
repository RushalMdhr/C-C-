#include<iostream>
using namespace std;

class B{
	public:
	int a;
};

class D1: public B{
	public:
	int b;

};

//class D2 : public D1{
//		
//	public:
//	int c;
//};

//class D3 : public D2,public D1
//{
//	public:
//	int total;
//		
//};

int main(){
	D1 d1;
//	D2 d2;
	
	cout<<d1.a=5;
//	cout<<d2.a=5;
	
}
