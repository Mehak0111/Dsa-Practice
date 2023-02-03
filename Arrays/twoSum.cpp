#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	
	int i=0;
        while(i<n){
            int j=i;
            while(j<n){
                if(arr[i]+arr[j]==target && i!=j){
                    cout<<i<<" "<<j<<endl;
                    
                }
                j++;
            }
            i++;
        }
}
