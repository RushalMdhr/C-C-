#include<iostream>
#define max 5
using namespace std;
int stack[max],top=-1,data;

int push(){
	if(top==max-1){
		cout<<"stack is overflown\n";
		return 0;
	}
	else{
		cout<<"enter your data : ";
		cin>>data;
		stack[++top]=data;
	}
}
pop(){
	if(top==-1){
		cout<<"stack is empty !\n ";
	}
	else{
		cout<<"the deleted item is "<<stack[top]<<endl;
		top--;
	}
}
display(){
	for(int i=0;i<=top;i++){
		cout<<stack[i]<<"\t";
	}
	cout<<endl;
}

int main(){
	int choice;
	while(1){
		cout<<"\t1.push\n\t2.pop\n\tenter the choice : ";
		cin>>choice;
		switch(choice){
			case 1:{
				push();
				display();
				break;
			}
			case 2:{
				pop();
				display();
				break;
			}
		}
	}
}
