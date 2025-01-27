#include<iostream>
using namespace std;
class Add{
    public:
	int add(int num1,int num2){
		return num1+num2;
	}	
	int add(double num1,double num2){
		return num1+num2;
	}
};
int main(){
	Add a;
	cout<<a.add(5,5)<<endl;
	cout<<a.add(5,5);
}