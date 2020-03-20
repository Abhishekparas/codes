#include<iostream>
using namespace std;
int count=0;
void hicount(string inpu, string outp){
	if(inpu.length() == 0){
		return;
	}
	if(inpu.length() >=2 && inpu[0] =='h' && inpu[1] == 'i'){
		count++;
		string p = inpu.substr(2);
		string q = outp;
		hicount(p,q);
	}
	else{
		string p = inpu.substr(1);
		string q = outp+inpu[0];
		hicount(p,q);
	}
}
void hirem(string inp, string out){
	if(inp.length() == 0){
		cout<<out<<endl;
		return;
	}
	if(inp.length()>=2 && inp[0]=='h' && inp[1] =='i'){
		string m = inp.substr(2);
		string n= out;
		hirem(m,n);
	}
	else{
		string m = inp.substr(1);
		string n= out+inp[0];
		hirem(m,n);

	}
}
void hirec(string input, string output){
	if(input.length() == 0){
		cout<<output<<endl;
		return;
	}
	if(input.length() >=2 && input[0]=='h' && input[1] =='i'){
		string a = input.substr(2);
		string b = output+"bye";
		hirec(a,b);
	}
	else{
		string a = input.substr(1);
		string b = output + input[0];
		hirec(a,b);
	}
}
int main() {
	string str;
	cin>>str;
	hirem(str,"");
	hicount(str,"");
	cout<<count<<endl;
	hirec(str,"");
	
	return 0;
}
