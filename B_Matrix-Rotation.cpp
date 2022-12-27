/*
contest : https://codeforces.com/contest/1772
problem : https://codeforces.com/contest/1772/problem/B
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

	int arr[2][2];

    while (t--) {
        int n = 4, m = 0;

        for (int i = 0; i < 2; i++) 
            for (int j = 0; j < 2; j++) {
                cin >> arr[i][j];
                m = max(m, arr[i][j]);
            }
        
        for (int i = 0; i < 4; i++) {
            if (m == arr[1][1] && arr[0][0] < arr[0][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1] && m == arr[1][1]) break;
            else {
                swap(arr[0][0], arr[1][0]);
                swap(arr[0][1], arr[1][0]);
                swap(arr[1][0], arr[1][1]);
            }
            n--;
        } 

        cout << (n ? "YES" : "NO") << '\n';
    }
}
