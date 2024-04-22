/*
contest : https://codeforces.com/contest/1926
problem : https://codeforces.com/contest/1926/problem/B
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

    int t, n;
    bool r = false;
    string s1, s2;
    cin >> t;

    while (t--) {
        cin >> n;

        cin >> s1;        

        for (int i = 1; i < n; i++) {
            cin >> s2;
            if (s1.find("1") != std::string::npos && s2.find("1") != std::string::npos) {
                r = s1 == s2;
            }
            s1 = s2;
        }

        cout << (r ? "SQUARE": "TRIANGLE") << '\n';
    }
} 
