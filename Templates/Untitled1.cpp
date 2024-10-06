#include<iostream>
#include<conio.h>
using namespace std;

template<class T>

void largest(T a,T b){
	if(a>b){
		cout<<a;
	}
	else{
		cout<<b;
	}
}


int main(){
	int a,b;
	cout<<"for integers";
	cin>>a>>b;
	largest(a,b);
	
	float x,y;
	cout<<"for floats";
	cin>>x>>y;
	largest(x,y);
	
}
