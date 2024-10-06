#include<iostream>
using namespace std;

class contdest{
	public:
	contdest(){
		cout<<"\nObject Created = "<<count++;
	}
	~contdest(){
		cout<<"\nObject Destroyed"
	}
	
};



void complex :: add(complex c2){
	img+=c2.img;
	real+=c2.real;
	
}

int main(){
	
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	complex c1(a,b),c2(x,y);
	
	c1.display();
	c2.display();
	c1.add(c2);
	c1.display();
	c2.display();
}
