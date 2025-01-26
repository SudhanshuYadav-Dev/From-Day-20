#include<iostream>
using namespace std;
class Animal{
	public:
		int age=10;
		int weight;
		
		
		void bark(){
			cout<<"Barking"<<endl;
		}
};
class Human{
	public:
		string color;
	void Speak(){
		cout<<"Speaking"<<endl;
	}
};

//Multiple inheritance
class Multiple:public Animal, public Human{
	public:
	void Multi(){
		cout<<"Multiple Class Working"<<endl;
	}
};
int main(){
	Multiple obj1;
	obj1.bark();
	obj1.Speak();
	obj1.Multi();
}