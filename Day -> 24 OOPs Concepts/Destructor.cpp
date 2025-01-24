#include<iostream>
using namespace std;
class Dummy{
    
    public:
    	Dummy(){
    		cout<<"Constructor Called! "<<endl;
		}
		
		//destructor
		~Dummy(){
			cout<<"Destructor Called! "<<endl;
		}
	
};
int main(){
	//statically
	Dummy d1;
	
	//dynamically
	Dummy *d2=new Dummy();
	//manually deallocation
	delete d2;
	
}