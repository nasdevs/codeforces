/*
contest : https://codeforces.com/contest/1807/
problem : https://codeforces.com/contest/1807/problem/A
created : 21.04.2023
*/

#include <iostream>
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

	int a, b, c;

    while (t--) {
		cin >> a >> b >> c;

		cout << ((a+b) == c ? "+": "-") << '\n';
    }
}
