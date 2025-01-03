/* To determine whether a number 𝑏 divides 𝑛!(factorial of 𝑛), 
we use the concept of prime factorization and 
check if the powers of prime factors of 𝑏 are less than or equal to their powers in 𝑛!. */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 10;
vector<bool> isPrime(N, 1);
vector<int> lp(N, 0), hp(N, 0);

// Precompute primes using Sieve of Eratosthenes
void sieve() {
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            lp[i] = hp[i] = i; // Lowest and highest prime factor for a prime is itself
            for (int j = 2 * i; j < N; j += i) {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0) lp[j] = i;
            }
        }
    }
}
unordered_map<int, int> factorize(int b) {
    unordered_map<int, int> factors;
    if (b < N) {
        while (b > 1) {
            int prime_factor = hp[b];
            while (b % prime_factor == 0) {
                b /= prime_factor;
                factors[prime_factor]++;
            }
        }
    } else {
        // Use trial division for large numbers
        //TRIAL DIVISION allows the program to correctly factorize numbers larger than the sieve limit by directly dividing them by all potential factors.
        for (int i = 2; 1LL * i * i <= b; i++) {
            while (b % i == 0) {
                factors[i]++;
                b /= i;
            }
        }
        if (b > 1) factors[b]++; // Remaining prime factor
    }
    return factors;
}

// Function to check if m divides n!
bool dividesFactorial(int a, int b) {
    if (b == 0) return false; // Division by zero is undefined
    if (b == 1) return true;  // 1 divides any number

    // Factorize b into its prime factors
    unordered_map<int, int> prime_factors_b=factorize(b);
   
    // Check powers of primes in a!
    for (auto &u : prime_factors_b) {
        int power_in_factorial = 0;
        ll factor = u.first;
        while (factor <= a) {
            power_in_factorial += a / factor;
            if (factor > a / u.first) break; // Prevent overflow
            factor *= u.first;
        }
        if (power_in_factorial < u.second) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(); // Precompute primes

    int a, b;
    while (cin >> a >> b) {
        if (dividesFactorial(a, b)) {
            cout << b << " divides " << a << "!" << endl;
        } else {
            cout << b << " does not divide " << a << "!" << endl;
        }
    }

    return 0;
}
