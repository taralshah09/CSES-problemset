#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll maxSubarraySum(vector<ll> &arr) {
    ll res = arr[0];
    ll maxEnding = arr[0];

    for (int i = 1; i < arr.size(); i++) {
      
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(1LL*res, 1LL*maxEnding);
    }
    return res;
}


void solve()
{   
    int n;
    cin>>n;
    
    vector<ll>arr(n);
    for(int i = 0;i<n;i++)cin>>arr[i];

    cout<<maxSubarraySum(arr)<<endl;
}

int main()
{
   solve();
}