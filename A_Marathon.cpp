/*
contest : https://codeforces.com/contest/1692
problem : https://codeforces.com/contest/1692/problem/A
created : 16.6.2022
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // FILE I/O
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

    int N;
    cin >> N;

    while (N--) {
        int x[4], y = 0;
        for (auto &x: x) cin >> x;
        for (int i = 1; i < 4; i++) {
            if (x[0] < x[i]) y++;
        }
        cout << y << '\n';
    }
}
