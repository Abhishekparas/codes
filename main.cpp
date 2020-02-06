#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum =0;
    int arr[100];
    int leftmax[100];
    int rightmax[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    leftmax[0] = arr[0] ;
    rightmax[n-1]= arr[n-1];

    for(int i=1; i<n; i++){
        leftmax[i] = max(arr[i], leftmax[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        rightmax[i] = max(arr[i], rightmax[i+1]);
    }
    for(int i=0; i<n;i++){
        sum  = sum + (min(leftmax[i],rightmax[i]) - arr[i]);
    }
    cout<<sum;
    return 0;
}
