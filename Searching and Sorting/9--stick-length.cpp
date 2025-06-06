#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{   
    int n;
    cin>>n;
    
    vector<ll>arr(n);
    for(int i = 0;i<n;i++)cin>>arr[i];

    sort(arr.begin(),arr.end());
    int median = arr[n / 2];
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        ans += abs(median - arr[i]);
    }
    cout<<ans<<endl;
}

int main()
{
   solve();
}