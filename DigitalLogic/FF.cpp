#include<iostream>
using namespace std;

class gates{
	
	public:
		
	int AND(int x=1,int y=1,int z=1){
		int b;
		return x*y*z;
	}
	
	int NOR(int x=0,int y=0,int z=0){
		int b;
		b= x+y+z;
		if(b>0){
			return 0;
		}
		else
		return 1;
	}
};

int main(){
	gates g1,g2;
	int s,r;
	int a,b;
	
	while(1){
	cout<<"enter 2 digits 0 or 1\n";
	cin>>s>>r;
	
	cout<<g1.NOR(g2.NOR(s),g1.AND(r,1))<<"\t"<<g2.NOR(g1.AND(s,1),g1.NOR(g2.NOR(s),r))<<endl;
	}
	
}
