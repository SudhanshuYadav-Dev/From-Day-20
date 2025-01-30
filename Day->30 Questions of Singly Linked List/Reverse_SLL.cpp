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

Node*reverse(Node*&head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node*prev=NULL;
	Node*curr=head;
	Node*forword=NULL;
	while(curr!=NULL){
		forword=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forword;
	}
	return prev;
	
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
	
	head=reverse(head);
	print(head);
	
}