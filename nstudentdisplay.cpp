#include<iostream>
#include<fstream>
using namespace std;

class student{
    int roll;
    char name[20];
    float marks;
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
    int n,i,j;
    student s[10],s1;
    
    fstream finout;
    finout.open("student.txt",ios::in|ios::out);
    
    cout<<"enter the number of students";
    cin>>n;
    
    for(i=0;i<n;i++){
        s[i].get();
        finout.write((char*)&s[i],sizeof(s[i]));
    }
    
    int temp;
    
    for(i=0;i<n-1;i++){
    	for(j=i+1;j<n;j++){
    		if(s[i].getmark(); < s[j].getmark();){
    			s[i]<<
			}
		}
	}
    
    
    
//    cout<<"reading data from the file";
//    finout.seekg(0,ios::beg);
//    
//        for(i=0;i<n;i++){
//        	
//        finout.read((char*)&s[i],sizeof(s[i]));
//       
//    s[i].put();
    finout.close();
//    }
    

}
