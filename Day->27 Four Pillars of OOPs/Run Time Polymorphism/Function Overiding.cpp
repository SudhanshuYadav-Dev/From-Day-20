#include<iostream>
using namespace std;
class Animal{
	public:
		void speak(){
			cout<<"Speaking"<<endl;
		}
};
class Dog:public Animal{
	public:
		void speak(){
			cout<<"Barking"<<endl;
		}
};
class Cat: public Animal{
	public:
		void speak(){
			cout<<"Moew Moew"<<endl;
		}
};
int main(){
	Dog d;
	d.speak();
	Cat c;
	c.speak();
	
	
}