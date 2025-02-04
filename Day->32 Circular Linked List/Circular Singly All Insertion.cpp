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
Node*insertAtBeg(Node*&tail,int d){
	Node*newNode=new Node(d);
	//Insert in Empty List
	if(tail==NULL){
		newNode->next=newNode;
		return newNode;
	}
	//Insert At beg of list
	newNode->next=tail->next;
	tail->next=newNode;
	return tail;
}
Node*insertAttail(Node*&tail,int d){
	Node*newNode=new Node(d);
	
	//Insert in Empty List
	if(tail==NULL){
		tail=newNode;
		newNode->next=newNode;
		return newNode;
	}
	//Insert at end of list
	newNode->next=tail->next;
	tail->next=newNode;
	tail=newNode;
	return tail;	
}

Node*insertNode(Node*&tail,int pos,int d){
	if(pos==1){
		insertAtBeg(tail,d);
		return tail;
	}
	Node*newNode=new Node(d);
	Node*curr=tail->next;
	for(int i=1; i<pos-1; i++){
		curr=curr->next;
	}
	if(curr==tail){
		insertAttail(tail,d);
		return tail;
	}
	newNode->next=curr->next;
	curr->next=newNode;
	return tail;
}
void print(Node*&tail){
	Node*head=tail->next;
	while(true){
		cout<<head->data<<" ";
		head=head->next;
	if(head==tail->next){
		break;
	   }
    }
	cout<<endl;
}
int main(){
	Node*node1=new Node(5);
	node1->next=node1;
	Node*tail=node1;
	tail=insertAtBeg(tail,10);
	tail=insertAtBeg(tail,20);
	tail=insertAttail(tail,30);
	tail=insertNode(tail,5,50);
	print(tail);
	
	cout<<"tail of the list-> "<<tail->data;

}
