#include<iostream>
using namespace std;

template<class T>
void swap_numbers(T &x,T &y){
	T temp;
		temp=x;
		x=y;
		y=temp;
	}
	

int main(){
	int a,b;
	
	cout<<"enter the integer\n";
	cin>>a>>b;
	cout<<a<<b<<endl;
	swap_numbers(a,b);
	cout<<"after swap\n";
	cout<<a<<b<<endl;
	
	cout<<"enter the float\n";
	float x,y;
	cin>>x>>y;
	cout<<x<<y<<endl;
	swap_numbers(x,y);
	cout<<"after swap\n";
	cout<<x<<y<<endl;
	
}
