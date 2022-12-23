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
Node* reverseLL(Node* head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	
	Node* prev=NULL;
	Node* curr=head;
	Node* forward=NULL;
	while(curr!=NULL){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	return prev;
}
void reverse(Node* &head,Node* curr,Node* prev){
	if(curr==NULL){
		head=prev;
		return ;
	}
	Node* forward=curr->next;
	reverse(head,forward,curr);
	curr->next=prev;
}
Node* reverseLL2(Node* head){
	Node* curr=head;
	Node* prev=NULL;
	reverse(head,curr,prev);
	return head;
}
int main(){
	Node *head=takeinput();
	//head=reverseLL(head);
	head=reverseLL2(head);
	print(head);
}

