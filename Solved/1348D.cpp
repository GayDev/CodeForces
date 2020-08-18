#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

void solve() {
	int target; cin >> target;
	int n = 1, m = 1;	//n - population; m - mass

	cout << (int)floor(log2(target)) << endl;

	int split;
	while (1) {
		if (target - m - n <= n) {
			cout << target - m - n << endl;
			break;
		}
		split = (target - 2*n - m) / 2;
		if (split > n)
			split = n;
		m += n + split;
		n += split;
		cout << split << " ";
	}
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}