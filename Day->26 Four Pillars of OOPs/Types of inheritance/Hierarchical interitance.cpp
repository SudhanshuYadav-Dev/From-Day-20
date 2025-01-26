#include<iostream>
using namespace std;
class A{
	public:
	void Afun(){
		cout<<"i am Archit: "<<endl;
	}	
};
class P: public A{
	public:
	void Pfun(){
		cout<<"i am Priyanshu: "<<endl;
	}
};
class S: public A{
	public:
	void Sfun(){
		cout<<"i am Sudhanshu: "<<endl;
	}
};
int main(){
	A a;
	a.Afun();
	
	P p;
	p.Afun();
	p.Pfun();
	
	S s;
	s.Afun();
	s.Sfun();
}