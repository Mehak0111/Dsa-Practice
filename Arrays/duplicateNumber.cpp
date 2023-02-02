#include<bits/stdc++.h>
using namespace std;
int duplicateNumber(vector<int> arr){
	sort(arr.begin(),arr.end());
	for(int i=1;i<arr.size();i++){
		if(arr[i]==arr[i-1]){
			return arr[i];
		}
	}
	return -1;
}
int duplicateNumber2(vector<int> arr){
	int ans=0;
	for(int i=0;i<arr.size();i++){
		ans=ans^arr[i];
	}
	for(int i=1;i<arr.size();i++){
		ans=ans^i;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	 int k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
    }
    int ans=duplicateNumber(arr);
    cout<<ans;
    
    int ans1=duplicateNumber2(arr);
    cout<<ans1;
}

