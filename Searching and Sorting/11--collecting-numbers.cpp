#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve()
{
 
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;i++)cin>>a[i];
    ll ans = 1;
    
    vector<int> indices(n+1,0);
    
    for(int i = 0;i<n;i++){
        indices[a[i]] = i;    
    }
    
    for(int i = 1;i<n;i++){
        if(indices[i+1] < indices[i])ans++;
    }
    
    cout<<ans<<endl;
}
 
int main()
{
	solve();
}