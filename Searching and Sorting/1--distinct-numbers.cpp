#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
 
int main(){
    ll n;
    cin>>n;
    
    set<ll> st;
    int term;
    for(int i = 0;i<n;i++){
        cin>>term;
        st.insert(term);
    }
    
    cout<<st.size()<<endl;
}
