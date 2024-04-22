/*
contest : https://codeforces.com/contest/1926
problem : https://codeforces.com/contest/1926/problem/A
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

    string n;

    while (t--) {
        int a = 0, b = 0;

        cin >> n;
        for (int i = 0; i < n.length(); i++) {
            if (n[i] == 'A') a++;
            else b++;
        }

        cout << (a > b ? "A" : "B") << '\n';
    }
} 
