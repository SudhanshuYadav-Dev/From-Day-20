#include<iostream>
using namespace std;
//creation of class
class Hero {
	//properties
	public:
		int health=70;
		char level='A';
};
int main(){
	//creation of object
	Hero poul;
	cout<<"Health of poul-> "<<poul.health<<endl;
	cout<<"Level of poul-> "<<poul.level<<endl;
}