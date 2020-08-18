#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int n, m; cin >> n >> m;

    if (n == 1) {
        cout << 0 << "\n";
        return;
    }
    if (n == 2) {
        cout << m << "\n";
        return;
    }

    cout << 2*m << "\n";
    
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}