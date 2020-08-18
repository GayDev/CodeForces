#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(k, 31);
	vector<int> b(k);
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		ans += x;

		for (int j = 0; j < k; j++)
			if (x <= a[j]) {
				a.insert(a.begin()+j, x);
				a.pop_back();
				break;
			}
	}
	
	for (int i = 0; i < n; i++) {
		int x; cin >> x;

		for (int j = 0; j < k; j++)
			if (x >= b[j]) {
				b.insert(b.begin()+j, x);
				b.pop_back();
				break;
			}
	}

	for (int i = 0; i < k; i++) {
		if (a[i] >= b[i])
			break;
		ans += b[i];
		ans -= a[i];
	}
	
    cout << ans << "\n";
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}