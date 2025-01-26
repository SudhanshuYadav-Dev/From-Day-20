#include<iostream>
using namespace std;
class student{
	private:
		string Student_Name;
		int Student_Rollno;
		int Student_age;
	public:
	    void setName(string name){
	    	this->Student_Name=name;
		}
		string getName(){
			return Student_Name;
		}
	    void setRollno(int rollno){
	   	    this->Student_Rollno=rollno;
	    }
	    int getRollno(){
	   	    return Student_Rollno;
	    }
	    void setAge(int age){
	   	    this->Student_age=age;
	    }
	    int getAge(){
	   	    return Student_age;
	    }
};
int main(){
	student obj;
	obj.setName("Sudhanshu Yadav");
	obj.setAge(18);
	obj.setRollno(716);
	
	cout<<"Student Name is-> "<<obj.getName()<<endl;
	cout<<"Student Age is-> "<<obj.getAge()<<endl;
	cout<<"Student Roll No is-> "<<obj.getRollno()<<endl;
}













 