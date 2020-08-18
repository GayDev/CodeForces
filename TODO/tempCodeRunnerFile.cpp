#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int n; cin >> n;
    vector<int> pref(n+1, 0);
    unordered_map<int, int> cnt;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        pref[i] = pref[i-1]+x;
        cnt[x]++;
    }
    int ans = 0;

    for(int i = 0; i < n-1; i++) {
        for(int j = i+2; j < n+1; j++) {
            ans += cnt[pref[j] - pref[i]];
            cnt[pref[j] - pref[i]] = 0;
        }
    }
    cout << ans << "\n";
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}