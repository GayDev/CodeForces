#include <bits/stdc++.h>

#define print_var(x); cout << #x << " = " << x << "\n";
#define print_arr_1d(arr); for(int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "]: " << arr[i] << "\n"; } cout << "\n";
#define print_arr_2d(arr); for (int i = 0; i < arr.size(); i++) { cout << #arr << "[" << i << "]: "; for (int j = 0; j < arr[i].size(); j++) { cout << arr[i][j] <<" "; } cout << "\n"; } cout << "\n";

using namespace std;


void solve() {
	int n, k; cin >> n >> k;
    vector<vector<int>> a;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        char c; cin >> c;
        int t = (c == '1');
        sum += t;
        vector<int> p(1, t);
        
        a.push_back(p);
    }
    for (int i = 0; i < n-k; i++) {
        char c; cin >> c;
        int t = (c == '1');
        a[i%k].push_back(t);
        sum += t;
    }

    vector<vector<int>> pref_sum = a;
    vector<vector<int>> dp = a;
    vector<int> ans(k, n);
    for (int i = 0; i < k; i++)
        for (int j = 1; j < a[i].size(); j++)
            pref_sum[i][j] += pref_sum[i][j-1];

    for (int i = 0; i < k; i++)
        for (int j = 0; j < a[i].size(); j++) {
            if (j == 0)
                dp[i][j] = 1 - a[i][j];
            else
                dp[i][j] = min(pref_sum[i][j-1], dp[i][j-1]) + 1 - a[i][j];
        }

    for (int i = 0; i < k; i++) {
        ans[i] = pref_sum[i][pref_sum[i].size()-1];
        
        for (int j = 0; j < a[i].size(); j++)
            ans[i] = min(ans[i], dp[i][j] + pref_sum[i][pref_sum[i].size()-1] - pref_sum[i][j]);
    }

    // print_arr_2d(a);
    // print_arr_2d(pref_sum);
    // print_arr_2d(dp);
    // print_arr_1d(ans);

    int real_ans = n;
    for (int i = 0; i < k; i++)
        real_ans = min(real_ans, sum - pref_sum[i][pref_sum[i].size()-1] + ans[i]);
    cout << real_ans << "\n";
}
int main() {
	int t; cin >> t;
	while (t--)
		solve();

    return 0;
}