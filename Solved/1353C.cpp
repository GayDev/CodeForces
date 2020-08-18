#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int n; cin >> n;
    n /= 2;

    ull ans = 8*n;
	ans *= n+1;
	ans *= 2*n + 1;
	ans /= 6;
    cout << ans << "\n";
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}