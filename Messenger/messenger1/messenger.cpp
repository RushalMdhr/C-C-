#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class messenger{
	char name[20],address[10],password[5],ch;
	int roll;
	string check,naam;
	float balance;
	public: 
	
	int getdata(){
		fstream fio;
		cout<<" _____________________________________\n";
		cout<<"|----Enter Your Personal Details----  |\n";
		cout<<"|Name: ";
		cin>>name;
		fio.open("data.txt",ios::in);
		//checking for same name--------------------------------------------
		while(fio){
			while(getline(fio,check)){
			if(name==check){
				cout<<"\tName already exist try different name\n";
				return 0;
			}	
		}
	}
		cout<<"|Address: ";
		cin>>address;
		cout<<"|Roll No: ";
		cin>>roll;
		
		cout<<"|(Password mustnot be more than 5 characters)\n|--Your User Name Will Be-- "<<name<<endl;
		cout<<"|Password: ";
		cin>>password;
		
		fio.close();
		fio.open("data.txt",ios::app);
		fio<<name<<endl<<password<<endl;
		fio.close();
		cout<<"\n-----Account Successfully Created-----\n\n";
		//calling to create account-------------------------------------------
		create();
	}
	
	
	void create(){
		//creating a file for new account---
		fstream fio;
		check=name;
		strcat(name, ".txt");
		fio.open(name,ios::out);
		fio<<check<<"\n"<<roll<<"\n"<<address<<"\n";
		fio.close();
	}
	//login- case1 : choose(+book option) - case2: return(-book option) - case3 exit;
	int login(){
		fstream fio;
		cout<<"\n|----Log In----\n";
		cout<<"|UserName: ";			
		cin>>name;
		
		//checking for names
		fio.open("data.txt",ios::in);
		while(fio){
			
		while(getline(fio,check)){
			if(name==check){
				if(check=="admin"){
					getline(fio,check);
				cout<<"Password: ";	
				cin>>password;
				
				if(password==check){
					cout<<"\n\t Log In Sucess!\n\n";
					admin();
				}
				else
				cout<<"\n\tPassword Incorrect\n";
				return 0;
			}
			else{
				getline(fio,check);
				cout<<"Password: ";	
				cin>>password;
				
				if(password==check){
					cout<<"\n\t Log In Sucess!\n\n";
					
					sucess();
				}
				else
				cout<<"\n\tPassword Incorrect\n";
				return 0;
			}
				}
			}
			cout<<"\n\t UserName Not Found !!\n";	
			return 0;
		}

	fio.close();
}
	
	int admin(){
		cout<<"\n\tWelcome Admin!\t\n";
		fstream fio("admin.txt");
		while(fio){
		fio.get(ch);
			cout<<ch;
		}
		fio.close();
		
		int n;
		
		ch='y';
		while(ch!='n'){
		cout<<"\nedit:\n\t1.Add\n\t2.delete";
		cin>>n;
		switch(n){
			case 1:{
				fio.open("admin.txt",ios::app);
				cout<<"enter the edit"; 
				cin.get(ch);
				while(ch!='\n'){
					fio<<ch;
					cin.get(ch);
				}
				fio.close();
				break;
			}
		}
		cout<<"\nwanna continue ? if not press n!\n";
		cin>>ch;
	}
		
}

	//LOG IN SUCESS-------------
	void sucess(){
		fstream fio;

		getline(fio,check);
		cout<<"hi, "<<name<<endl;
		
		//login- case1 : choose books - case2: fav. books - case3: Feedback? case 4: exit;
		cout<<"\t1.Need Books\n\t2.Your Favorite\n\t3.Feedback?\n\t4.exit.";
		int n;
		cin>>n;
		ch='y';
		while(ch!='n'){
		switch(n){
			case 1:{
				need_books();
				break;
			}
		}	
	}
}


	int need_books(){
		ifstream fin;
		fin.open("admin.txt");
		
		while(fin){
			
		}

	}
};

//password change - login - 1 data show -2 password change -3 exit;

int main(){
	messenger m;
	char ch;
	int n;
	
	while(ch!='n'){
		cout<<"\nWelcome To E Library\n\t1.login\n\t2.create an account\n\t3.Exit\n";
		cin>>n;
		switch(n){
			case 1:{
				m.login();
				break;
			}
			
			case 2:{
				m.getdata();
			
				break;
			}
			
			case 3:{
				return 0;
				break;
			}
			
		}
	}
	
		
}
