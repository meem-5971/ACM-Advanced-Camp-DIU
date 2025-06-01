#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e6+7;
vector<bool> isPrime(N, 1);
vector<int> PrimeList;

void seive() {
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j < N; j += i) {
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            PrimeList.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seive(); 
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
    
       
            cout << PrimeList[n - 1] << endl;
        
    }
    return 0;
}
