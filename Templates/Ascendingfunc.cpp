#include<iostream>
using namespace std;

template<class T>
void swap_numbers(T &a){
	T temp;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(a[j]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	}
	

int main(){
	int a[5];
	
	cout<<"enter the integer\n";
	for(int i=0;i<5;i++){
	cin>>a[i];
}
	swap_numbers(a);
	cout<<"after swap\n";
	for(int i=0;i<5;i++){
	cout<<a[i];
}
	
//	cout<<"enter the float\n";
//	float x,y;
//	cin>>x>>y;
//	cout<<x<<y<<endl;
//	swap_numbers(x,y);
//	cout<<"after swap\n";
//	cout<<x<<y<<endl;
	
}
