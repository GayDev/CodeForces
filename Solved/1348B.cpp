#include <iostream>
#include <set>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		set<int> s;
		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			s.insert(tmp);
		}

		int d = k - size(s);
		if (d < 0) {
			cout << -1 << endl;
			continue;
		}

		cout << n * k << endl;
		for (int i = 0; i < n; i++) {
			for (int j : s)
				cout << j << " ";

			for (int j = 0; j < d; j++)
				cout << 1 << " ";
		}
		cout << endl;
	}

	return 0;
}