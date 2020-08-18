#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
    int a0 = a, b0 = b, c0 = c;

    if (a)
        cout << 0;
    while (a) {
        cout << 0;
        a--;
    }

    if (b0 && a0 == 0)
        cout << 0;

    if (b) {
        cout << 1;
        b--;
        while (c) {
            cout << 1;
            c--;
        }
        int t = 0;
        while (b) {
            cout << t%2;
            b--;
            t++;
        }
    }
    else {
        if (c)
            cout << 1;
        while (c) {
            cout << 1;
            c--;
        }
    }
    cout << "\n";
    
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}