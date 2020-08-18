#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

//#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	set<int> filled;
	int x;
	int to;

	for (int i = 0; i < n; i++) {
		cin >> x;
		to = (n + (i + x) % n) % n;

		filled.insert(to);
	}
	if (filled.size() == n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}