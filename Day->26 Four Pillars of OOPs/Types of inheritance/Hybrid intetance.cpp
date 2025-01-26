#include<iostream>
using namespace std;

//Hierarchical inheritance
class A{
	public:
		void display(){
			cout<<"It's Class A :";
		}
};
class B: public A
{
	public:
		void display1(){
			cout<<"It's Class B :";
		}
};
class C: public A{
	public:
		void display2(){
			cout<<"It's Class C :";
		}
};

//Multiple inheritance
class D:public B,public C
{
	public:
		void display3(){
			cout<<"It's Class D :";
		}
};
int main(){
	A obj;
	obj.display();
	B obj2;
	obj2.display();
	C obj3;
	obj3.display();
	D obj4;
	obj4.B::display();
	
	}
