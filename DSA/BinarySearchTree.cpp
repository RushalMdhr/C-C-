#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    node *lchild,*rchild;
};
node *root=NULL,*pnew,*pthis,*ppthis;

void insert(){
    if(root==NULL){
        root=pnew;
    }
    else{
        pthis=root;
        while(pthis!=NULL){
            ppthis=pthis;
            if(pnew->data<pthis->data){
                pthis=pthis->lchild;
                if(pthis==NULL){
                    ppthis->lchild=pnew;
                }
            }
            else if(pnew->data>pthis->data){
                pthis=pthis->rchild;
                if(pthis==NULL){
                    ppthis->rchild=pnew;
                }
            }
        else{
            cout<<"DUPLICATE NODE\n\t";
            exit(1);
        }
       }
    }
}

void create(){
    pnew=(node*)malloc(sizeof(node));
    cout<<"enter the data : ";
    cin>>pnew->data;
    pnew->lchild=NULL;
    pnew->rchild=NULL;
}

void preorder(node *p){
    if(p!=NULL){
        cout<<p->data<<"\t";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<"\t";
        inorder(p->rchild);
    }
}

void postorder(node *p){
    if(p!=NULL){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<"\t";
    }
}

void search(){
    if(root==NULL){
        cout<<"tree is empty";
    }
    else{
        pthis=root;
        while(pthis!=NULL){
// cout<<pthis->data;
            if(pnew->data<pthis->data){
                pthis=pthis->lchild;
            }
            else if(pnew->data>pthis->data){
                pthis=pthis->rchild;
            }
            else{
                cout<<"data is found and exit ie. : "<<pthis->data;
                break;
            }
        }
        if(pthis==NULL){
            cout<<"data not found\n";
        }
    }
}

int main(){
    int n;
    int dat;
    cout<<"how many data : ";
    cin>>dat;
    for(int i=0;i<dat;i++){
        create();
        insert();
    }
    while(1){
        cout<<"\n\t1.preorder traverse\n\t2.inorder\n\t3.postorder\n\tenter your choice: ";
        cin>>n;
        switch(n){
            case 1:{
                cout<<"DISPLAY : ";
                pthis=root;
                preorder(pthis);
                break;
            }
            case 2:{
                pthis=root;
                cout<<"DISPLAY : ";
                inorder(pthis);
                break;
            }
            case 3:{
                pthis=root;
                cout<<"DISPLAY : ";
                postorder(pthis);
                break;
            }
            case 4:{
                create();
                search();
                break;
            }
        }
    }
}
