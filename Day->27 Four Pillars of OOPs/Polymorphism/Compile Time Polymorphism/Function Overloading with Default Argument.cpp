#include<iostream>
using namespace std;
class Add{
    public:
	int add(int num1,int num2,int num3=0,int num4=0){
		cout<<"Function with 4 argrument"<<endl;
		return num1+num2+num3+num4;
	}
	int add(int num1,double num2){
		cout<<"Fuction with 2 argument"<<endl;
		return num1+num2;
		
	}
};
int main(){
	Add a;
	cout<<a.add(5,5.0)<<endl;
	cout<<a.add(500,500)<<endl;
	cout<<a.add(5,5,5)<<endl;
	cout<<a.add(5,5,5,5)<<endl;
}