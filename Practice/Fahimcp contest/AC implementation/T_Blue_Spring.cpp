#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll p,n,d;
    cin>>n>>d>>p;

    vector<ll>f(n);
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }

    sort(f.rbegin(), f.rend());

    ll total = 0;
    for (int i = 0; i < n; i += d) {
        ll sum = 0;
        for (int j = i; j < i + d && j < n; j++) {
            sum += f[j];
        }
        total += min(sum,p);
    }

    cout << total << '\n';
    return 0;
}
