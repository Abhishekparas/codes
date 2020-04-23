#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;

	vector<int> v;
	for(int i=x; i<=y; i++){
		v.push_back(x^i);
	}
	for(int i=x; i<=y; i++){
		v.push_back(y^i);
	}
	cout<<*max_element(v.begin(), v.end());
	return 0;
}
