#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5;
vector<bool>isPrime(N+1,1);
vector<ll>primesq;
void sieve(){
    isPrime[0] = isPrime[1] = false; 
    for (ll i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primesq.push_back(i*i);
            for (ll j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
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
ll n,k;
cin>>n>>k;
ll res=0,ans=0;;

for(auto p:primesq){
    if(p<=n){
        res++;
        if(p>k) ans++;
    }
}
cout<<res<<" "<<ans<<endl;

}
return 0;
}