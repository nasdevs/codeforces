/*
contest : https://codeforces.com/contest/1950
problem : https://codeforces.com/contest/1950/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
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

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << ((j+i) % 2 == 0 ? "##" : "..");
            }
            cout << '\n';
            for (int j = 0; j < n; j++) {
                cout << ((j+i) % 2 == 0 ? "##" : "..");
            }
            cout << '\n';
        }
        
    }
} 
