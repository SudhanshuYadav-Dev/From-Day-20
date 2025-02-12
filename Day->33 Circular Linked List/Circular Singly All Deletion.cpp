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

//delete at beg
Node* DeleteATbeg(Node*tail){
	if(tail==NULL){
        cout<<"Empty:";
    }
    Node*temp=tail->next;
    if(temp==tail){
        delete temp;
        tail=NULL;
        return tail;
    }
	tail->next=temp->next;
	delete temp;
	return tail;
}

//delete at tail
Node* DeleteATtail(Node*tail){
	if(tail==NULL){
		cout<<"List is Empty! "<<endl;
	}
	Node*temp=tail->next;
	if(temp==tail){
		delete temp;
		tail=NULL;
		return tail;
	}
	Node*curr=temp;
	while(curr->next!=tail){
		curr=curr->next;
	}
	curr->next=temp;
	delete tail;
	tail=curr;
	return tail;
	
}

//delete at specific pos
Node*DeleteNode(Node*tail,int pos){
	 Node*head=tail->next;
    if(tail==NULL){
        cout<<"List is empty:";
    }
    Node*curr=tail->next;
    Node*prev=tail;
    if(curr==tail){
        delete tail;
        tail=NULL;
        return tail;
    }
    if(pos==1){
        Node*head=tail->next;
        tail->next=head->next;
        delete head;
        return tail;
    }
    int cnt=1;
    while(cnt<pos){
    	prev=curr;
    	curr=curr->next;
    	cnt++;
	}
	if(curr == tail){
        // If we are at the tail, call the delete tail function
        tail=DeleteATtail(tail);
    } 
	else{
        // Normal deletion at position other than tail
        prev->next = curr->next;
        delete curr;
    }
	return tail;
}
int main(){
	Node*tail=NULL;
	tail=insertAtBeg(tail,10);
	tail=insertAtBeg(tail,20);
	tail=insertAtBeg(tail,30);
	tail=insertAtBeg(tail,40);
	tail=insertAtBeg(tail,50);
	print(tail);
	
	tail=DeleteATbeg(tail);
	print(tail);
	
	tail=DeleteATbeg(tail);
	print(tail);
	
	tail=DeleteATtail(tail);
	print(tail);
	
	tail=DeleteATtail(tail);
	print(tail);
	
	tail=insertAtBeg(tail,100);
	tail=insertAtBeg(tail,200);
	tail=insertAtBeg(tail,300);
	print(tail);
	
	tail=DeleteNode(tail,4);
	print(tail);
	
	tail=DeleteNode(tail,2);
	print(tail);

	tail=DeleteNode(tail,1);
	print(tail);

	
	
	cout<<"tail of the list-> "<<tail->data<<endl;
	cout<<"tail ka next of the list-> "<<tail->next->data;

}
