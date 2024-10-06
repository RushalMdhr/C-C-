#include<iostream>
using namespace std;

class B1{
	public:
		int a;
		
		int b;
		void get();
	
};

class B2{
		void show();
};

class D : public B1,public B2{
	int c;
	public:
		void mul(){
			c=3;
			c*=b;
		}
		
		void display(){
			cout<<a<<b;
		}
};

void B1 :: get(){
			cin>>a>>b;
		}
		
void B2 :: show(){
			cout<<endl<<a<<b<<endl;
		}

int main(){
	B b1;
	D d1;
	d1.get();
	d1.show();
	d1.mul();
	d1.display();
	
}
