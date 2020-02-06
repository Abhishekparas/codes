#include <iostream>
using namespace std;
int main() {
    int testcases;
    cin>>testcases;
    int n;
    int arr[100];
    for(int i=0; i<testcases; i++){
        cin>>n;
        int sum =0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum  = sum + arr[i];
        }
        if(sum&1){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }


    return 0;
}
