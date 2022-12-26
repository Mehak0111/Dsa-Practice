#include<iostream>
#include<vector>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
Node *takeinput(){
	int data;
	cin>>data;
	Node* head=NULL;
	Node* tail=NULL;
	while(data!=-1){
		Node* newnode=new Node(data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
		}
		else{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}
void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
bool checkPalindrome(vector<int> arr){
	int n=arr.size();
	int s=0;
	int e=n-1;
	while(s<=e){
		if(arr[s]!=arr[e]){
			return 0;
		}
		s++;
		e--;
	}
	return 1;
}
bool isPalindrome(Node* head){
	vector<int> arr;
	Node* temp=head;
	while(temp!=NULL){
		arr.push_back(temp->data);
		temp=temp->next;
	}
	return checkPalindrome(arr);
}


//APPROACH 2
Node* middle(Node* head){
	Node* slow=head;
	Node* fast=head->next;
	
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
Node* reverse(Node* head){
	Node* curr=head;
	Node* prev=NULL;
	Node* forward=NULL;
	
	while(curr!=NULL && curr->next!=NULL){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	return prev;
}
bool isPalindrome2(Node* head){
	if(head->next==NULL){
		return true;
	}
	
	//step1: find middle
	Node* mid=middle(head);
	
	//step2: reverse the lL after middle element
	Node* temp=mid->next;
	mid->next=reverse(head);
	
	//step3: compare both the halves
    Node* head1=head;
    Node* head2=mid->next;
    
    while(head2!=NULL){
    	if(head1->data!=head2->data){
		   return false;
	}
		head1 = head1->next;
		head2 = head2->next;
	}
	
	//step 4: reverse the LL again 
    temp=mid->next;
    mid->next=reverse(head);
     
    return true;
}

int main()
{
  Node* head=takeinput();
  bool ans=isPalindrome(head); //t.c : o(n)   s.c : o(n)
  cout<<ans;
}
