#include<iostream>
#include<string.h>
#define max 30
using namespace std;
char postfix[max];
int stack[max];
int top=0;

void push(int a){
//	cout<<a<<endl;
	stack[top]=a-48;
	cout<<stack[top]<<endl;
	top++;
}

void pop(char op){
	int A,B;
	A=stack[--top];
	cout<<A;
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
//	postfix="562*42/1-1*-4*+";
	cin>>postfix;
	//1.scan the postfix from left to right;
	int n=strlen(postfix);
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<"postfix"<<postfix[i]<<endl;
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
