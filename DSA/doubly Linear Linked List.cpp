#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *next, *prev;
};
node *pthis, *pnew, *pfirst=NULL, *plast, *ptemp;

int count =0;

void insert_beg(){
	
	if(pfirst==NULL){
		pfirst=pnew;
		plast=pnew;
		pfirst->next=NULL;
		pfirst->prev=NULL;
	}
	else{
		pnew->next=pfirst;
		pfirst->prev=pnew;
		pnew->prev=NULL;
		pfirst=pnew;
	}
	
}

void insert_end(){
	if(pfirst==NULL){
		pfirst=pnew;
		plast=pnew;
		pfirst->next=NULL;
		pfirst->prev=NULL;
	}
	else{
		plast->next=pnew;
		pnew->prev=plast;
		pnew->next=NULL;
		plast=pnew;
	}	
}

void delete_beg(){
	if(pfirst==NULL){
		cout<<"list is empty\n";
	}
	else if(pfirst->next==NULL){
		free(pfirst);
		pfirst=NULL;
		plast=NULL;
	}
	else{
		pthis=pfirst;
		pfirst=pfirst->next;
		cout<<"deleted item : "<<pthis->data<<endl;
		free(pthis);
		pfirst->prev=NULL;
	}
}

void delete_end(){
	if(pfirst==NULL){
		cout<<"list is empty\n";
	}
	else if(pfirst->next==NULL){
		free(pfirst);
		pfirst=NULL;
		plast=NULL;
	}
	else{
		pthis=plast;
		plast=plast->prev;
		cout<<"deleted item : "<<pthis->data<<endl;
		free(pthis);
		plast->next=NULL;
	}
}


//
//void insert_spe(){
//	cout<<"enter the loc : ";
//	cin>>loc;	
//	if(loc>count){
//		cout<<"no node found!\n";
//	}
//	else{
//		cout<<"enter before or after 1/0";
//		cin>>n;
//		switch(n){
//			case 1:{
//				if(loc==1){
//					insert_beg();
//				}
//				else{
//					pthis=pfirst;
//					for(int i=1;i<loc-1;i++){
//						pthis=pthis->next;
//					}
//					ptemp=pthis->next;
//					ptemp->prev=pnew;
//					pnew->next=ptemp;
//					pnew->prev=pthis;
//					pthis->next=pnew;
//				}
//				break;
//			}
//			case 0:{
//				pthis=pfirst;
//				for(int i=1;i<=loc-1;i++){
//					pthis=pthis->next;
//				}
//					ptemp=pthis->next;
//					ptemp->prev=pnew;
//					pnew->next=ptemp;
//					pnew->prev=pthis;
//					pthis->next=pnew;
//				break;
//				}
//		}
//	}
//}
//
//void delete_spe(){
//	cout<<"enter the loc : ";
//	cin>>loc;
//	if(loc>count){
//		cout<<"no node found!\n";
//	}
//	else{
//		for(int i=1;i<loc-1;i++){
//			pthis=pthis->next;
//		}
//		ptemp=pthis->next->next;
//		cout<<"deleted data is : "<<ptemp->prev->data<<"\t"<<pthis->next->data<<endl;
//		free(ptemp->prev);
//		free(pthis->next);
//		ptemp->prev=pthis;
//		pthis->next=ptemp;
//	}
//	
//}

void create(){
	pnew = (node *)malloc(sizeof(node));
	cout<<"enter the data: ";
	cin>>pnew->data;
}

void display(){
	cout<<"DISPLAY : ";
	pthis=pfirst;
	while(pthis->next!=NULL){
	cout<<pthis->data<<"\t";
	pthis=pthis->next;
	}
	cout<<pthis->data<<endl;
}


int main(){
	int n;
	while(1){
	cout<<"\n\t1.insert beginning\n\t2.insert end\n\t3.delete beginning\n\t4.delete end\n\t";
	cout<<"enter choice : ";
	cin>>n;
	switch(n){
		case 1:{
			create();
			insert_beg();
			display();
			count++;	
			break;
		}
		case 2:{
			create();
			insert_end();
			display();
			count++;
			break;
		}
		case 3:{
			delete_beg();
			display();
			count--;
			break;
		}
		case 4:{
			delete_end();
			display();
			count--;
			break;
		}
		
		}
	}
}
