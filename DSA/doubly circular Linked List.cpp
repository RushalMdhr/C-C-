#include<iostream>
#include<stdlib.h>
using namespace std;

int choice;
int loc,count=0;

struct node{
	int data;
	node *next,*prev;
};
node *head=NULL,*pnew,*pthis;


void insert_beg(){
	if(head->next=head){
		head->next=pnew;
		pnew->prev=head;
		plast->next=pfirst;
	}
	else{
		pthis=head->next;
		head->next=pnew;
		pnew->prev=head;
		pthis->prev=pnew;
		pnew->next=pthis;
	}
}

void insert_end(){
	if(head->next=head){
		head->next=pnew;
		pnew->prev=head;
		plast->next=pfirst;
	}
	else{
		pnew->prev=head->prev;
		head->prev->next=pnew;
		pnew->next=head;
		head->prev=pnew;
	}
}

void delete_beg(){
	if(pfirst==NULL){
		cout<<"The list is empty";
	}
	else if(pfirst->next==pfirst){
		free(pfirst);
		pfirst=NULL;
		plast=NULL;
	}
	else{
		pfirst=pfirst->next;
		free(plast->next);
		plast->next=pfirst;
	}
}

void delete_end(){
	if(pfirst==NULL){
		cout<<"The list is empty";
	}
	else if(pfirst->next==pfirst){
		free(pfirst);
		pfirst=NULL;
		plast=NULL;
	}
	else{
		pthis=pfirst;
		while(pthis->next!=plast){
			pthis=pthis->next;
		}
		free(plast);
		plast=pthis;
		plast->next=pfirst;
	}
}

void display(){
	pthis=pfirst;
	cout<<"DISPLAY : ";
	for(int i=1;i<=count;i++){
		cout<<pthis->data<<"\t";
		pthis=pthis->next;
	}
	cout<<endl;
}

void create(){
	pnew = (node *)malloc(sizeof(node));
	cout<<"enter the data : ";
	cin>>pnew->data;
}

int main(){
	
	while(true){
//	system("CLS");
	cout<<"\n\t1.insert from beginning\n\t2.insert from end\n\t3.insert from specific\n\t";
	cout<<"4.delete from beginning\n\t2.delete from end\n\t3.delete from specific\n\t";
	
	cout<<"enter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:{
			create();
			insert_beg();
			count++;
			display();
			break;
		}
		case 2:{
			create();
			insert_end();
			count++;
			display();
			break;
		}
		case 3:{
			create();
			insert_spe();
			count++;
			display();
			break;
		}
		case 4:{
			delete_beg();
			count--;
			display();
			break;
		}
		case 5:{
			delete_end();
			count--;
			display();
			break;
		}
	}
	}
}
