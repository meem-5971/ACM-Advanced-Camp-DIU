#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1e9+7;
vector<int>primes;
ll N=1000;
vector<bool>isPrime(N+1,1);

void sieve(){
    isPrime[1]=0, isPrime[0]=0;
    for(int i=2;i<=N;i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(int j=i*2;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
    }
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
sieve();
int n;
cin>>n;
ll res=1;

for(int p:primes){
    ll exp=0;
    ll var=p;
    while(var<=n){
        exp+=(n/var);
        var*=p;
    }
    res=res*(exp+1)%mod;
}
 cout<<res<<endl;
return 0;
}