#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main(){
	int hr,min,sec;
	time_t curtime = time(NULL);
	struct tm* timein = localtime(&curtime);
	
		min=timein->tm_min;
//		sec=timein->tm_sec;
//		cout<<min<<endl;
//		if(min == 46){
//			cout<<"---Alert---";
//		}
//		else{
//			cout<<60-sec<<" seconds left";
//		}
		while(min!=48){
			min=timein->tm_min;
			sec=timein->tm_sec;
			system("CLS");
			cout<<60-sec<<" seconds left";
		}
		cout<<"---Alert---";
}
