#include<iostream>
using namespace std;

class Node{
    public:
	int data;
	Node*next;
	Node*prev;
	Node(int d){
		this->data=d;
		this->next=NULL;
		this->prev=NULL;
	}	
};
void insertAthead(Node*&head,Node*&tail,int d){
	if(head==NULL){
		Node*temp=new Node(d);
		head=temp;
		tail=temp;
    }
	Node*temp=new Node(d);
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void display(Node*&head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void deleteNode(Node*&head,Node*&tail,int val){
	if(val==head->data){
		Node*temp=head;
		head=head->next;
		temp->next=NULL;
		head->prev=NULL;
		delete temp;
	}
	else{
		Node*temp=head;
		Node*prev;
		while(temp!=NULL){
			if(temp->data==val){
				prev->next=temp->next;
				temp->next=NULL;
				temp->prev=NULL;
				delete temp;
				break;
			}
			prev=temp;
			temp=temp->next;
		}
		if(prev->next==NULL){
			tail=prev;
		}
	}
	
}
int main(){
	Node*node1=new Node(10);
	Node*head=node1;
	Node*tail=node1;
	insertAthead(head,tail,20);
	display(head);
	insertAthead(head,tail,30);
	display(head);
	insertAthead(head,tail,40);
	display(head);
	insertAthead(head,tail,50);
	display(head);
		
	deleteNode(head,tail,20);
	display(head);
	
	cout<<head->data<<endl;
    cout<<tail->data<<endl;
	
}