#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int n; cin >> n;

    if (n < 4) {
        cout << -1 << "\n"; 
        return;
    }
    int i;
    if (n%2)
        i = 0;
    else
        i = 1;
    for (; i <= n; i += 2)
        cout << i+1 << " ";

    cout << n-3 << " " << n-1 << " ";
    i = n-5;
    while (i > 0) {
        cout << i << " ";
        i -= 2;
    }
    cout << "\n"; 
    
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}