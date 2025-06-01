#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e8+1;
vector<ll>primes;
vector<bool>isPrime(N,1);
//vector<ll>lp(N,0),hp(N,0);
void sieve(){
           isPrime[0]=isPrime[1]=0;
    
     for(ll i=2;i*i<=N;i++){
        if(isPrime[i]){
           // hp[i]=i;
        // primes.push_back(i);
            for(ll j=i*i;j<N;j+=i){
                isPrime[j]=0;
                //hp[j]=i;
            }
        }
     } 
     for(ll i=2;i<N;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
     }

}
int main(){

 sieve();
ll n;
while(scanf("%lld", &n) != EOF){
    if(n==0) break;
//cin>>n;
map<ll,ll>factors;
ll tmp=n;

for(auto p:primes){
    if(p*p>tmp) break;
    while(tmp%p==0){
        factors[p]++;
        tmp/=p;
    }
}
if(tmp!=1) factors[tmp]++;
bool first=true;
  for (auto u : factors) {
            if (!first) printf(" ");
            first = false;
            printf("%lld^%lld", u.first, u.second);
        }
       


printf("\n");
}
return 0;
}

