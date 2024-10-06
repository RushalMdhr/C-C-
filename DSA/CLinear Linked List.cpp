#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
node *pnew,*pfirst=NULL,*pthis,*plast;

void insert_beg(){
	if(pfirst==NULL){
		pfirst=pnew;
		plast=pnew;
		plast->next=pnew;
	}
}

void create(){
	pnew = (node *)malloc(sizeof(node));
	cout<<"new data : ";
	cin>>pnew->data;
}

int main(){
	while(1){
		cout<<"\n\t1.insert from the beginning";
		cout<<"\n\t2.insert from the end";
		cout<<"\n\t3.insert from any specific loaction";
		cout<<"\n\t4.delete from the beginning";
		cout<<"\n\t5.delete from the end";
		cout<<"\n\t6.delete from any specific loaction";
		cout<<"\n\t7.Exit";
		cout<<"\n\tEnter your choice : ";
		cin>>n;
		switch(n){
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
			case 6:{
				delete_spe();
				count--;
				display();
				break;
			}
			case 7:{
				exit(1);
				break;
			}
		}
	}
}
