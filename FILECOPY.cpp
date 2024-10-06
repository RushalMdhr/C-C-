#include<iostream>
#include<fstream> 
using namespace std; 

int main(){
	char ch;
	int count;
	
	cin.get(ch);
	while(ch!='\n'){
		if(ch=='A'|ch=='E'){
			count++;
		}
		cin.get(ch);
	}
	cout<<count;
}
