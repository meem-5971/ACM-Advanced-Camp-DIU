#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main() {
    int N;
    string S1, S2;
    cin >> N >> S1 >> S2;

    int i = 0;
    long long res = 1;

    if (S1[0] == S2[0]) {
        res = 3;
        i = 1;
    } else {
        res = 6;
        i = 2;
    }

    while (i < N) {
        if (S1[i] == S2[i]) {
            // Vertical
            if (S1[i-1] == S2[i-1]) {
                // Prev vertical
                res = (res * 2) % MOD;
            } else {
                // Prev horizontal
                res = (res * 1) % MOD;
            }
            i++;
        } else {
            // Horizontal
            if (S1[i-1] == S2[i-1]) {
                // Prev vertical
                res = (res * 2) % MOD;
            } else {
                // Prev horizontal
                res = (res * 3) % MOD;
            }
            i += 2;
        }
    }

    cout << res << endl;
    return 0;
}
