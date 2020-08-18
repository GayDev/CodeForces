#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr_1d(arr); for (int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "]: " << arr[i] << "\n"; } cout << "\n";
#define print_arr_2d(arr); for (int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "]: "; for (int j = 0; j < arr[i].size(); j++) { cout << arr[i][j] <<" "; } cout << "\n"; } cout << "\n";
#define fill_arr_1d(arr); for (int i = 0; i < arr.size(); i++) { int x; cin >> x; arr[i] = x; }

using namespace std;

void solve() {
	int n; cin >> n;
    vector<int> a(2*n);
    fill_arr_1d(a);
    vector<int> used(52);

    for (int x: a) {
        if (used[x] % 2 == 0)
            cout << x << " ";
        used[x]++;
    }
    cout << "\n";

}
int main() {
	int t; cin >> t;
	while (t--)
		solve();

    return 0;
}