#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
//#include <bits/stdc++.h>

using namespace std;

void solve() {
	string path; cin >> path;

	set <vector<int>> vis;

	int x = 0, y = 0, x0, y0;
	int ans = 0;

	for (char i : path) {
		x0 = x;
		y0 = y;
		switch (i) {
		case 'N':	y++;	break;
		case 'E':	x++;	break;
		case 'S':	y--;	break;
		case 'W':	x--;	break;
		}

		vector<int> t;

		if (x == x0) {
			if (y >= y0)
				t = { x0, y0, x, y };
			else
				t = { x, y, x0, y0 };
		}
		else {
			if (x >= x0)
				t = { x0, y0, x, y };
			else
				t = { x, y, x0, y0 };
		}

		if (vis.find(t) == vis.end()) { ans += 5; vis.insert(t); }
		else { ans += 1; }
	}
	cout << ans << endl;
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}