//binary search tree

#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *lchild,*rchild;
};
node *root=NULL,*pthis,*ppthis,*pnew;

void create(){
	pnew = (node *)malloc(sizeof(node));
	cout<<"enter the data : ";
	cin>>pnew->data;
}
void insert(){
	if(root==NULL){
		root=pnew;
		root->lchild=NULL;
		root->rchild=NULL;
	}
	else{
		pthis=root;
		while(pthis!=NULL){
			ppthis=pthis;
			if(pnew->data<pthis->data){
				pthis=pthis->lchild;
				if(pthis=NULL){
					ppthis->lchild=pnew;
				}
			}
			else if(pnew->data>pthis->data){
				pthis=pthis->rchild;
				if(pthis=NULL){
					ppthis->rchild=pnew;
				}
			}
			else{
				cout<<"duplicate value \n";
				exit(1);
			}
		}
	}
}

void search(){
	pthis=root;
		while(pthis!=NULL){
			if(pnew->data<pthis->data){
				pthis=pthis->lchild;
			}
			else if(pnew->data>pthis->data){
				pthis=pthis->rchild;
			}
			else{
				cout<<"data found !!\n";
			}
		}
		if(pthis==NULL){
			cout<<"data not found\n";
		}
}

int main(){
	int n;
	cout<<"enter how many data to store : ";
	cin>>n;
	for(int i=0;i<n;i++){
		create();
		insert();
	}
	int choice;
	while(1){
		cin>>choice;
		cout<<"1.search\nenter your choice : ";
		switch(choice){
			case 1:{
				create();
				search();
				break;
			}
		}
	}
}
