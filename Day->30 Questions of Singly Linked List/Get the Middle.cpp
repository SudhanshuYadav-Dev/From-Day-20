#include<iostream>
using namespace std;
class Node{
    public:
	int data;
	Node*next;
	Node(int d){
		this->data=d;
		this->next=NULL;
	}
};
void insertAtBeg(Node*&head,int d){
	Node*newNode=new Node(d);
	newNode->next=head;
	head=newNode;
}
int getMiddle(Node*&head){
	
	Node*slow_ptr=head;
	Node*fast_ptr=head;
	while(fast_ptr!=NULL && fast_ptr->next!=NULL){
		fast_ptr=fast_ptr->next->next;
		slow_ptr=slow_ptr->next;
	}
	return slow_ptr->data;
}


void print(Node*&head){
	Node*temp=head;
    cout<<"Linked List is-> ";
    while(temp!=NULL){
    	cout<< temp -> data << " ";
    	temp = temp -> next;
	}
	cout<<endl;
}
int main(){
	Node*node1=new Node(5);
	Node*head=node1;
	Node*tail=node1;
	insertAtBeg(head,10);
	insertAtBeg(head,20);
	insertAtBeg(head,30);
	print(head);
	
	cout<<endl<<"Middle of the linked list is-> "<<getMiddle(head)<<endl;
	
	
	cout<<"Head of the linked List-> "<<head->data<<endl;
	cout<<"Tail of the linked List-> "<<tail->data<<endl;
}