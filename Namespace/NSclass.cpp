#include<iostream>
using namespace std;

namespace Name1{
	class A{
		public:
			A(){
				cout<<"Name1"<<"\n";
			}
			
			void display(){
				cout<<"you are inside class A of Name1"<<endl;
			}
	};
}

namespace Name2{
	class A{
		public:
			A(){
				cout<<"Name2"<<"\n";
			}
			
			void display(){
				cout<<"you are inside class A of Name2";
			}
	};
}

int main(){
	using namespace Name1;
	Name1 :: A obj1;
	obj1.display();
	
	using namespace Name2;
	Name2 :: A obj2;
	obj2.display();
}
