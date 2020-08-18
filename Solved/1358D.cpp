#include <bits/stdc++.h>
// 1 8 bbdcaaaa
using namespace std;

int solve(string* s, int begin, int end, char symbol) {
    if (end-begin == 1)
        if (s->at(begin) == symbol)
            return 0;
        else
            return 1;
    
    int t1 = 0, t2 = 0;
    for (int i = begin; i < (begin+end)/2; i++)
        if (s->at(i) != symbol)
            t1++;
    for (int i = (begin+end)/2; i < end; i++)
        if (s->at(i) != symbol)
            t2++;
    //printf("[%d; %d) : '%c' : %d %d\n", begin, end, symbol, t1, t2);

    int s1 = t1 + solve(s, (begin+end)/2, end, symbol+1);
    int s2 = t2 + solve(s, begin, (begin+end)/2, symbol+1);

    return min(s1, s2);
        
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        cout << solve(&s, 0, n, 'a') << "\n";
    }

    return 0;
}