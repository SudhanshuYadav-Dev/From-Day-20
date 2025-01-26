#include<iostream>
using namespace std;
class Animal{
	public:
		int age=10;
		int weight;
		
		
		void speak(){
			cout<<"Speaking"<<endl;
		}
};

class Dog: public Animal{
	
	public:
	int age=12;
	
};

int main(){
	Dog d;
	d.speak();
	cout<<d.age<<endl;
	cout<<d.age<<endl;
	cout<<d.age<<endl;
}