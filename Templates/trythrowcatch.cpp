#include<iostream>
using namespace std;

int main(){
	int a,b,x;
	
	cin>>a>>b;
	x=a-b;
	try{
		if(x!=0){
			cout<<a/x;
		}
		else{
			throw(x);
		}
	}
	
	catch(int z){
		cout<<"exception caught";
	}
}
