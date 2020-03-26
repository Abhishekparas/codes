#include<bits/stdc++.h>
using namespace std;
# define ll long long 
int main(int argc, char *a[])
{
    //Write code here
    ll n;
    cin>>n;
    ll arr[n];
    ll arx[n];
    vector<int> v;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    for(ll i=0; i<n; i++){
        cin>>arx[i];
    }
    for(ll i=0; i<n; i++){
        v.push_back((arx[i]/arr[i]));
    }
    cout<<*min_element(v.begin(), v.end())<<endl;
    return 0;
}
/* The first line of input consists of the number of ingredients, N

The second line of input consists of the N space-separated integers representing the quantity of each ingredient required to create a super Girl.


The third line of input consists of the N space-separated integers representing the quantity of each ingredient present in the laboratory.

we have to find out the maximum number of supergirls we can make by the available ingredients*/
