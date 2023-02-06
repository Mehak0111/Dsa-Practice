#include<iostream>
using namespace std;
int firstAndLast(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	int mid=(start+end)/2;
	while(start<=end){
		if(arr[mid]==key){ //left mein  jao
			ans=mid;
			end=mid-1;
		}
		else if(key>arr[mid]){ //right  mein jao
			start=mid+1;
		}
		else{ //left me jao jab key<arr[mid] ho
			end=mid-1;
		}
		mid=(start+end)/2;
	}
	return ans;
}
int last(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans=-1;
	int mid=(start+end)/2;
	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
			start=mid+1;
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=(start+end)/2;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<"	First occurence of element: "<<firstAndLast(arr,n,key)<<endl;
    cout<<" Last occurence of element: "<<last(arr,n,key)<<endl;
}
