#include<iostream>
using namespace std;
class Class_A{
	//default Constructor
	public:
	Class_A(){
		cout<<"Default Constractor Called"<<endl;
	}
	Class_A(int parameter){
		cout<<"Parameter Constractor Called"<<endl;
	}
	Class_A(Class_A& temp){
		cout<<"Copy Constructor Called"<<endl;
	}	
};

int main(){
	//copy constructor
	//Class_A mukesh;
	
	//parameterized constructor
    Class_A mukesh(5);
    
    //copy constructor
	Class_A R(mukesh);
}