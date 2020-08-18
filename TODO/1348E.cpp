#include <bits/stdc++.h>
typedef unsigned long long ull;

using namespace std;


int main() {
	int n, k; cin >> n >> k;
	ull ans = 0;
	ull ans2 = 0;
	vector <ull> a, b;
	a.push_back(0);
	b.push_back(0);
	ull t;

	for (int i = 0; i < n; i++) {
		cin >> t;
		a.push_back(t);
		a[0] += t;
		cin >> t;
		b.push_back(t);
		b[0] += t;		
	}

	ans += a[0] / k;
	ans += b[0] / k;
	a[0] %= k;
	b[0] %= k;

	for (int i = 1; ((i <= n) && (a[0] + b[0] >= k)); i++) {
		if (min(a[0], a[i]) + min(b[0], b[i]) >= k) {
			ans++;
			break;
		}
	}

	cout << ans << endl;
	
	return 0;
}

