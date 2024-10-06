#include<iostream>
using namespace std;

class b1
{
	protected:
int a;
    public:
        void seta(){
            cin>>a;
        }
};
class b2{    
public:
    int b;
    void setb(){
        cin>>b;
    }
};
class d:public b1, public b2{
    int c;
    public:
        void setc(){
            seta();
            setb();
            cin>>c;
        }
        void add(){
            cout<<a+b+c;
        }
};
int main(){
    d d1;
    d1.setc();
	d1.add();

}
