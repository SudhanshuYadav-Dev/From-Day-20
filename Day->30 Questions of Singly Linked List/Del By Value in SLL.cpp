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
Node*deleteNode(Node*&head,Node*&tail,int val){
	if(head==NULL){
		return head;
	}
	
	if(head->data==val){
		Node*temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	Node*prev;
	Node*temp=head;
	while(temp!=NULL){
		if(temp->data==val){
			prev->next=temp->next;
			delete temp;
			break;
		}
		prev=temp;
		temp=temp->next;
	}
	tail=prev;
	
	return head;
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
	
	
	head=deleteNode(head,tail,5);
	print(head);
	
	head=deleteNode(head,tail,30);
	print(head);
	
	head=deleteNode(head,tail,10);
	print(head);
	
	cout<<"Head of the linked List-> "<<head->data<<endl;
	cout<<"Tail of the linked List-> "<<tail->data<<endl;
}