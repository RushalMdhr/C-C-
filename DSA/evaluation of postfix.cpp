#include<iostream>
#include<string.h>
#define max 30
using namespace std;
char postfix[max];
int stack[max];
int top=0;

void push(int a){
	stack[top]=a-48;
	cout<<stack[top]<<endl;
	top++;
}

void pop(char op){
	int A,B;
	A=stack[--top];
	B=stack[--top];
	if(op=='+'){
		cout<<op<<endl;
		
		stack[top]=B+A;
	}
	else if(op=='-'){
		stack[top]=B-A;
	}
	else if(op=='*'){
		stack[top]=B*A;
	}
	else if(op=='/'){
		stack[top]=B/A;
		
	}
	else{
		cout<<"wrong operator!!! \n";
	}
}

int main(){
	strcpy(postfix,"562*42/1-1*-4*+");
	int choice;
	cout<<"1.postfix\n2.prefix\nenter the choice: ";
	cin>>choice;
	switch(choice){
		case 1:{
			cout<<"enter the postfix : ";
//			cin>>postfix;
			break;
		}
		case 2:{
			cout<<"enter the prefix : ";
			cin>>postfix;
			strrev(postfix);
			break;
		}
	}
//	cin>>postfix;
	//1.scan the postfix from left to right;
	int n=strlen(postfix);
	for(int i=0;i<n;i++){
		if(postfix[i]>=48 && postfix[i]<=57){
			//2. if operator push it stack;
			push(postfix[i]);
		}
		else{
			//3. if operand pop top 2 element of stack 
			pop(postfix[i]);
		}
	}
	cout<<stack[0];
}
