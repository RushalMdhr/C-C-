#include<iostream>
#include<fstream>
using namespace std;

class student{
    int roll;
    char name[20];
    int marks;
    public:
        void get(){
            cout<<"enter name";
            cin>>name;
            cout<<"roll";
            cin>>roll;
            cout<<"marks";
            cin>>marks;
        }
        
        void put(){
            cout<<name<<"\t"<<roll<<"\t"<<marks<<"\n";
        }
        float getmark(){
                return (marks);
        }
};
int main()
{
    int n,i,j,temp;
    student s[10],m;
    
    fstream finout;
    finout.open("student.txt",ios::in|ios::out);
    
    cout<<"enter the number of students";
    cin>>n;
    
    //taking input from the user
    for(i=0;i<n;i++){
        s[i].get();
    }
    
    //ascending order managing
    for(i=0;i<n-1;i++){
    	for(j=i+1;j<n;j++){
    		if(s[i].getmark()>s[j].getmark()){	// 2 1 3
        		m=s[i];
        		s[i]=s[j];
        		s[j]=m;
			}
    	
    }
	}
    
    //writing in the file.
    for(i=0;i<n;i++){
        finout.write((char*)&s[i],sizeof(s[i]));
		}
	
	for(i=0;i<n;i++){
		cout<<"\n\n reading and displaying from the file \n";
		finout.read((char*)&s[i],sizeof(s[i]));	
		s[i].put();
	}
	
	
    
    
}
