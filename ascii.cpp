#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	vector<int> v;
	int n= str.length();
	for(int i=0; i<n-1; i++){
		v.push_back(str[i+1]-str[i]);
	}
	for(int i=0; i<v.size(); i++){
		cout<<str[i]<<v[i];
	}
	cout<<str[n-1];
	
	return 0;
}
