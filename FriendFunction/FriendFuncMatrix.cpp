#include<iostream>
using namespace std;

int i,j;


class matrix
{
static int r,c;
    int a[4][4];
    
    public:
        void setrc(){
        	cout<<"enter row and colum\n";
            cin>>r>>c;
        }
        
        void set(){
            cout<<"enter the values for matrix : \n";
            for(i=0;i<c;i++){
            	for(j=0;j<r;j++)
            	{
                	cin>>a[i][j];
                	}    
            	}
        	}
        	
    friend matrix operator+(matrix m1 ,matrix m2){
    matrix m3;
    	for(i=0;i<c;i++){
            for(j=0;j<r;j++)
            		{
                m3.a[i][j]=m1.a[i][j]+m2.a[i][j];
            	}
			}
            return(m3);
		}
        void display()
        {
            for(i=0;i<c;i++){
            	for(j=0;j<r;j++)
            	{
                cout<<a[i][j]<<"\t";
        	}
        cout<<"\n";
        }
}
};
int matrix::r;
int matrix::c;

            int main(){
                matrix m1,m2,m3;
                
                m1.setrc();
                m1.set();
                m2.set();
                m3=m1+m2;
                m3.display();
            }
