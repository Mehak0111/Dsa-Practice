#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int size=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        while(i<size){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
            i=i+count;
        }
        size=ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<size-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
    
int main() {
    int n;
    cin>>n;
    int k;
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>k;
        ans.push_back(k);
    }
    
    bool answer=uniqueOccurrences(ans);
    cout<<answer;

    return 0;
}
