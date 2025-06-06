#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
	int n,x;
	cin>>x>>n;

	vector<int> p(n);
	int a,b;
	for(int i = 0; i<n; i++) {
		cin>>p[i];
	}

	set<pair<int,int>> ranges;
	ranges.insert({0,x});
	multiset<int> range_lengths;
	range_lengths.insert(x);


	for(int i = 0; i<n; i++) {
		ll pos = p[i];
		auto it = ranges.upper_bound({ pos, 0 });
		it--;

		ll start = it->first;
		ll end = it->second;

		ranges.erase(it);
		range_lengths.erase(
		    range_lengths.find(end - start));

		ranges.insert({ start, pos });
		ranges.insert({ pos, end });
		range_lengths.insert(pos - start);
		range_lengths.insert(end - pos);

		cout << *range_lengths.rbegin() << " ";

	}

    cout<<"\n";
}

int main()
{
	solve();
}