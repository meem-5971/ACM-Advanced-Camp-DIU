#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        int k;
        cin >> x >> k;
        
        if (k == 1) {
            if (is_prime(x))
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        } else {
            if(x==1) {
                if(k==2) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
