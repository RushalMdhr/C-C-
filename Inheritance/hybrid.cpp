#include<iostream>
using namespace std;

class B{
	public:
		string a="b";
};

class D1:public virtual B{
	public:
		string c="d1";
};

class D2: public virtual B{
	public:
		string d="d2";
};

class D3:public D1, public D2{
	public:
		string e="d3";
};


int main(){
	D3 d3;
	
	cout<<d3.a<<d3.c<<d3.d<<d3.e;
}
