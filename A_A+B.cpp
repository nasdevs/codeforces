/*
contest : https://codeforces.com/contest/1772
problem : https://codeforces.com/contest/1772/problem/A
created : 27.12.2022
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

	int t;
	cin >> t;

	string operation;

	while (t--) {
		cin >> operation;
		cout << (operation[0]-'0') + (operation[2]-'0') << '\n';
	}
}
