#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;  // Monk's prediction ("Even" or "Odd")
    int n;     // Size of the array
    cin >> s >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Calculate the maximum OXA value for the whole array
    int oxa_value = nums[0];
    for (int i = 1; i < n; i++) {
        if ((i - 1) % 3 == 0) {         // OR operation
            oxa_value |= nums[i];
        } else if ((i - 1) % 3 == 1) {  // XOR operation
            oxa_value ^= nums[i];
        } else {                        // ADD operation
            oxa_value += nums[i];
        }
    }

    // Determine the parity of the result
    string result_parity = (oxa_value % 2 == 0) ? "Even" : "Odd";

    // Compare with Monk's prediction
    if (result_parity == s) {
        cout << "Monk";
    } else {
        cout << "Mariam";
    }
}

int main() {
    int t;  // Number of test cases
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
