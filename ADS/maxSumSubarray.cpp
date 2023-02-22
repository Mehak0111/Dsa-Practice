#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	int start=0;
	int end=k-1;
	int sum=0;
	for(int i=start;i<=end;i++){
		sum+=arr[i];
	}
    int max=sum;
    end=k;
    while(end<n){
    	sum=sum+arr[end]-arr[start];
    	start++;
    	end++;
    	if(sum>max){
    		max=sum;
		}
	}
 cout<<max;
}
