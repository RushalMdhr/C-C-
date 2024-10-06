#include<iostream>
using namespace std;

	int a[100],n;
void display(){
	cout<<"DISPLAY : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
}
int main(){
	int choice;
	
	cout<<"enter the number of element you wanna enter : ";
	cin>>n;
	cout<<"enter the datas : ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	display();
	
	cout<<endl;
	
	while(1){
		cout<<"\n\t1.Bubble Sort\n\t2.Inserting Sort\n\t3.External Sorting\nenter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:{
				int count =1;
				for(int i=0;i<n;i++){
						cout<<"pass "<<count<<endl;
						count++;
					for(int j=0;j<n-i-1;j++){
						if(a[j]>a[j+1]){
							int temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
						for(int i=0;i<n;i++){
							cout<<a[i]<<"\t";
						}
						cout<<"\n";
						for(int k=0;k<j;k++){
							cout<<"\t";
						}
						cout<<"^\t^"<<endl;
					}
				}
				display();
				break;
			}
			case 2:{
				for(int i=1;i<n;i++){
					int temp = a[i];
					for(int j=i-1;j>=0;j--){
						if(temp<a[j]){
						
						a[j+1]=a[j];
//						a[j]=temp;
						}
						else{
							break;
						}
					}
					display();
				}
				display();
				break;
			}
			case 3:{
				int i,j;
				for(int i=0;i<n;i++){
						int temp = a[i];
					for(j=i-1;j>=0;j--){
						if(temp<a[j]){
						a[j+1]=a[j];
						}
						else{
							break;
						}
					
					}
				a[j+1]=temp;
					
				}
				display();
				break;
			}
		}
	}
}
