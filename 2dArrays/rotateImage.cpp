#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int arr1[n][m];
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr1[i][j]=arr[j][i];
        }
    }
	for(int i=0;i<n;i++){
	   int start=0;
	   int end=m-1;
	   while(start<end){
	   	swap(arr1[i][start],arr1[i][end]);
	   	start++;
	   	end--;
	   }	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
}
