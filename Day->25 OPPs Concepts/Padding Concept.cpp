#include<iostream>
using namespace std;
class Padding{
	int age;
	double salary;
	short int ID;
};
//Saving Memory
class SaveMemory{
	double salary;
	int age;
	short int ID;
};
int main(){
	//size of Padding Class
	Padding p;
	cout<<sizeof(p)<<endl;//24 
	SaveMemory SM;
	cout<<sizeof(SM)<<endl;//16
}