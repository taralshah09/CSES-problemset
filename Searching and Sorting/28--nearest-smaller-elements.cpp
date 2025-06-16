#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    stack<int> st;
    vector<int> pse(n, 0);

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }

        if (!st.empty()) {
            pse[i] = st.top() + 1; 
        } else {
            pse[i] = 0;
        }

        st.push(i);
    }

    for (auto it : pse) {
        cout << it << " ";
    }
    cout << endl;
}



int main()
{
	solve();
}