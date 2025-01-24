#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		//static datamember
		static int time;
		void getValue(int x,int y){
			a=x;
			b=y;
		}
	    void print(){
	    	cout<<"A-> "<<a<<" B-> "<<endl;
		}
		//static Keyword
		static int Print(){
	      return time;
		}

};

int A::time=5;

int main(){
	//Class Based
	cout<<A::time<<endl;//5
	cout<<A::Print();
	//Object Based
//	A a;
//	cout<<a.time;//5
//	a.time=10;
//	cout<<endl;
//	
//	cout<<a.time<<endl;//10
//	cout<<A::time<<endl;//10
return 0;
}