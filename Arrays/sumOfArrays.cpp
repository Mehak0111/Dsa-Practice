#include<bits/stdc++.h>
using namespace std;
// vector<int> reverse(vector<int> v){
// 	int s=0;
// 	int e=v.size()-1;
// 	while(s<e){
// 		swap(v[s++],v[e--]);
// 	}
// 	return v;
// }
vector<int> findSum(vector<int>&a,int n,vector <int>&b,int m){
	int i=n-1;
	int j=m-1;
	vector<int> ans;
	int carry=0;
	while(i>=0 && j>=0){
		int val1=a[i];
		int val2=b[j];
		
		int sum=val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}
	while(carry!=0){
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}
	return ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	int k;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>k;
        arr.push_back(k);
	}
	int l;
	
	vector<int> arr1;
	for(int i=0;i<m;i++){
        cin>>l;
		arr1.push_back(l);
	}
	vector<int> ans1=findSum(arr,arr.size(),arr1,arr1.size());
	for(int i=ans1.size()-1;i>=0;i--){
	    cout<<ans1[i]<<" ";
	}
}
