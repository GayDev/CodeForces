#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "] = " << arr[i] << "\n"; } cout << "\n";

typedef unsigned long long ull;

using namespace std;

struct comp {
	bool operator()(pair<int, int> a, pair<int, int> b) const {
		if (a.first == b.first)
			return a.second < b.second;
		else
			return a.first > b.first;
	}
};

void solve() {
	int n; cin >> n;
    vector<int> a(n, 0);
	int find = n;
	int stage = 1;
	multiset<pair<int, int>, comp> b = {make_pair(n, 0)};

	while (b.size()) {
		pair<int, int> curr_pair = *b.begin();
		b.erase(b.begin());

		if (curr_pair.first == 1)
			a[curr_pair.second] = stage;
		else if (curr_pair.first == 2) {
			a[curr_pair.second] = stage;
			b.insert(make_pair(1, curr_pair.second+1));
		}
		else {
			int mid = curr_pair.second + (curr_pair.first-1)/2;
			a[mid] = stage;
			b.insert(make_pair(mid - curr_pair.second, curr_pair.second));
			b.insert(make_pair(curr_pair.second + curr_pair.first - mid - 1, mid+1));
		}
		stage++;
	}

	for (int i: a)
		cout << i << " ";
	cout << "\n";
}

int main() {
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}