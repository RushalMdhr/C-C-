#include<iostream>
using namespace std;
#include<stdlib.h>

int count=0,loc;
struct node{
	int data;
	node *next;
};
node *pnew,*pthis,*ptemp;;
node *pfirst=NULL;

		//INSETING  BEGINNING
void insert_beg(){
	if(pfirst==NULL){
		pfirst=pnew;
		pnew->next=NULL;
	}
	else{
		pnew->next=pfirst;
		pfirst=pnew;
	}
}

		//INSETING  END
void insert_end(){
	if(pfirst==NULL){
		pfirst=pnew;
		pnew->next=NULL;
	}
	else{
		pthis=pfirst;
		while(pthis->next!=NULL){
			pthis=pthis->next;
		}
		pthis->next=pnew;
		pnew->next=NULL;
	}
}

		//INSETING  SPECIFIC
void insert_spe(){
	if(pfirst==NULL){
		cout<<"list created!!!\n";
		pfirst=pnew;
		pnew->next=NULL;
	}
	else{
		cout<<"list count : "<<count<<endl;
		cout<<"enter the location to insert : ";
		cin>>loc;
		if(loc<=count){
			
		cout<<"before it or after it (1/0) : ";
		int i;
		cin>>i;
		switch(i){
			case 1:{//before
				pthis=pfirst;
				if(loc==1){
					insert_beg();
				}
				else{
				for(int i=1;i<loc-1;i++){
					pthis=pthis->next;
				}
				ptemp=pthis->next;
				pthis->next=pnew;
				pnew->next=ptemp;
				
				}
				break;
			}
			case 0:{		//after
			pthis=pfirst;
			for(int i=1;i<=loc;i++){
				pthis=pthis->next;
			}
			ptemp=pthis->next;
			pthis->next=pnew;
			pnew->next=ptemp;
			break;
				}//end case
			}//end switch
		}//end else
	else{
		cout<<"No list no. found!!!";
		}
	}
}
		//DELETING BEGINNING
void delete_beg(){
	if(pfirst==NULL){
		cout<<"list is empty!!!";
	}
	else{
		pthis=pfirst->next;
		cout<<"deleted data is : "<<pfirst->data<<endl;
		free(pfirst);
		pfirst=pthis;
	}
}
		//DELETING END
void delete_end(){
	
	if(pfirst==NULL){
		cout<<"list is empty!!!\n";
	}
	else{
	pthis=pfirst;
	while(pthis->next->next!=NULL){
		pthis=pthis->next;
	}
	cout<<"deleted data is : "<<pthis->next->data<<endl;
	free(pthis->next);
	pthis->next=NULL;
	}
}
		//DELETING SPECIFIC
void delete_spe(){
	if(pfirst==NULL){
		cout<<"list is empty!!!\n";
	}
	else if(pfirst->next==NULL){
		delete_beg();
	}
	else{
		cout<<"list count : "<<count<<endl;
		cout<<"enter the location to insert : ";
		cin>>loc;
	if(loc<=count){
		if(loc==1){
			delete_beg();
			}
		else if(loc==count){
			delete_end();
			}
			
		else{		
			int i;
			pthis=pfirst;
				for(int i=1;i<loc-1;i++){
					pthis=pthis->next;
				}
				ptemp=pthis->next->next;
				cout<<"deleted data is : "<<pthis->next->data<<endl;
				free(pthis->next);
				pthis->next=ptemp;
		}//end else
	}//end loc<=count
else{
	cout<<"No list no. found!!!";
	}
}
}
		//GETTING DATA
void create(){
	pnew = (node *)malloc(sizeof(node));
	cout<<"enter the data : ";
	cin>>pnew->data;
}
		//DISPLAY
void display(){
	pthis=pfirst;
	cout<<"display : "<<pthis->data<<"\t";
	while(pthis->next!=NULL){
		pthis=pthis->next;
		cout<<pthis->data<<"\t";
	}
}

int main(){
	int n;
	
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
