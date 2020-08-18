#include <bits/stdc++.h>
#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr, length); for(int i = 0; i < length; i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

using namespace std;

void solve() {
	int x; cin >> x;

    vector<int> seq;
    for (int pow = 1; x; pow*=10) {
        if (x%10)
            seq.push_back((x%10)*pow);
        x /= 10;
    }

    cout << seq.size() << "\n";
    for (int i = 0; i < seq.size(); i++) {
        cout << seq[i] << " ";
    }
    cout << "\n";
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}