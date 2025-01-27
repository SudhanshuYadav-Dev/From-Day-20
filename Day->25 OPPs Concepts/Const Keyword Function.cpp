#include<iostream>
using namespace std;
//Non-Const Function
class Demo{
	private:
		int x;
	public:
		void setData(int a){
			x=a;
		}
		int getData(){
			++x;//can be increment
			return x;
		}
};
//Const Function
class Demo1{
	private:
		int x;
	public:
		void setData(int a){
			x=a;
		}
		int getData() const{
			++x;//cannot increment
			return x;
		}
};
int main(){
	Demo d;
    d.setData(8);
    cout<<d.getData()<<endl;
    Demo1 d1;
    d1.setData(7);
    cout<<d1.getData();
}