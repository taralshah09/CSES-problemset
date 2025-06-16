#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    queue<int> q;
    
    for(int i = 1;i<=n;i++){
        q.push(i);
    }
        
    bool flag = false;
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        
        if(flag){
            cout<<it<<" ";
        }else{
            q.push(it);
        }
        
        flag = !flag;
    }
}


int main()
{
	solve();
}