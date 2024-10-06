#include<iostream>
using namespace std;

class A{
	int i,j;
	char a[3][3];
	int e;
	public:
		void show(){
			int b=48;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					b++;
					a[i][j]=b;
					cout<<" "<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		
		int play(int n){
			system("CLS");
			int b=0;
			while(n>3){
				n-=3;
				b++;
			}
			
			n-=1;
			if(e%2==0){
			a[b][n]='O';
			}
			else{
			a[b][n]='X';		
			}
			e++;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					
					cout<<" "<<a[i][j]<<" ";
				}
				cout<<endl;
			}
				

			
		}
	
};

int main(){
	A a1;
	int n;
	a1.show();
	
	while(1){
	cin>>n;
	a1.play(n);
	}
	
//	cout<<" 1 | 2 | 3 \n";
//	cout<<"---|---|---\n";
//	cout<<" 4 | 5 | 6 \n";
//	cout<<"---|---|---\n";
//	cout<<" 7 | 8 | 9 \n";
	
	

}
