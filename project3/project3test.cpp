#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

int main(){
	
	time_t rushal = time(NULL);
	char*	xenium = ctime(&rushal);
	
	cout<<xenium; 
}
