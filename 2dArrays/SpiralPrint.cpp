#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int count=0;
	int total=n*m;
	int startrow=0;
	int startcol=0;
	int endrow=n-1;
	int endcol=m-1;
	while(count<total){
		//print starting row
		for(int i=startcol;i<=endcol;i++){
			cout<<arr[startrow][i]<<" ";
			count++;
		}
        startrow++;
        
        //print ending column
		for(int i=startrow;i<=endrow;i++){
		    cout<<arr[i][endcol];
		    count++;
		}
		endcol--;
		
		//print ending row
		for(int i=endcol;i>=startcol;i--){
		    cout<<arr[endrow][i];
		    count++;
		}
		endrow--;
		
}
}
