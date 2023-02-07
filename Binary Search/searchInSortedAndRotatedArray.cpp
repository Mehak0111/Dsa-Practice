#include<iostream>
using namespace std;
int binarySearch(int arr[],int s,int e,int key){
	int start=s;
	int end=e;
	int mid=start+(end-start)/2;
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}
int pivot(int arr[],int n){
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	while(start<end){
		if(arr[mid]>=arr[0]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		mid=(start+end)/2;
	}
	return start;
}
int search(int arr[],int n,int key){
	int pivotele=pivot(arr,n);
	if(key>=arr[pivotele] && key<=arr[n-1]){
		return binarySearch(arr,pivotele,n-1,key);
	}
	else{
		return binarySearch(arr,0,pivotele-1,key);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<search(arr,n,key);
}
