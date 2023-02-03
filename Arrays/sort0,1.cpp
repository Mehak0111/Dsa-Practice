#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void sortOne(int arr[],int n){
	int left=0,right=n-1;
	while(left<=right){
		while(arr[left]==0 && left<right){
			left++;
		}
		
		while(arr[right]==1 && left<right){
			right--;
		}
		//agar yahan puhunch gae ho mtlb 
		//arr[i]==1 and arr[j]==0
		if(left<right){
		swap(arr[left],arr[right]);
		left++;
		right--;
	}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sortOne(arr,n);
	printArray(arr,n);
}
