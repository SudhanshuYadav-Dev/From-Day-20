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
int getLength(Node*head){
	Node*temp=head;
	int cnt;
	while(temp!=NULL){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}
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
void insertAtTail(Node*&head,Node*&tail,int d){
	if(tail==NULL){
		Node*temp=new Node(d);
		head=temp;
		tail=temp;
	}
	Node*temp=new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	
}
void insertAtpos(Node*&head,Node*&tail,int pos,int d){
	if(pos==1){
		insertAthead(head,tail,d);
		return;
	}
	Node*temp=head;
	int cnt=1;
	while(cnt<pos-1){
		temp=temp->next;
		cnt++;
	}
	if(temp->next==NULL){
		insertAtTail(head,tail,d);
		return;
	}
	Node*nodeToinsert=new Node(d);
	nodeToinsert->next=temp->next;
	temp->next->prev=nodeToinsert;
	temp->next=nodeToinsert;
	nodeToinsert->prev=temp;
}

Node*deleteAthead(Node*&head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node*temp=head;
	head=head->next;
	head->prev=NULL;
	delete temp;
	return head;
}
Node*deleteAtTail(Node*tail){
	if(tail==NULL){
		return tail;
	}
	Node*temp=tail;
	tail=tail->prev;
	tail->next=NULL;
	delete temp;
	return tail;
}
void deleteNode(Node*&head,Node*&tail,int pos){
	if(pos==1){
	    Node*temp=head;
	    temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else{
		int cnt=1;
		Node*previous=NULL;
		Node*curr=head;
		while(cnt<pos){
			previous=curr;
			curr=curr->next;
			cnt++;
		}
		curr->prev=NULL;
		previous->next=curr->next;
		curr->next=NULL;
		delete curr;
		if(previous->next==NULL){
			tail=previous;
		}
	}
}
void display(Node*&head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node*node1=new Node(10);
	Node*head=node1;
	Node*tail=node1;
	
	insertAthead(head,tail,20);
	display(head);
	
	insertAtTail(head,tail,30);
	display(head);
	
	insertAtpos(head,tail,2,40);
	display(head);
	
	insertAtpos(head,tail,1,50);
	display(head);
	
	insertAtpos(head,tail,6,60);
	display(head);
	
	head=deleteAthead(head);
	display(head);
	
	tail=deleteAtTail(tail);
	display(head);
	
	deleteNode(head,tail,2);
	display(head);
	
	deleteNode(head,tail,3);
	display(head);
	
	cout<<getLength(head)<<endl;
	cout<<"Head of the linked list-> "<<head->data<<endl;
	cout<<"Tail of the linked list-> "<<tail->data<<endl;
}