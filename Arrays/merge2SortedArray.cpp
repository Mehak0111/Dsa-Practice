#include<iostream>
using namespace std;
void print(int ans[],int n){
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
int merge(int arr1[],int n1,int arr2[],int n2,int arr3[]){
   int i=0,j=0;
   int k=0;
   while(i<n1 && j<n2){
   	  if(arr1[i]<arr2[j]){
   	  	arr3[k++]=arr1[i++];
		}
		else{
			arr3[k++]=arr2[j++];
		}
   }
   
   //copy first array element 
   while(i<n1){
   	arr3[k++]=arr1[i++];
   }
   
   //copy second array element
   while(j<n2){
   	 arr2[k++]=arr2[j++];
   }
}
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int arr1[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int arr2[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	int n3=n1+n2;
	int arr3[n3];
	
	merge(arr1,n1,arr2,n2,arr3);
	print(arr3,n3);
}
