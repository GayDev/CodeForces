#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (max(a, b) == max(c, d) && min(a, b) + min(c, d) == max(a, b))
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