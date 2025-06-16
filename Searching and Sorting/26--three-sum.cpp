#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int x;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back({x, i});
    }

    sort(a.begin(), a.end(), [](const pair<int, int> &x, const pair<int, int> &y)
         { return x.first < y.first; });

    for (int i = 0; i < n - 2; i++)
    {
        while (i > 0 && a[i].first == a[i - 1].first)
            continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = a[i].first + a[j].first + a[k].first;

            if (sum == k)
            {
                cout << a[i].second << " " << a[j].second << " " << a[k].second << endl;
                return;
            }

            if (sum < k)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
}

int main()
{
    solve();
}