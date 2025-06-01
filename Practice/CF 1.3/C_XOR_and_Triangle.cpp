#include<bits/stdc++.h>
#define ll long long
using namespace std;



void solve() {
    int x;
    cin >> x;
    if (__builtin_popcountll(x) == 1) {
        cout << "-1\n";
        return;
    }
    int y = 0;
    int f1 = 0, f0 = 0;
    for (int i = 0; i <= 30; i++) {
        if (x & (1 << i)) {
            if (f1 == 0) {
                y |= 1 << i;
                f1 = 1;
            }
        } else {
            if (f0 == 0) {
                y |= 1 << i;
                f0 = 1;
            }
        }
    }//log(x)
    if (y < x) {
        cout << y << '\n';
    } else
        cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
