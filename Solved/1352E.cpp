#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int n; cin >> n;
    vector<int> a(n);
    vector<bool> b(8002);
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[i] = x;
    }

    for (int i = 0; i < n-1; i++) {
        int s = a[i];
        for(int j = i+1; j < n; j++) {
            s += a[j];
            if (s <= 8000)
                b[s] = 1;
        }
    }

    int ans = 0;
    for (int i: a)
        ans += b[i];

    cout << ans << "\n";
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}