//class(userdefined)----basi(builtin)

#include<iostream>
using namespace std;

class vector{
	int code,items;
	float price;
	public:
		vector(float a,int b,int c)
		{
			code=a;
			items=b;
			price=c;
		}
		
		operator float(){
			return(items*price);
		}
};

int main(){
	vector v(101,2,200.123);
	float value;
	value=v;
	cout<<"total value: "<<value;
}
