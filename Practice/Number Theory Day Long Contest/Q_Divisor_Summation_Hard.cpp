#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e8;  // Limit for sieve
vector<bool> isPrime(N + 1, true);
vector<ll> primes;

// Sieve of Eratosthenes
void sieve() {
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime
    for (ll i = 4; i <= N; i += 2) isPrime[i] = false;  // Mark even numbers > 2
    for (ll i = 3; i * i <= N; i += 2) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= N; j += 2 * i) {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);  // Add 2 to the prime list
    for (ll i = 3; i <= N; i += 2) {
        if (isPrime[i]) primes.push_back(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();  // Precompute primes

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll m = n;
        map<ll, ll> factors;
        ll ans = 1;

        for (ll i = 0; i < primes.size() && n > 1 && primes[i] * primes[i] <= n; i++) {
            if (n % primes[i] == 0) {
                ll exp = 1;
                while (n % primes[i] == 0) {
                    factors[primes[i]]++;
                    n /= primes[i];
                    exp *= primes[i];
                }
                exp *= primes[i];
                ans *= (exp - 1) / (primes[i] - 1);
            }
        }
        if (n > 1) {  // Remaining prime > sqrt(n)
            factors[n]++;
            ans *= (n + 1);
        }
        cout << ans - m << endl;  // Proper divisor sum
    }

    return 0;
}
