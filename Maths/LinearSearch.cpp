
//Using Built in functions
//Linear Search
#include<bits/stdc++.h>
using namespace std;

int MaxMin(int arr[],int n){
	sort(arr,arr+n);
	cout<<"Minimum Element :"<<arr[0]<<endl;
	cout<<"Maximum element :"<<arr[n-1]<<endl;
	
}

int main(){
	int arr[]={23,2,12,21,22,54,65,3,3,4,5,66};
	int n= sizeof(arr)/sizeof(arr[0]);
	MaxMin(arr,n);
	return 0;
	
}
