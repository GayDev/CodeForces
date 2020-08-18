#include <bits/stdc++.h>
#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr, length); for(int i = 0; i < length; i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	int x;
	int mx = 0, mn = k + 1;

	vector<int> t;
	for (int i = 0; i < n; i++) {
		cin >> x;
		t.push_back(x);
	}

	int length = 2*k + 1;
	vector<int> cnt(length);

	for (int i = 0; i < n/2; i++)
		cnt[t[i] + t[n-1-i]]++;

	vector<int> pref(2 * k + 2);
	for (int i = 0; i < n / 2; ++i) {
		int l1 = 1 + t[i], r1 = k + t[i];
		int l2 = 1 + t[n - i - 1], r2 = k + t[n - i - 1];
		++pref[min(l1, l2)];
		--pref[max(r1, r2) + 1];
	}

	for (int i = 1; i <= 2 * k + 1; ++i)
		pref[i] += pref[i - 1];

	int ans = 1e8;
	for(int i = 2; i <= 2*k; i++) {
		int a0 = (pref[i] - cnt[i]) + 2*(n/2 - pref[i]);
		ans = min(ans, a0);
	}
	cout << ans << "\n";
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}