#include<iostream>
using namespace std;
class Human{
	public:
		int height;
		int weight;
		int age;
		
		int getAge(){
			return this->age;
		}
		void setWeight(int w){
			this->weight=w;
		}
		
};
class Male:public Human{
	public:
		string color="White";
	void sleep(){
		cout<<"Man is Sleeping! "<<endl;
	}
};
int main(){
	Male obj;
	cout<<obj.age<<endl;
	cout<<obj.getAge()<<endl;
	cout<<obj.weight<<endl;
	
	obj.setWeight(80);
	cout<<obj.weight<<endl;
	obj.sleep();
	cout<<obj.color;
}













 