#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
	Node*next;
	Node(int d){
		this->data=d;
		this->prev=NULL;
		this->next=NULL;
	} 	
};
Node*insertAtbeg(Node*&head,int d){
	Node*newNode=new Node(d);
	if(head==NULL){
	   newNode->next=newNode;
	   newNode->prev=newNode;
	   head=newNode;
	}
	Node*tail=head->prev;
	newNode->next=head;
	newNode->prev=tail;
	head->prev=newNode;
	tail->next=newNode;
	head=newNode;
	return head;
}
Node*deleteAtbeg(Node*&head){
	if(head==NULL){
		return NULL;
	}
	Node*tail=head->prev;
	Node*temp=head;
	head=head->next;
	tail->next=temp->next;
	temp->next->prev=tail;
	delete temp;
	return head;
	
}

Node*deleteAtlast(Node*&head){
	if(head==NULL){
		return NULL;
	}
	Node*tail=head->prev;
	tail->prev->next=head;
	head->prev=tail->prev;
	delete tail;
	return head;
}
void deleteNode(Node*&head,int pos){
	if(head==NULL){
		cout<<"List is Empty! "<<endl;
		return;
	}
	Node*current=head;
	int cnt=1;
	while(cnt<pos && current->next!=head){
		current=current->next;
		cnt++;
	}
	if(cnt<pos){
		cout<<"Position out of range! "<<endl;
		return;
	}
	if(current->next==current && current->prev==current){
		delete current;
		head=NULL;
		return;
	}
	if(current==head){
		head=head->next;
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	
	delete current;
}
void printList(Node*head){
	if(head==NULL){
		return;
	}
	Node*temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	while(temp!=head);
	cout<<endl;
}
int main(){
	Node*head=NULL;
	head=insertAtbeg(head,10);
	head=insertAtbeg(head,20);
	head=insertAtbeg(head,30);
	head=insertAtbeg(head,40);
	head=insertAtbeg(head,50);
	printList(head);
	
	head=deleteAtbeg(head);
	printList(head);
	
	head=deleteAtlast(head);
	printList(head);
	
	deleteNode(head,2);
	printList(head);
	cout<<"head of the list-> "<<head->data<<endl;
	cout<<"tail of the list-> "<<head->prev->data<<endl;
}