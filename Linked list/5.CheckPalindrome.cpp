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
int main()
{
  Node* head=takeinput();
  bool ans=isPalindrome(head); //t.c : o(n)   s.c : o(n)
  cout<<ans;
}
