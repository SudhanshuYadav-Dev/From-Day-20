#include<iostream>
using namespace std;

class Add{
    public:
	int add(int num1,int num2){
		return num1+num2;
	}	
	int add(int num1,int num2,int num3){
		return num1+num2+num3;
	}
};

int main(){
	Add a;
	cout<<a.add(5,5)<<endl;
	cout<<a.add(5,5,5);
}