#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MAXN 10000000 // Limit for sieve
vector<int> primes;

void sieve() {
    vector<bool> is_prime(MAXN + 1, true);
    is_prime[0] = is_prime[1] = false; 

    for (int i = 2; i * i <= MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= MAXN; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 sieve();
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll m=n;
ll p=0,q=0;
for(ll prime:primes){
    if(n%prime==0){
        ll x=prime;
        if(n%(x*x)==0){
            p=x;
            q=n/(x*x);
        }
        else{
            p=sqrt(n/x);
            q=x;
        }
        break;
    }
}
cout<<p<<" "<<q<<endl;
}
return 0;
}