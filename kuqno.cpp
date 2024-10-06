#include<iostream>
using namespace std;

class rectangle{
	int width,height;
	public:
		
	rectangle(int a=0,int b=0){
		width=a;
		height=b;
	}
	
	rectangle operator-(rectangle r2){
		rectangle r3;
		r3.width=width-r2.width;
		r3.height=height-r2.height;
		return r3;
	}
	
	void display(){
		cout<<"width : "<<width<<"\theight : "<<height<<endl;
	}
};

//rectangle operator+

int main(){
	rectangle r1(30,20),r2(10,20);
	
	rectangle r3=r1-r2;
	r3.display();
}
