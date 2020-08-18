#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

void solve() {
	int n; cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    vector<int> total(2);   //0 - alice; 1 - bob;
    vector<int> prev(2);
    vector<int> p = {0, n-1};
    int t = 0;

    while (1) {
        prev[t%2] = 0;

        while (prev[t%2] <= prev[1 ^ (t&1)]) {
            prev[t%2] += a[p[t%2]];
            total[t%2] += a[p[t%2]];
            p[t%2] += -(t%2)*2 + 1;
            
            if (p[0] > p[1]) {
                cout << t+1 << " " << total[0] << " " << total[1] << "\n";
                return;
            }
        }

        t++;
    } 
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}