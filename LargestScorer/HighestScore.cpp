#include<iostream>
#include<fstream>
using namespace std;

class student{
    int roll;
    char name[20];
    int marks;
    public:
        void get(){
            cin>>name;
            cin>>roll;
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
    int n,i,j;
    student s1,m;
    
    fstream fio;
    fio.open("student.txt",ios::out);
    
    cout<<"enter the number of students";
    cin>>n;
	
	float large=0;	
	for(i=0;i<n;i++){
		s1.get();
        if(large<s1.getmark()){
        	large=s1.getmark();
        	m=s1;
		}
	}
	
	cout<<"the highest score :";
	fio.write((char*)&m,sizeof(m));	
	fio.read((char*)&m,sizeof(m));
	m.put();
		
		fio.close();   
}
