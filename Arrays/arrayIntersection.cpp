#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1,int n1,vector<int> &arr2,int n2,vector<int> &ans1){
	int i=0,j=0;
	vector<int> ans;
	while(i<n1&&j<n2){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int k1,k2;
	vector<int> arr1;
	vector<int> arr2;
	for(int i=0;i<n1;i++){
		cin>>k1;
		arr1.push_back(k1);
	}
	for(int i=0;i<n2;i++){
		cin>>k2;
		arr2.push_back(k2);
	}
	vector<int> ans1=findArrayIntersection(arr1,n1,arr2,n2,ans1);
	for(int i=0;i<ans1.size();i++){
		cout<<ans1[i]<<" ";
	}
	return 0;
}
