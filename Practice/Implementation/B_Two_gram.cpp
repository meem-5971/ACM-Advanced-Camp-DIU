#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> freq;
    string ans;
    int maxCount = 0;

    for (int i = 0; i < n - 1; ++i) {
        string sub = s.substr(i, 2);
        freq[sub]++;

 
        if (freq[sub] > maxCount) {
            maxCount = freq[sub];
            ans = sub;
        }
    }

    cout << ans << endl;
    return 0;
}
