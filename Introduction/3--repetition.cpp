#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    int i = 0;
    int maxi = 1;
    int count = 1;

    for (int j = 1; j < n; ++j) {
        if (s[j] == s[j - 1]) {
            count++;
        } else {
            maxi = max(maxi, count);
            count = 1; 
        }
    }
    maxi = max(maxi, count); 

    cout << maxi << endl;
}

int main() {
    solve();
    return 0;
}
