
#include<iostream>

using namespace std;

class B; //boliraako xu
class A{
    int real,img;
    public:
        void set(int a, int b){
            real=a;
            img=b;
        }
        void display(){
        	cout<<real<<" i+ "<<img;
		}
        friend void add(A,B);
    };
    
class B{
    int real,img;
    public:
        void set(int a, int b){
            real=a;
            img=b;
        }
        void display();
        friend void add(A,B);
    };
    
  	void add(A a,B b){
        a.real+=b.real;
        a.img+=b.img;
        a.display();     
       
    }
    int main()
    {
        A a;
        B b;
        a.set(2,3);
		b.set(3,4);
		add(a,b); 
	 	
    }
