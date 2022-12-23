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
int main()
{
	Node* head=takeinput();
	int ans=findMiddle(head);
	cout<<ans;
}
