#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char ch;
	static int count;
	ofstream fout;
	cout<<count;
	fout.open("Vowel.txt");
	cin.get(ch);
	while(ch!='\n'){
		fout<<ch;
		cin.get(ch);
	}
	fout.close();
	
	ifstream fin("vowel.txt");
	while(fin){
		if(ch=='a'|ch=='e'|ch=='i'|ch=='o'|ch=='u'|ch=='A'|ch=='E'|ch=='I'|ch=='O'|ch=='U'){
					count++;
			}
		fin.get(ch);
	}
	cout<<count;
}

