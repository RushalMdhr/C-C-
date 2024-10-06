/*Templates : new concept in c++ enabling us to use generic clss of func
supports generic pogramming: is an approach where genetric class is used as parameters in  algorithm;
so that they can work with various data type of structures
ceates a family of classes and function 
when obj of specified type is defined for actual use
template defination for that */

#include<iostream>
#include<conio.h>
using namespace std;

template<class T>

class largest{
	T a[10],l;
	public:
		void set();
		void large();
		void display(){
			cout<<"\nthe largest number is: "<<l<<endl;
		}
};

template<class T>
void largest<T> :: set(){
	for(int i=0;i<5;i++){
		cin>>a[i];
		
	}
}

template<class T>
void largest<T> :: large(){
	l=0;
	for(int i=0;i<5;i++){
		if(l<a[i]){
			l=a[i];
		}
	}
}

int main(){
	largest<int>t1;
	largest<float>t2;
	cout<<"enter integers\n";
	
	t1.set();
	t1.large();
	t1.display();
	
	cout<<"enter the float type\n";
	t2.set();
	t2.large();
	t2.display();
	
}
