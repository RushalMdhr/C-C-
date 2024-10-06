#include<iostream>
using namespace std;

template<class T>
class Ascending{
	T a[10],temp;
	public:
		void set();
		void asc();
		void display(){
			for(int i=0;i<5;i++){
				cout<<a[i]<<"\t";
			}
		}
};

template<class T>
void Ascending<T> :: set(){
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
}

template<class T>
void Ascending<T> :: asc(){
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	
}

int main(){
	Ascending<int>a1;
	Ascending<float>a2;
	
	cout<<"enter 5 integers:\n";
	a1.set();
	a1.asc();
	a1.display();
	cout<<"enter floats\n";
	a2.set();
	a2.asc();
	a2.display();
	
}
