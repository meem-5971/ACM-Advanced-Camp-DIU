#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e3;
vector<bool>isPrime(N+1,1);
vector<ll>primes;
void sieve(){
    isPrime[0] = isPrime[1] = false; 
    for (ll i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    } 
}
int main(){
sieve();
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
int res=0;

for(int i=0;i<primes.size()-1;i++){
    int sum=primes[i]+primes[i+1]+1;
    if(sum<=n && isPrime[sum]) res++;
}
if(res>=k) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}