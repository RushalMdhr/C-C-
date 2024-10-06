#include<iostream>

using namespace std;

//class vector2;

class vector{
	int i,j,k;
	public:
		vector(){
			i=0;j=0;k=0;
		}
		vector(vector2 v2,int b,int c){
			i=v2.i;j=b;k=c;
		}
		
		mul(int a){
			i*=a;
			j*=a;
			k*=a;
		}
		
		~vector(){
			cout<<"\ni= "<<i<<"\ti= "<<j<<"\tk= "<<k;
		}
};

class vector2: public vector{
	public:
		vector2(int a){
			i=a;
		}
};

int main(){
	vector2 v2(2);
	vector v(v2,2,3);
//	v.mul(2);

}
