#include<iostream>
using namespace std;
class A{
	private:
		int num;
		char Alpa;
		int m;
	public:
		void setNum(int n){
			num=n;
		}
		void setAlpa(char ch){
			Alpa=ch;
		}
		int getNum(){
			return num;
		}
		char getAlpa(){
			return Alpa;
		}
};
int main(){
	//Statically
	A a;
	a.setAlpa('N');
	a.setNum(900);
	cout<<"Number is-> "<<a.getNum()<<endl;
	cout<<"Alpa is-> "<<a.getAlpa()<<endl;

	//Dynamically
	A *b=new A;
	b->setAlpa('M');
	b->setNum(1000);
	cout<<"Number is-> "<<(*b).getNum()<<endl;
	cout<<"Alpa is-> "<<(*b).getAlpa()<<endl;
	
	(*b).setAlpa('K');
	(*b).setNum(10002);
	cout<<"Number is-> "<<b->getNum()<<endl;
	cout<<"Alpa is-> "<<b->getAlpa()<<endl;
	
	cout<<"Size of class A using static object-> "<<sizeof(a)<<endl;
	cout<<"Size of class A using dynamic object-> "<<sizeof(*b)<<endl;;
	
}
