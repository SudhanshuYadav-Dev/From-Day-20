#include<iostream>
using namespace std;
class B{
	public:
		int a=9;
		int b=8;
	void operator+ (B &obj){
		cout<<"Output-> "<<a-b<<endl;
	}
	void operator() (){
		cout<<"Mai braket hu"<<endl;
	}
};

int main(){
	B obj1,obj2;
	obj1+obj2;
	obj1();
}