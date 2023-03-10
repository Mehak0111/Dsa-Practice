#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<auto> v){
	cout<<"[";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<",";
	}
	cout<<"]"<<endl;
}
class Solution{
	public:
		vector<int> findDuplicates(vector<int> &nums){
			int n=nums.size();
			vector<int> ans;
			for(int i=0;i<n;i++){
				int x=abs(nums[i]);
				x--;
				if(nums[x]<0){
					ans.push_back(x+1);
				}
				else{
					nums[x]=nums[x]*-1;
				}
			}
			return ans;
		}
};
int main(){
	Solution ob;
	int n;
	cin>>n;
	int k;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>k;
		v.push_back(k);
	}
	
	print_vector(ob.findDuplicates(v));
}
