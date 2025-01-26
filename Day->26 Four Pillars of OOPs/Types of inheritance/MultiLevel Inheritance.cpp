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
class GermanShepherd: public Dog{
	
};

int main(){
	GermanShepherd g;
	g.speak();
	cout<<g.age;
}
