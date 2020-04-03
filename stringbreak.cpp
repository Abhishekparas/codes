#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int n= str.length();
	for(int i=0 ;i<n; i++){
		
		if(str[i] >= 'A' && str[i] <='Z'){
		    cout<<str[i];
		    int x=i+1;
		    while(str[x] >= 'a' && str[x] <='z'){
		        cout<<str[x];
		        x++;
		    }
		    cout<<endl;
		}
	}
	return 0;
}
