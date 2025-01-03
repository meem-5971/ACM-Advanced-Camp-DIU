#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;

map<ll,ll>prime_factors;
for(ll i=2;i*i<n;i++){
    while(n%i==0){
        prime_factors[i]++;
        n/=i;
    }
}
if(n>1) prime_factors[n]++;
ll ans=0;
for(auto u:prime_factors){
    ll e=1;
    while(u.second>=e){
        u.second-=e;
        ans++;
        e++;
    }
}

cout<<ans<<endl;





return 0;
}