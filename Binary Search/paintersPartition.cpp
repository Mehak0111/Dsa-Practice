#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid){
	int painter=1;
	int t=0;
	for(int i=0;i<n;i++){
		if(t+arr[i]<=mid){
			t+=arr[i];
		}
		else{
			painter++;
			if(painter>k || arr[i]>mid){
				return false;
			}
			t=arr[i];
		}
	}
	return true;
}
int time(int arr[],int n,int k){
	int s=0;
	int ans=-1;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int e=sum;
	int mid=(s+e)/2;
	while(s<=e){
		if(isPossible(arr,n,k,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=(s+e)/2;
	}
	return ans;
}
int main(){
	int n;
	int k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<time(arr,n,k);
}
