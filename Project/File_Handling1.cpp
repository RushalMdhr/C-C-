#include<iostream>
#include<fstream>
#include<sstream>  
#include<string>

using namespace std;
int main()
{
    int a, i=0;
    string text, old, password1,password2, pass, name, password0, age,user,word,word1;
    string creds[2],cp[2];
    cout<< "     security system  "<<endl;
    
    cout<<"                                 "<<endl<<endl;
    cout<<"_________________________________"<<endl;
    cout<<"|         1.register            |"<<endl;
    cout<<"|         2.login               |"<<endl;
    cout<<"|         3.change password     |"<<endl;
    cout<<"|_________4.end_________________|"<<endl<<endl;
    do{
        cout<<endl<<endl;
        cout<<"enter your choice:";
        cin>>a;
        switch(a)
        {
            case 1:{
                cout<<"__________________________"<<endl<<endl;
                cout<<"|********register********|"<<endl;
                cout<<"|________________________|"<<endl;
                cout<<"please enter username:";
                cin>>name;
                cout<<"enter the password:";
                cin>>password0;
                cout<<"enter your age:";
                cin>>age;
                
                ofstream of1;
                of1.open("mrkx.txt",ios::app);
                if(of1.is_open())
                {
                    of1<<name<<"\n";
                    of1<<password0<<"\n";
                    of1<<age<<"\n";
                    cout<<"registration successful"<<endl;
                    
                                }    
                                            break;
            }
case 2:
                {
                i=0;
                cout<<"__________________________"<<endl<<endl;
                cout<<"|*********login**********|"<<endl;
                cout<<"|________________________|"<<endl<<endl;
                
                ifstream of2;
                of2.open("mrkx.txt");
                cout<<"please enter username:";
                cin>>user;
                cout<<"enter the password:";
                cin>>pass;
                
                
                if(of2.is_open())
                {
            while(!of2.eof()){
                while(getline(of2,text)){
                    istringstream iss(text);
                    iss>>word;
                    creds[i]=word;
                    i++;
                                    }
            if(user==creds[0]&&pass==creds[1]){
                cout<<"------login sucessfull------";
                cout<<endl<<endl;
                cout<<"details:"<<endl;
                
                cout<<"username:"+name<<endl;
                cout<<"password:"+pass<<endl;
                cout<<"age:"+age<<endl;
            }
            else{
                cout<<endl<<endl;
                cout<<"incorrect credentials"<<endl;
                cout<<"|    1.press 2 to login             |"<<endl;
                cout<<"|    2.press 3 to change password   |"<<endl;
                break;
            }
            }
            }
            break;
        }
        case 3:
            {
                i=0;
                cout<<"__________________________"<<endl<<endl;
                cout<<"|****change password*****|"<<endl;
                cout<<"|________________________|"<<endl<<endl;
                
                ifstream of0;
                of0.open("mrkx.txt");
                cout<<"enter the old password:";
                cin>>old;
                
                if(of0.is_open())
                {
                
            while(!of0.eof()){
            	
                while(getline(of0,text)){
                	
                    istringstream iss(text);
                    iss>>word1;
                    cp[i]=word1;
                    i++;    
            }
            
            if(old==cp[1])
            {
                of0.close();
                
                ofstream of1;
                of1.open("mrkx.txt");
                if(of1.is_open())
                {
                
                cout<<"enter the new password:";
                cin>>password1;
                cout<<"enter the new password again:";
                cin>>password2;
                
                if(password1==password2){
                    of1<<cp[0]<<"\n";
                    of1<<password1;
                    cout<<"password changed sucessfully"<<endl;
                }    
        else{
                                of1<<cp[0]<<"\n";
                                of1<<old;
                                cout<<"password donot match"<<endl;
    }                        }
                                    }
else{
    cout<<"please enter a valid password"<<endl;
    break;
}
    }
}
break;}
case 4:
    {
        cout<<"__________thankyou__________";
        break;
    }
        default:
        cout<<"enter a valid choice";
        
}
}
    while(a!=4);
    return 0;
}
