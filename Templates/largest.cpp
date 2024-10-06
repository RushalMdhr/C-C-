#include<iostream>
using namespace std;

template<class T>
	
class largest{
	T a[5],l;
	public:
		
	void getdata(){
		for(int i=0;i<5;i++){
			cin>>a[i];
		}
	}
	
	void display(){
		l=0;
		for(int i=0;i<5;i++){
			if(l<a[i]){
				l=a[i];
			}
		}
		cout<<l;
	}
};

int main(){
	largest<int>l1;
	largest<float>l2;
	
	l1.getdata();
	l1.display();
	l2.getdata();
	l2.display();
}
