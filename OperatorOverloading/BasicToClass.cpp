#include<iostream>
using namespace std;

class B;
class A{
	int x,y;
	public:
		A(int a,int b){
			x=a;
			y=b;
		}
		
		operator B(){
			B B1(i,j);
			return(B1);
		}
		
		void display(){
			cout<<x<<y<<endl;
		}
		int getx(){
			return x;
		}
		
		int gety(){
			return y;
		}
};

class B{
	int x,y;
	public:
		B(int a,int b){
			x=a;y=b;
		}
		
		void display(){
			cout<<x<<y<<endl;
		}
};

int main(){
	A A1(2,3);
	B B1;
	B1=A1;
	A1.display();
	B1.display();
}





