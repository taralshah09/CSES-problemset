#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;i++)cin>>a[i];
   
    int start = 0;
    int ans = 0;
    
    map<ll,ll> mp;
    
    for(int end = 0;end<n;end++){
        if(mp.find(a[end]) == mp.end()){
            mp[a[end]] = end;
        }
        else{
            if (mp[a[end]] >= start)
                start = mp[a[end]] + 1;

            mp[a[end]] = end;
        }
        
        ans = max(ans,end-start+1);
    }
    
    cout<<ans<<endl;
    
}

int main()
{
	solve();
}