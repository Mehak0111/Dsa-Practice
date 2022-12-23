#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
Node* takeinput(){
	int data;
	cin>>data;
	Node* head=NULL;
	Node* tail=NULL;
	while(data!=-1){
		Node* newNode=new Node(data);
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
void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int length(Node* head){
	Node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
int findMiddle(Node* head){
	int len=length(head);
	int ans=(len/2) ;
	Node* temp=head;
    int cnt=0;
    while(cnt<ans){
    	temp=temp->next;
    	cnt++;
	}
	return temp->data;
}
int findMiddle2(Node* head){
	if(head==NULL||head->next==NULL)
	return NULL;
	if(head->next->next==NULL){
		return head->next->data;
	}
	Node* slow=head;
	Node* fast=head->next;
	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
		}
		slow=slow->next;
	}
	return slow->data;
}
int main()
{
	Node* head=takeinput();
	int ans=findMiddle2(head);
	cout<< ans;
}
