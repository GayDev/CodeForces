#include <iostream>
#include <algorithm>
#include <vector>

//#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b; cin >> a >> b;

	int a0 = a, b0 = b;
	a = min(a0, b0);
	b = max(a0, b0);
	

	if (a == 1 || a == 2 && b == 2)
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