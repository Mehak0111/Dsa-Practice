#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int low=0,mid=0,high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[low],arr[mid]);
			low++;
			mid++;
		}
		else if(arr[mid]==2){
			swap(arr[high],arr[mid]);
			high--;
		}
		else if(arr[mid]==1){
			mid++;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
