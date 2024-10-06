#include<iostream>

using namespace std;
static int count=0;
class contdest{
	
	public:
		contdest(){
			cout<<"Object created = "<<count++<<endl;
		}
		
		~contdest(){
			cout<<"\nObject Destroyed = "<<--count;
		}
};

int main(){
	cout<<"\nMAIN BLOCK\n";
	
	contdest a,b,c;
	{
	cout<<"\n Block 1\n";
	contdest d;
	}
	cout<<"\nAgain main Block\n";
	{
	contdest e;	
	}
	
	cout<<"\nEnds Here\n";
	
}
