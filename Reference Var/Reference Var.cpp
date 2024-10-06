#include<iostream>
using namespace std;

int main(){
	int total=50;
	int &sum=total;
	
	cout<<&sum<<endl;
	cout<<&total<<endl;
	cout<<sum<<endl;
	cout<<total<<endl;
	
}
