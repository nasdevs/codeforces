/*
contest : https://codeforces.com/contest/1665
problem : https://codeforces.com/contest/1665/problem/A
created : 26.6.2022
*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // FILE I/O
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << n-3 << ' ' << 1 << ' ' << 1 << ' ' << 1 << '\n';
    }
}
