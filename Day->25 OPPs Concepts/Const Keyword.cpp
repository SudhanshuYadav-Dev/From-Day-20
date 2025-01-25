#include<iostream>
using namespace std;
void display(const int num[], int limit);
int main(){
	const int a=6;
	
	cout<<a<<endl;
	//a=12; //Error 
	cout<<a<<endl;
	const int num[]={1,2,3,4,5};
	display(num,5);
	
}
void display(const int num[], int limit){
	for(int count=0; count<limit; count++){
		cout<<num[count]<<" ";
	}
	
}