#include<iostream>
#define n 5
using namespace std;

int main(){
	int a[n]={1,5,3,2,4};
	int i=0;
	int search,choice;
	cout<<"enter the digit u wanna search : ";
	cin>>search;
	cout<<"\n\t1.linear search\n\t2.binary search\n\tenter your choice : ";
	cin>>choice;
	switch(choice){
		case 1:{
			for(i=0;i<n;i++){
				if(a[i]==search){
					cout<<"data found at "<<i+1;
					break;
				}
			}
			if(i==n){
			cout<<"sorry data not found !";
			}
			break;
		}
		case 2:{
			for(i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i]>a[j]){
						swap(a[i],a[j]);
					}
				}
			}
			
			int beg=0, end=n-1;
			int mid=(beg+end)/2;
			
			while(beg>=end && a[mid]!=search){
				if(search<a[mid]){
					end=mid-1;
				}
				else{
					beg=mid+1;
				}
				mid=(beg+end)/2;
			}
			cout<<"data found at "<<mid;
			break;
		}
	}
}
