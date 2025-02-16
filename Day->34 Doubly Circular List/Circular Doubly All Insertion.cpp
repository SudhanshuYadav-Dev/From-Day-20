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
//insertion at starting
Node*insertAtbeg(Node*&head,int data){
	Node*newNode=new Node(data);
	if(head==NULL){
		newNode->next=newNode;
		newNode->prev=newNode;
		head=newNode;
	}
	Node*tail=head->prev;
	
	//insert new Node at the beg
	newNode->next=head;
	newNode->prev=tail;
	head->prev=newNode;
	tail->next=newNode;
	
	//update head
	head=newNode;
	return head;
}
//insertion at lasting
Node*insertAttail(Node*&head,int data){
		Node*newNode=new Node(data);
	if(head==NULL){
		newNode->next=newNode;
		newNode->prev=newNode;
		head=newNode;
	}
	Node*tail=head->prev;
	
	//insert new Node at the beg
	newNode->next=head;
	newNode->prev=tail;
	tail->next=newNode;
	head->prev=newNode;
	
	return head;	
}
//insertion after node
Node*insertAfterNode(Node*&head,int data,int givenData){
	Node*newNode=new Node(data);
	if(head==NULL){
		return NULL;
	}
	Node*curr=head;
	do{
		if(curr->data==givenData){
			newNode->next=curr->next;
			newNode->prev=curr;
			curr->next->prev=newNode;
			curr->next=newNode;
			
			//if the given node was the last node
			if(curr==head->prev){
				head->prev=newNode;
			}
			return head;
		}
		curr=curr->next;
	}
	while(curr!=head);
	return head;
}
//insertion before node
Node*insertBeforeNode(Node*&head,int data,int givenData){
		Node*newNode=new Node(data);
	if(head==NULL){
		return NULL;
	}
	Node*curr=head;
	do{
		if(curr->data==givenData){
			newNode->next=curr;
			newNode->prev=curr->prev;
			curr->prev->next=newNode;
			curr->prev=newNode;
			
			//if the give node was the first node
			if(curr==head){
				head=newNode;
			}
			return head;
		}
		curr=curr->next;
	}
		while(curr!=head);
		return head;
}
//insertion at specific position
Node*addNode(Node*&head,int data,int pos){
	Node*newNode=new Node(data);
	if(head==NULL){
		if(pos>1){
			return NULL;
		}
		newNode->prev=newNode;
		newNode->next=newNode;
		return newNode;
	}
	if(pos==1){
		//insert At the begining of the list
		newNode->next=head;
		newNode->prev=head->prev;
		head->prev->next=newNode;
		head->prev=newNode;
		return newNode;
	}
	//Traverse to the p-th position
	Node*curr=head;
	for(int i=0; i<pos-1; i++){
		curr=curr->next;
		if(curr==head){
			cout<<"Position out of the range!"<<endl;
			return head;
		}
	}
	//Insert the new node after the curr node (at the given pos)
	newNode->next=curr->next;
	newNode->prev=curr;
	if(curr->next!=NULL){
		curr->next->prev=newNode;
	}
	curr->next=newNode;
	
	//return the current head;
	return head;
}
void printList(Node*head){
	if(head==NULL){
		return;
	}
	Node*temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);
	cout<<endl;
}
int main(){
	Node*head=NULL;
	head=insertAtbeg(head,10);
	head=insertAtbeg(head,20);
	printList(head);
	
	head=insertAttail(head,30);
	head=insertAttail(head,40);
	printList(head);
	
	head=insertAfterNode(head,25,20);
	printList(head);
	
	head=insertAfterNode(head,50,40);
    printList(head);
	
	head=insertAfterNode(head,15,10);
    printList(head);
    
    head=insertBeforeNode(head,15,20);
    printList(head);
    
    head=insertBeforeNode(head,45,50);
    printList(head);
    
    head=insertBeforeNode(head,28,30);
    printList(head);
    
    head=addNode(head,60,10);
    printList(head);
    
    head=addNode(head,5,1);
    printList(head);
    
    head=addNode(head,75,3);
    printList(head);
    
	cout<<"head of the list-> "<<head->data<<endl;
	cout<<"tail of the list-> "<<head->prev->data<<endl;
}