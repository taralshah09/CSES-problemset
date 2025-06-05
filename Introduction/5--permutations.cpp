#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if(n == 1) {
        cout << 1 << endl;
        return;
    } else if(n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    
    vector<int> arr;
    
    for(int i = 2; i <= n; i += 2) {
        arr.push_back(i);
    }

    for(int i = 1; i <= n; i += 2) {
        arr.push_back(i);
    }

    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
