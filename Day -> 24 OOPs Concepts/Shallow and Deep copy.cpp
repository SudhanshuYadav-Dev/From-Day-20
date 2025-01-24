#include<iostream>
using namespace std;
class Hero{
	private:
		char level;
		int health;
	public:
		char *name;
	Hero(){
		name=new char[100];
	}
	void getHelath(int h){
		this->health=h;
	}
	void getLevel(char l){
		this->level=l;
	}
	void getName(char name[]){
		strcpy(this->name,name);
	}
	void print(){
		cout<<"["<<"Name: "<<name<<" Health: "<<health<<" Level: "<<level<<" ]"<<endl;
	}
	Hero(Hero& temp){
		char *ch=new char[strlen(temp.name)+1];
		strcpy(ch,temp.name);
		this->name=ch;
		this->health=temp.health;
		this->level=temp.level;
		
	}
	
};
int main(){
	Hero hero1;
	hero1.getHelath(70);
	hero1.getLevel('A');
	char name[5]="AURA";
	hero1.getName(name);
	//hero1.print();
	
	//use default copy constructor
	Hero hero2(hero1);
	//hero2.print();
	hero1.name[0]='G';
    hero1.print();
    hero2.print();
    
    hero1=hero2;
    hero1.print();
    
}