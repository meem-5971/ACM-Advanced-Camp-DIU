#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
const int MAXN = 1048576;

long long factorial[MAXN];

// Modular exponentiation for modular inverse
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp) {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// Precompute factorials modulo MOD
void precompute_factorials() {
    factorial[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
}

int main() {
    precompute_factorials();
    
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int n;
        cin >> n;

        long long result = 1;
        int totalSlots = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            // Update result using combination formula
            result = (result * factorial[totalSlots + x - 1]) % MOD;
            result = (result * mod_exp((factorial[x - 1] * factorial[totalSlots]) % MOD, MOD - 2, MOD)) % MOD;
            
            totalSlots += x;
        }

        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0;
}
