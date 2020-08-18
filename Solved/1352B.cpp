#include <bits/stdc++.h>
#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

using namespace std;

void solve() {
	int n, k; cin >> n >> k;

    if ((n - (k - 1))%2 != 0 && n - (k - 1) > 0) {
        cout << "YES\n";
        for (int i = 0; i < k-1; i++)
            cout << "1 ";
        cout << n-(k-1) << "\n";
    }
    else if ((n- 2*(k-1))%2 == 0 && n- 2*(k-1) > 0) {
        cout << "YES\n";
        for (int i = 0; i < k-1; i++)
            cout << "2 ";
        cout << n-2*(k-1) << "\n";
    }
    else
        cout << "NO\n";
    
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}