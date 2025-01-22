#include<iostream>
using namespace std;
class A{
	private:
		int num;
		char Alpa;
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
	A a;
	//set num
	a.setNum(10);
	//get num
	cout<<a.getNum();
	
	//set Alpa
	a.setAlpa('M');
	//get Apla
	cout<<a.getAlpa();
}