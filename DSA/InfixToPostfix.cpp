#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

char pop();
void push(char);
int check_pre(char );
	
char infix[30],postfix[30],stack[30];
int top=-1,i,pos=0;

int main(){
	cout<<"enter the infix : ";
	cin>>infix;
	int n=strlen(infix);
	cout<<"Scanned\t\tStack\tPostfix\nChar\n";
	for(i=0;i<n;i++){
//		cout<<infix[i];
		if(infix[i]>=33&&infix[i]<=47){
			if(infix[i]=='('){
				push(infix[i]);
			}
			else if(infix[i]==')'){
				while(stack[top]!='('){
					char pop_op=pop();
					postfix[pos]=pop_op;
//					cout<<postfix;	//showing postfix
					pos++;
				}
			top--;
			}
			else{
				while(top>-1 && stack[top]!='('){
					if(check_pre(stack[top])>=check_pre(infix[i])){
						char pop_op=pop();
						postfix[pos]=pop_op;
						pos++;
					}
					else{
						break;
					}
				}
				push(infix[i]);
			}
		}
		else{
			postfix[pos]=infix[i];
			pos++;
			}
			cout<<infix[i]<<"\t\t"<<stack<<"\t"<<postfix<<endl;
		}

	while(top!=-1){
			char pop_op=pop();
			postfix[pos]=pop_op;
			pos++;
		}
	
	cout<<"the post fix expression is : "<<postfix;
	getch();
}

void push(char data){
	top++;
	stack[top]=data;
}

int check_pre(char data){
	if(data=='/'||data=='*'){
		return 3;
	}
	if(data=='+' || data=='-'){
		return 2;
	}
}

char pop(){
	char data=stack[top];
	top--;
	return data;
}

//(a+(b*c)-d+(e/f)/(g+h))
