#include <bits/stdc++.h>
#define ll long long
using namespace std;
//sliding window
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int sum = 0, ans = INT_MAX, id = 0;
    
    for (int i = 0; i < x; i++) {
        sum += a[i];
    }
    ans = sum;
    id = 0;

    for (int i = x; i < n; i++) {
        sum = sum - a[i - x] + a[i];
        if (sum < ans) {
            ans = sum;
            id = i - x + 1;
        }
    }
    
    cout << id + 1 << endl;
    return 0;
}
