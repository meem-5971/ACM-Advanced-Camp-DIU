#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll left = 0, right = 1e9+1;
    ll answer = 1e9+1;

    while (left <= right) {
        int mid = (left + right) / 2;
        int sellers = upper_bound(a.begin(), a.end(), mid) - a.begin();
        int buyers = b.end() - lower_bound(b.begin(), b.end(), mid);

        if (sellers >= buyers) {
            answer = mid;        
            right = mid - 1; 
        } else {
            left = mid + 1;
        }
    }

    cout << answer << "\n";
    return 0;
}
