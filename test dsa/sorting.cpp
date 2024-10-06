#include<iostream>
//#include<stdlib.h>
using namespace std;


int main(){
	int n=5;
	int a[n]={1,5,4,2,3};
	int temp;
	for(int i=0;i<n;i++){
	cout<<a[i]<<"\t";
	}
	cout<<endl;
	//bubble sort
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++){
	cout<<a[i]<<"\t";
	}
	cout<<endl;

	
//	for(int i=0;i<n-1;i++){
//		for(int j=1;j<n;j++){
//			if(a[i]>a[j]){
//				swap(a[i],a[j]);
//			}
//		}
//	}
//	
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<"\t";
//	}
//	cout<<endl;
	
}
