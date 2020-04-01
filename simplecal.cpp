#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	long long int n1,n2;

	do{
		cin>>ch;
		if(ch == '*'){
			cin>>n1>>n2;
			cout<< (n1*n2)<<endl;
		}
		
		else if(ch == '/'){
			cin>>n1>>n2;
			cout<< (n1/n2)<<endl;
		}
		
		else if(ch == '+'){
			cin>>n1>>n2;
			cout<< (n1+n2)<<endl;
		}
		
		else if(ch == '-'){
			cin>>n1>>n2;
			cout<< (n1-n2)<<endl;
		}
		
		else if(ch == '%'){
			cin>>n1>>n2;
			cout<< (n1%n2)<<endl;
		}
		
		else{
			cout<<"Invalid operation. Try again."<<endl;
		}
	}
	while(ch != 'X' && ch != 'x');
	return 0;
}
