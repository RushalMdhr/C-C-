#include<iostream>
#include<fstream>
#include <iomanip>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;

class messenger{
	char name[20],program[10],password[5],ch;
	int roll;
	string check,book,books[10],name2;
	float balance;
	public: 
	
	int getdata(){
		fstream fio;
		cout<<"\n\t\t\t----Enter Your Personal Details---- \n\n";
		cout<<"UserName: ";
		cin>>name;
		fio.open("data.txt",ios::in);
		//checking for same name--------------------------------------------
		while(fio){
			while(getline(fio,check)){
			if(name==check){
				cout<<"\n\t--Name already exist try different name--\n\n";
				return 0;
			}	
		}
	}
		cout<<"Program: ";
		cin>>program;
		
		cout<<"Roll No: ";
		cin>>roll;
		
		cout<<"\n\t---Password mustnot be more than 5 characters---\n\t--Your User Name Will Be: "<<name<<"---\n\n";
		cout<<"Password: ";
		cin>>password;
		
		fio.close();
		fio.open("data.txt",ios::app);
		fio<<name<<endl<<password<<endl;
		fio.close();
		system("CLS");
		cout<<"\n\t-----Account Successfully Created-----\n\n";
		//calling to create account-------------------------------------------
		create();
	}
	
	
	void create(){
		//creating a file for new account---
		fstream fio;
		check=name;
		strcat(name, ".txt");
		fio.open(name,ios::out);
		fio<<check<<"\n"<<roll<<"\n"<<program<<"\n";
		fio.close();
	}

	//login- case1 : choose(+book option) - case2: return(-book option) - case3 exit;
	int login(){
		int n=0;
		fstream fio;
		cout<<"\t\t\t+----------+\n";
    	cout<<"\t\t\t|   Login  |\n";
    	cout<<"\t\t\t+----------+\n\n";
    	
		cout<<"UserName: ";			
		cin>>name;
		
		//checking for names
		fio.open("data.txt",ios::in);
	while(fio){
		
		while(getline(fio,check)){
			if(name==check){
				cout<<"Password: ";
				
			//making password hidden___________________________________	
				while((ch=getch())!=13){
    			if(ch==8 && n>0){
    				cout << "\b \b";
    				n--;
				}

				else if(n<10){
					password[n++]=ch;
					cout<<'*';
					}
				}
				password[n]='\0';
				getline(fio,check);
				
				if(password==check){
					system("CLS");
					cout<<"\n"<<setw(60)<<"---LOGIN SUCESS---\n";
					check="admin";
					if(name==check){
						admin();
						return 0;
					}
					
					else{	
					sucess();
					return 0;
					}
				}
				else{	
				system("CLS");
				cout<<"\n"<<setw(60)<<"---INCORRECT PASSWORD---\n";
				getch();
				system("CLS");
				return 0;
				}
				
			}
		}
			system("CLS");
			cout<<"\n"<<setw(60)<<"---USER NOT FOUND---\n";
			getch();
			system("CLS");
			return 0;
	}
	fio.close();
}
	
	//LOG IN SUCESS-------------
	int sucess(){
	cout<<"\n\t-Hello, "<<name<<endl<<endl;
	
	name2=name;
	fstream fio;
	
	int n;
	while(1){
		cout << "+----------------------+ +---------------+ +------------------+ +------------+\n";
        cout << "| 1. Show Notification | | 2. My Profile | | 3. Book Checkout | | 4. Log Out |\n";
        cout << "+----------------------+ +---------------+ +------------------+ +------------+\n";
	cin>>n;
	switch(n){
		case 1:{
			fio.open("information.txt",ios::in);
		cout<<"\t\t\t+-------------+\n";
    	cout<<"\t\t\t| FROM ADMIN: |\n";
    	cout<<"\t\t\t+-------------+\n\n";
			while(getline(fio,check)){
				cout<<check<<endl;
			}
			fio.close();
			break;
		}
		
		case 2:{
		cout<<"\t\t\t+-------------+\n";
    	cout<<"\t\t\t|  MY PROFILO |\n";
    	cout<<"\t\t\t+-------------+\n\n";
			strcat(name, ".txt");
			fio.open(name,ios::in);
			while(getline(fio,check)){
				cout<<check<<endl;
			}
			fio.close();
			break;
		}
		case 3:{
		cout<<"\t\t\t+-----------------+\n";
    	cout<<"\t\t\t| AVAILABLE BOOKS |\n";
    	cout<<"\t\t\t+-----------------+\n\n";
    	cout<<setw(27)<<"+-----------------+\n";
			fio.open("books.txt",ios::in);
			int i=1;
			getline(fio,book);
			while(fio){
				cout<<setw(10)<<"| "<<i<<"."<<book<<endl;
				getline(fio,book);
				i++;	
			}
			fio.close();
		cout<<setw(27)<<"+-----------------+\n";
			
		cout<<"\t\t\t+----------------------------+\n";
    	cout<<"\t\t\t|  CHOOSE THE BOOK YOU LIKE: |\n";
    	cout<<"\t\t\t|     Press 0 To Exit:       |\n";
    	cout<<"\t\t\t+----------------------------+\n\n";
			fio.open("books.txt",ios::in);
				
			int n=1,a=0;
			while(n!=0){	
				cin>>n;
				cout<<"\nTaking:\t";
				fio.seekp(0,ios::beg);
				book='\0';
				for(int i=0;i<n;i++){
					getline(fio,book);
				}
				books[a]=book;
				for(int i=0;i<a;i++){
					if(books[a]==books[i]){
						cout<<"you cant take same books!!\n";
						a--;
					}
				}
				a++;
				cout<<book<<endl;
				cout<<"____________________NEXT CHOICE :  ";
			}
			fio.close();
			cout<<endl;
			
			time_t curtime = time(NULL);
			char* timeinfo = ctime(&curtime);
//			tm* timeinfo = local time(&curtime);  FOR SEPERATLY TAKEING THE TIMES IN SEC MIN HR DAYS MONTHS
			fio.open("booknoti.txt",ios::app);
			for(int i=0;i<a-1;i++){
				fio<<name2<<" took: "<<books[i]<<" on "<<timeinfo<<endl;
			}
			break;
		}
		case 4:{
			system("CLS");
			cout<<"\n"<<setw(60)<<"---LOGED OUT---\n";
			return 0;
			break;
			}
		}
		
	}
}

	int admin(){
		int n;
		cout<<setw(60)<<"+-------------------------+\n";
    	cout<<setw(60)<<"|      WELCOME ADMIN      |\n";
    	cout<<setw(61)<<"+-------------------------+\n\n";
		while(1){
			
	fstream fio;
	
	cout << "+---------------------+  +------------------------+  +------------------+  +------------+\n";
    cout << "| 1. List Of Students |  | 2. Provide Information |  | 3. Show Booklist |  | 4. Log Out |\n";
    cout << "+---------------------+  +------------------------+  +------------------+  +------------+\n";
		
		cin>>n;
		switch(n){
			case 1:{
					cout<<"\t\t\t+------------------+\n";
    				cout<<"\t\t\t| LIST OF STUDENTS |\n";
    				cout<<"\t\t\t+------------------+\n\n";
				fio.open("data.txt",ios::in);
					int i=1;
					getline(fio,check);
				while(fio){
					cout<<i<<".    Name: "<<check<<endl;
					getline(fio,check);
					cout<<"  Password: "<<check<<endl<<endl;
					getline(fio,check);
					i++;
				}
				break;
				fio.close();
			}
			
			case 2:{
					cout<<"\t\t\t+-----------------+\n";
    				cout<<"\t\t\t|    NEW NOTICE   |\n";
    				cout<<"\t\t\t+-----------------+\n\n";
				
				fio.open("information.txt",ios::out);
				cout<<"Msg: ";
				
				cin.clear(); // Clear any error flags
				cin.ignore(INT_MAX, '\n'); // Ignore characters in the buffer until a newline is encountered
				
				fio<<"\nFrom Admin: ";
				
				cin.get(ch);
				while(ch!='\n'){
					fio.put(ch);
					cin.get(ch);
				}
				fio.close();
				
				break;
			}
			
			case 3:{
				
					cout<<"\t\t\t+---------------------+\n";
    				cout<<"\t\t\t| LIBRARY INFORMATION |\n";
    				cout<<"\t\t\t+---------------------+\n\n";
				fio.open("BookNoti.txt",ios::in);
				while(fio){
					getline(fio,book);
					cout<<book<<endl;
				}
				fio.close();
				cout<<"Want to clear the Notificatios ? y/n";
				cin>>ch;
				if(ch=='y'){
					fio.open("BookNoti.txt",ios::out);
					fio.close();
					cout<<"\n\tCLEARED--\n";
				}
				else{
					cout<<"\n\tOkay\n";
					
				}
				break;
			}
			
			case 4:{
				system("CLS");
				cout<<"\n"<<setw(60)<<"---LOGED OUT---\n";
				return 0;
				break;
			}
		}
		}
		
	}

	int change(){
		cout<<"\t\t\t+---------------------+\n";
    	cout<<"\t\t\t|  CHANGING PASSWORD  |\n";
 		cout<<"\t\t\t+---------------------+\n\n";
 		cout<<"UserName: ";
		cin>>name;
		fstream fio;
		fio.open("data.txt");
		while(name!=check){
		getline(fio,check);
		}
	int n = fio.tellp();
		if(name==check){
		cout<<"Please Enter The Old Password: ";
		cin>>password;	
		getline(fio,check);
		if(password==check){
			cout<<"Enter New Password: ";
			cin>>password;
			cout<<"Re Enter Password: ";
			cin>>check;
			if(password==check){
				fio.seekp(n-1,ios::beg);
				fio<<password;
				system("CLS");
				cout<<"\n"<<setw(65)<<"---PASSWORD CHANGED SUCESSFULLY---\n";
			}
				}				
		else{
			cout<<"\n\tIncorrect password\n";
			return 0;
				}
						
		}			
	}
	
};

//password change - login - 1 data show -2 password change -3 exit;

int main(){
	messenger m;
	char ch;
	int n;
	
	while(1){
	cout <<"\t\t\t***************************************************\n";
    cout <<"\t\t\t*                   Welcome To                    *\n";
    cout <<"\t\t\t*                 StudentBookShelf                *\n";
    cout <<"\t\t\t***************************************************\n\n";

	cout <<"\t\t+----------+  +----------------------+  +--------------------+  +--------+\n";
    cout <<"\t\t| 1. Login |  | 2. Create an Account |  | 3. Change Password |  |4. Exit |\n";
    cout <<"\t\t+----------+  +----------------------+  +--------------------+  +--------+\n";
		cin>>n;
		switch(n){
			case 1:{
				system("CLS");
				m.login();
				break;
			}
			
			case 2:{
				system("CLS");
				m.getdata();
			
				break;
			}
			
			case 3:{
				system("CLS");
				m.change();
				break;
			}
			
			case 4:{
				system("CLS");
				cout<<"\t\t\t+---------------------+\n";
    			cout<<"\t\t\t|   HAVE A GREAT DAY  |\n";
    			cout<<"\t\t\t+---------------------+\n\n";
				return 0;
				break;
			}
			
		}
	}	
}
