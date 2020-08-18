#include <iostream>
#include <set>

//#include <bits/stdc++.h>

using namespace std;

set <int> table;

void solve() {
	int n; cin >> n;
	int ans = 0;
	int k;

	while (1) {
		if (n < 2)
			break;

		auto it = table.lower_bound(n);
		if (*it > n)
			it--;
		n -= *it;
		ans++;
	}
	
	cout << ans << endl;
}

int main() {
	int n = 0;
	for (int i = 1; n <= 1e9; i++) {
		n = (3 * i * i + i) / 2;
		table.insert(n);
	}

	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}