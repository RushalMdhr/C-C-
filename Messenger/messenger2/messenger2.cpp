#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class messenger{
	char name[20],address[10],password[5],filename[20],user[20];
	string check;
	public: 
	
	int getdata(){		//For Creating an account
		fstream fio;
		cout<<" ___________________________\n";
		cout<<"|please enter .txt after your name\n ";
		cout<<"|Name: ";
		cin>>name;
		fio.open("data.txt",ios::in);	//To check from file for dublicate names
		while(fio){
			while(getline(fio,check)){
			if(name==check){
				cout<<"name already exist try different name";
				return 0;
			}
			
		}
		}
		fio.close();
		cout<<"|(Password mustnot be more than 5 characters)\n";	//no dublicate name the process
		cout<<"|Password: ";
		cin>>password;
		
		fio.open("data.txt",ios::app);	//To Write the data of the person in the file
		fio<<name<<endl<<password<<endl;
		fio.close();
		fio.open(name,ios::out);	//creates the file of that name
		fio.close();
		
	}
	
	//login- case1 : choose(+book option) - case2: return(-book option) - case3 exit;
	
	//log in case
	int login(){
		fstream fio;
		char ch;
		string admin="admin.txt";
		int j=0;
		cout<<"\t----Log In----\n";
		cout<<"UserName: ";			
		cin>>user;
		
		fio.open("data.txt",ios::in);	
		while(fio){
			while(getline(fio,check)){
			if(user==check){				//to check if theres any username like that
						getline(fio,check);
					cout<<"Password: ";	
					cin>>password;
					cout<<endl<<admin<<endl;
					if(password==check){		//if yes then write the password
						if(user==admin){		//if the user name was admin then
							cout<<"\nWelcome Admin\n";
							adminfile();
						}
						else{					//if the username wasnot admin
							cout<<"\nWelome Students\n";
						}
					}
						else{					//if the password was wrong
							cout<<"incorrect password";
						}
					}
				else{
					cout<<"Invalid User Id";
					return 0;
				}
			}
			
		}
	fio.close();
		
	}
	
	void adminfile(){
		int n;
		char c='n',ch;
		fstream fio("admin.txt",ios::in);
			while(fio){				//to show the book option available in the library
				fio.get(ch);
				while(ch!='\n'){
				cout<<ch;
				fio.get(ch);
				}
				cout<<endl;
			}
			fio.close();
			
		while(c!='y'){
			cout<<"\nworking\n";
		
			
			cout<<"_______________";
			cout<<"\n|1.Add option|\n|2.exit|\n";
			
			
			switch(n){
				case 1:{
					fio.open("admin.txt",ios::app);
					while(fio){
						cin.get(ch);
						while(ch!='\n'){
							fio.put(ch);
							cin.get(ch);
						}
					}
					break;
				}
				
				case 2:{
					break;
				}
			}
			cout<<"are you sure you want to exit?";
			cin>>ch;
		}	
		
	}
	
	void sucess(){

	}
};

//password change - login - 1 data show -2 password change -3 exit;

int main(){
	messenger m;
	char ch;
	int n;
	
	while(ch!='n'){
		cout<<"\n1.login\n2.create an account\n";
		cin>>n;
		switch(n){
			case 1:{
				m.login();
				break;
			}
			
			case 2:{
				m.getdata();
				cout<<"-----Account Successfully Created-----";
				break;
			}
			
		}
	}
	
		
}
