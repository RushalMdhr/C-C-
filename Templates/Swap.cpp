#include<iostream>
using namespace std;

template<class T,class T2>
class Ascending{
	T a,b,temp;
	public:
		void set();
		void asc();
		void display(){
			cout<<a<<b;
		}
};

template<class T,class 	T2>
void Ascending<T> :: set(){
		cin>>a>>b;
	
}

template<class T,class T2>
void Ascending<T> :: asc(){
		temp=a;
		a=b;
		b=temp;
	}
	

int main(){
	Ascending<int>a1;
	Ascending<float>a2;
	
	cout<<"enter floats\n";
	a2.set();
	a2.asc();
	a2.display();
	
}
