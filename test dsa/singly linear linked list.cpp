#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node *next,*prev;
};
node *pnew,*head,*pthis;
void head_data(){
	head = (node *)malloc(sizeof(node));
	head->next=head;
	head->prev=head;
	head->data=0;
}
void create(){
	pnew = (node *)malloc(sizeof(node));
	cout<<"enter your data : ";
	cin>>pnew->data;
}

void display(){
	pthis=head->next;
	cout<<"DISPLAY :"<<pthis->data<<"\t";
	while(pthis->next!=head){
		pthis=pthis->next;
		cout<<pthis->data<<"\t";
	}
	cout<<endl;
}

int main(){
	int choice;
	head_data();
	while(1){
		cout<<"1.insert_from_beggining\n2.insert_from_end\n3.delete_from_beggining\n4.delete_from_end\nenter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:{
				create();
				if(head->next==head){
					head->next=pnew;
					pnew->prev=head;
					pnew->next=head;
					head->prev=pnew;
				}
				else{
					pthis=head->next;
					head->next=pnew;
					pnew->prev=head;
					pnew->next=pthis;
					pthis->prev=pnew;
				}
				display();
				break;
			}
			case 2:{
				create();
				if(head->next==head){
					head->next=pnew;
					pnew->prev=head;
					pnew->next=head;
					head->prev=pnew;
				}
				else{
					pthis=head->prev;
					head->prev=pnew;
					pnew->next=head;
					pthis->next=pnew;
					pnew->prev=pthis;
				}
				display();
				break;
			}
			case 3:{
				if(head->next==head){
					cout<<"list is empty !!";
				}
				else{
					pthis=head->next->next;
					cout<<"the deleted item is "<<head->next->data<<endl;
					free(head->next);
					head->next=pthis;
					pthis->prev=head;
				}
				display();
				break;
			}
		}
	}
}
