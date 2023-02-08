#include<bits/stdc++.h>
using namespace std;
long long sqrt(int n){
	int start=0;
	int end=n;
	long long mid=(start+end)/2;
	int ans=-1;
	while(start<=end){
	    long long square=mid*mid;
		if(square==n){
			return mid;
		}
		if(square<n){
		  ans=mid;
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
	cout<<sqrt(n);
}
