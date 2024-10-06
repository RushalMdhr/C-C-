#include<iostream>
#include<fstream>
using namespace std;

class Account{
	char name[20],password[5];
	public:
		fstream fio;
	void getdata(){
		cout<<"name: ";
		cin>>name;
		cout<<"password: ";
		cin>>password;
	}
	
	char* getname(){
		return name;
	}
	
	void show(){
		cout<<name<<endl<<password<<endl;
	}
	
	int change(){
		cout<<"your username: ";
		cin>>name;
		cout<<"new Password: ";
		cin>>password;
	}
	
	int login(){
		cout<<"\n\t---LOG IN---\n";
		cout<<"Enter User Name: ";
		cin>>name;
		cout<<"Password: ";
		cin>>password;
		
//		while(fio){
//		fio.read((char*)&a,sizeof(a));
//		if(name==a.name){
//			cout<<"Password: ";
//			cin>>password;
//			fio.read((char*)&a,sizeof(a));
//			if(a.password==password){
//				cout<<"\n\t---LOG IN SUCESS---\n";
//			}
//			else{
//				cout<<"\n-Incorrect Password\n";
//				return 0;
//			}
//		}
//		else{
//			cout<<"\n-USER NOT FOUND\n";
//			return 0;
//		}
//	}
		
		fio.close();
	}
	
	
	
};

int main(){
	Account m,m1;
	char ch;
	int n;
	fstream fio;
	
	while(ch!='n'){
		cout<<"\nWelcome To Accounts\n\t1.login\n\t2.create an account\n\t3.Change Password\n\t4.Exit\n";
		cin>>n;
		switch(n){
			case 1:{
				m.getdata();
				fio.open("data.txt",ios::in);
				Account a;
				while(fio){
					fio.read((char*)&a,sizeof(a));
					if(a.getname()==m.getname()){
						cout<<"user found\n";
					}
				}
				break;
			}
			
			case 2:{
				m.getdata();
				fio.open("data.txt",ios::in|ios::app);
				fio.write((char*)&m,sizeof(m));
				
				m.show();
				fio.close();
				break;
			}

			
			case 3:{
				fio.open("data.txt");
				m1.change();
				
				cout<<m1.getname();
				while(fio){
				fio.read((char*)&m,sizeof(m));
					if(m.getname()==m1.getname()){
						m.show();	
					}
					else{
						cout<<m1.getname()<<endl;
						m1.show();
						cout<<"Loading...\n";
					}
				}
				
				break;
			}
			
			case 4:{
				return 0;
				break;
			}
			
		}
	}
}

		
