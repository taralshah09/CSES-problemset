#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll maxSubarraySum(vector<ll> &arr)
{
    ll res = LLONG_MIN;
    ll ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans += arr[i];
        res = max(res, ans);

        if (ans < 0)
        {
            ans = 0;
        }
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxSubarraySum(arr) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}