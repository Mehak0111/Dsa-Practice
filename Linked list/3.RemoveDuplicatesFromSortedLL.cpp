#include<iostream>
using namespace std;
class Node{
	public :
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
Node *takeinput(){
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1){
		Node *newNode=new Node(data);
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			tail->next=newNode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}
void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
Node* RemoveDuplicates(Node* head){
	//empty list
	if(head==NULL){
		return NULL;
	}
	//non empty list
	Node* curr=head;
	while(curr!=NULL && curr->next!=NULL){
		if(curr->data==curr->next->data){
			Node* next_next=curr->next->next;
			Node* nodeToDelete=curr->next;
			delete(nodeToDelete);
			curr->next=next_next;
		}
		else{
			curr=curr->next;
		}
	}
}
int main(){
	Node *head=takeinput();
	RemoveDuplicates(head);
	print(head);
}
