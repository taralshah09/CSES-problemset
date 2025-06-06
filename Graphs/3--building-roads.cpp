#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e5 + 1;
int parent[N], rank_[N];
 
void make_set(int n) {
	for (int i = 0; i <= n; ++i) {
		parent[i] = i;
		rank_[i] = 0;
	}
}
 
int find(int x) {
	if (parent[x] != x)
		parent[x] = find(parent[x]);
	return parent[x];
}
 
bool unite(int x, int y) {
	int rootX = find(x);
	int rootY = find(y);
	if (rootX == rootY)
		return false;
 
	if (rank_[rootX] < rank_[rootY]) {
		parent[rootX] = rootY;
	} else if (rank_[rootX] > rank_[rootY]) {
		parent[rootY] = rootX;
	} else {
		parent[rootY] = rootX;
		rank_[rootX]++;
	}
	return true;
}
 
void solve() {
	int n, m;
	cin >> n >> m;
 
	make_set(n);
 
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		unite(u, v);
	}
 
	unordered_set<int> st;
	for (int i = 1; i <= n; ++i) {
		st.insert(find(i));  
	}
 
	vector<int> roots(st.begin(), st.end());
 
	cout << roots.size() - 1 << endl;
 
	for (int i = 0; i < roots.size() - 1; ++i) {
		cout << roots[i] << " " << roots[i + 1] << endl;
	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
