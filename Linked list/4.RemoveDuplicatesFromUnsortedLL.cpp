#include<bits/stdc++.h>
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
int mapremoveduplicates(Node * &head){
    if(head == NULL)
        return head->data;

    map <int, bool > visited;
    Node* cur = head;
    while (cur->next!= NULL )
    {
        visited[cur->data] = true;
        if (visited[cur->next->data] == true)
        {
            cur->next = cur->next->next;
        }
        else{
            cur = cur->next;
        }
    }
    return head->data;
}
int main()
{
	Node* head=takeinput();
	mapremoveduplicates(head);
	
	print(head);
}
