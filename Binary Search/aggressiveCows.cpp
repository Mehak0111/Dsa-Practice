#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int k,int mid){
	int cow=1;
	int lastpos=arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]-lastpos>=mid){
			cow++;
			if(cow==k){
				return true;
			}
			lastpos=arr[i];
		}
	}
	return false;
}
int aggressive(int arr[],int n,int k){
	int s=0;
	int maxi=-1;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
	}
	int e=maxi;
	int ans=-1;
	int mid=(s+e)/2;
	while(s<=e){
		if(ispossible(arr,n,k,mid)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=(s+e)/2;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<aggressive(arr,n,k);
}
