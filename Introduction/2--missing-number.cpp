#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin>>n;
    unordered_set<int> st;
    
    int term;
	for(int i = 0; i<n-1; i++) {
		cin>>term;
		st.insert(term);
	}
	
	for(int i = 1; i<=n; i++) {
        if(st.find(i) == st.end()){
            cout<<i<<endl;
            return;
        }
	}
    
    
}

int main()
{
	solve();
	return 0;
}