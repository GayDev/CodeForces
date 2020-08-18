#include <iostream>
using namespace std;

void solve() {
	int n;
	cin >> n;

	int ans = (1 << n) - (1 << (n - 1));

	int i = n - 2;
	int j = 1;
	while (i > j) {
		ans += (1 << j);
		ans -= (1 << i);
		i--;
		j++;
	}

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}