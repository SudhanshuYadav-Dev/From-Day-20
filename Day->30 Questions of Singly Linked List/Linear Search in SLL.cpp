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

bool search(Node*&head,int val){
	if(head==NULL){
		return false;
	}
	Node*temp=head;
	while(temp!=NULL){
	if(temp->data==val){
		return true;
	}
	temp=temp->next;
}

	return false;
	
	
}

int main(){
	Node*node1=new Node(5);
	Node*head=node1;
	Node*tail=node1;
	insertAtBeg(head,10);
	insertAtBeg(head,20);
	insertAtBeg(head,30);
	insertAtBeg(head,50);
	
	if(search(head,59)){
	cout<<"Value Present "<<endl;
}
else{
  cout<<"Value not present "<<endl;	
}
	
	cout<<"Head of the linked List-> "<<head->data<<endl;
	cout<<"Tail of the linked List-> "<<tail->data<<endl;
}