#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll calculateWays(int K) {
    ll totalWays = ((ll) K * K * (K * K - 1)) / 2;

    ll attackingWays = 4 * (K - 1) * (K - 2);

    ll ans = totalWays - attackingWays;

    return ans;
}

int main() {
    int N;
    cin>>N;
    
    for (int K = 1; K <= N; K++) {
        cout << calculateWays(K) << " ";
    }

    return 0;
}