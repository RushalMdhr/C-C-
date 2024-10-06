#include<iostream>
using namespace std;

namespace Name1{
	int m=1,n=2;
}
namespace Name2{
	int m=2,n=3;
}

int main(){
	using namespace Name1;	//directives
	cout<<"m = "<<m<<"\tn = "<<n<<endl;
	using Name2 :: m;
	using Name2 :: n;		//declaration
	cout<<"m = "<<m<<"\tn = "<<n<<endl;
	
}
