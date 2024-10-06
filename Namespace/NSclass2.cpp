#include<iostream>
using namespace std;

namespace A{
	class A{
		public:
			int a=1;
	};
}

namespace B{
	class A{
		public:
			int a=2;
	};
}

int main(){
	using namespace A;
	A :: A A1;
	cout<<A1.a;
	using namespace B;
	B::A A2;
	cout<<A2.a;
}
