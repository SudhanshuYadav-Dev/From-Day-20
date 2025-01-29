#include<iostream>
using namespace std;
class ListNode{
    public:
	int data;
	ListNode*next;
	
	//constuctor
	ListNode(int data){
		this -> data = data;
		this -> next = NULL;
	}	
};
void insertAthead(ListNode* &head,int d){
	//Node Creation
	ListNode*temp=new ListNode(d);
	cout<<endl;
	cout<<d<<" inserted at the head of the list"<<endl;
	temp->next=head;
	head=temp;
}

void insertAttail(ListNode* &tail,int d){
	//Node Creation
	ListNode*temp=new ListNode(d);
	cout<<endl;
	cout<<d<<" inserted at the tail of the list"<<endl;
	tail->next=temp;
	tail=tail->next;
}

void insertAtPos(ListNode*&head,ListNode*&tail,int pos,int d){
	if(pos==1){
		insertAthead(head,d);
		return;
	}
	ListNode*temp=head;
	int cnt=1;
	
	while(cnt<pos-1){
		temp = temp -> next;
		cnt++;
	}
	if(temp -> next == NULL){
		insertAttail(tail,d);
		return;
	}
	cout<<endl;
	cout<<d<<" insert at the position "<<pos<<endl;
	ListNode* NodeToinsert = new ListNode(d);
	
	NodeToinsert -> next = temp -> next;
	
	temp -> next = NodeToinsert;
	
}

ListNode* deleteAthead(ListNode*&head){
	if(head==NULL){
		return NULL;
	}
	ListNode*temp=head;
	head=head->next;
	delete temp;
	return head;	
}

ListNode* deleteAttail(ListNode*&tail,ListNode*&head){
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		return head;
		return NULL;
	}
	
	ListNode*second_last=head;
	while(second_last->next->next != NULL){
		second_last=second_last->next;
	}
	delete 
	(second_last->next);
	second_last->next=NULL;
	tail=second_last;
	return head;
}

ListNode* deleteNode(ListNode*&head,ListNode*&tail,int pos){
	if(head==NULL){
		return NULL;
    }
    if(pos==1){
    	ListNode*temp=head;
    	head=head->next;
    	delete temp;
    	return head;
	}
	
	ListNode*prev;
	ListNode*temp=head;
	for(int i=1; i != pos; i++){
		prev=temp;
		temp=temp->next;
	}
	if(temp->next==NULL){
		tail=prev;
	}
	if(temp != NULL){
		prev->next = temp->next;
		delete temp;
	}
	else{
		cout<<"Data Not Present "<<endl;
	}
	return head;
}
void print(ListNode* &head){
    ListNode*temp=head;
    cout<<"Linked List is-> ";
    while(temp!=NULL){
    	cout<< temp -> data << " ";
    	temp = temp -> next;
	}
	cout<<endl;
}

int main(){
	ListNode* node1 = new ListNode(10);
	ListNode*head=node1;
	ListNode*tail=node1;
	print(head);	
	
	//insertion at the head
	insertAthead(head,12);
	print(head);
	insertAthead(head,15);
	print(head);
	
	//insertion at the end
	insertAttail(tail,20);
	print(head);
	insertAttail(tail,30);
	print(head);
	insertAttail(tail,40);
	print(head);
	
	//insertion at any position 
	insertAtPos(head,tail,7,100);
	print(head);
	insertAtPos(head,tail,1,45);
	print(head);
	insertAtPos(head,tail,5,60);
	print(head);
	
	//deletion at the head
	head=deleteAthead(head);
	print(head);
	
	//deletion at end
	head=deleteAttail(tail,head);
	print(head);
	
	//deletion at any position
	head=deleteNode(head,tail,1);
	print(head);
	head=deleteNode(head,tail,6);
	print(head);
	head=deleteNode(head,tail,3);
	print(head);
	
	cout<<"Head of the linked List-> "<<head->data<<endl;
	cout<<"Tail of the linked List-> "<<tail->data<<endl;
	cout<<endl;
	return 0;
}