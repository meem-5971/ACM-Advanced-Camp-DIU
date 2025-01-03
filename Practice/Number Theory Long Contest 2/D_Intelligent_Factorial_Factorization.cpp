#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> primes;

void seive() {
     isPrime[0]=isPrime[1]=0;
    for(int i=2;i<N;i++){
        // without if condition : NlogN , with if : N(log(logN))
        if(isPrime[i]){ 
            primes.push_back(i);
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seive();

    int t;
    cin >> t;
    int cs = 1;

    while (t--) {
        int n;
        cin >> n;
        int on = n; 

        unordered_map<int, int> prime_factors;

     
        for (int p : primes) {
        if (p > n) break;
        int count = 0, power = p;
        while (power <= n) {
            count += n / power;
            if (power > n / p) break; 
            power *= p;
        }
        prime_factors[p] = count;
    }
        vector<pair<int, int>> sorted_factors(prime_factors.begin(),prime_factors.end());
        sort(sorted_factors.begin(), sorted_factors.end());
        
       cout << "Case " << cs << ": " << on << " = ";
        bool first = true;
        for (auto u :sorted_factors) {
            if (u.second == 0) continue;
            if (!first) cout << " * ";
            cout << u.first << " (" << u.second << ")";
            first = false;
        }
        cout << endl;

        cs++;
    }

    return 0;
}
