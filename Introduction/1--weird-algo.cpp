#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
vector<ll> weird(ll n){
    vector<ll> res;
    res.push_back(n);
    
    while(n != 1){
        if(n%2 == 0){
            n = n/2;
        }else{
            n = 3*n + 1;
        }
        res.push_back(n);
    }
    
    return res;
}
 
int main(){
    ll n;
    cin>>n;
    vector<ll>res = weird(n);
    for(ll i : res){
        cout<<i<<" ";
    }
    cout<<endl;
}