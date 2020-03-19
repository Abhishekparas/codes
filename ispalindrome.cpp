#include<bits/stdc++.h>
using namespace std;
bool ispal(int*arr,int n,int x,int y){
	if(arr[x] == arr[y]){
		return true;
	}
	else {
		return false;
	}
	
	
	while(x<y){
		ispal(arr,n,x++,y--);
	}
	
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	int x= 0;
	int y = n-1;
	for(int i=0 ;i<n ;i++){
		cin>>arr[i];
	}
	if(ispal(arr,n,x,y)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
	return 0;
	
	
}
