#include<iostream>
#include<fstream>
using namespace std;

class money{
    char name[20];
    int age;
    int salary;
    public:
        void set(){
            cin>>name;
            cin>>age;
            cin>>salary;
        }
        void display(){
            cout<<name<<"\n"<<age<<"\n"<<salary;
        }
        float getsalary(){
            return(salary);
        }
};
int main()
{
    int n,i;
    money s[10];
    fstream finout;
    finout.open("employee.txt",ios::out|ios::in);
    cin>>n;
    for(i=0;i<n;i++){
        s[i].set();
			finout.write((char*)&s[i],sizeof(s[i]));
            }

     
    for(i=0;i<n;i++){
			finout.read((char*)&s[i],sizeof(s[i]));
				if(s[i].getsalary()>10000){
					s[i].display(); //no neeed of m(or any other obj)
				}
            }
		finout.close();
    }

