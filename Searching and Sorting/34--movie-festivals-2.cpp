#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool sortcol2(const vector<ll> &v1, const vector<ll> &v2)
{
    return v1[0] < v2[0];
}

void solve()
{
    int n,k;
    cin>>n>>k;

    for(int i = 0;i<n;i++){
        cin>>a[i][0];
    }
    for(int i = 0;i<n;i++){
        cin>>a[i][1];
    }

    sort(a.begin(),a.end(),sortcol2);
    
    multiset<int> st;

    ll ans = 0;

    for (int i = 0; i < k; i++)
    {
        st.insert(a[i][1]);
    }

    for (int i = k; i < n; i++)
    {
        auto mn = st.begin();
        auto mx = st.rbegin(); 

        if (a[i][0] >= (*mn))
        {
            ans++;
            st.erase(mn);
            st.insert(a[i][1]);
        }
        else if (a[i][1] < (*mx))
        {
            st.erase(st.find(*mx));
            st.insert(a[i][1]);
        }
    }

    cout << ans + st.size() << "\n";
}

int main()
{
    solve();
}