#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MAXN 10000010 
const ll M = 1000000007LL;
ll fact[MAXN];
int binExp(ll a, ll b,ll M){
    ll res = 1;
    a=a%M;
    while(b > 0){
        if(b & 1) res = (res * 1ll*a) % M;
        a = (a *1ll* a) % M;
        b >>= 1;
    }
    return res;
}

void initfact(){
    fact[0]=1;
    for(int i=1;i<MAXN;i++){
        fact[i]=(fact[i-1]*i)%M;
    }
}

ll getComb(int n,int i){
   
    long long res = fact[n];
    long long div = fact[n-i] * fact[i];
    div %= M;  div = binExp(div, M - 2, M);
    return (res * div) % M;
}

bool check(ll val, int a, int b) {
    while (val > 0) {
        if (val % 10 == a || val % 10 == b) {
            val /= 10;
        } else return false;
    }
    return true;
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
initfact();

int n,a,b;
cin>>a>>b>>n;
 ll ans=0;

 for(int i=0;i<=n;i++){
    ll sum=a * i + b * (n - i);
    if(check(sum,a,b)){
        ans=(ans+getComb(n,i))%M;
    }
 }
 cout<<ans<<endl;

 
return 0;
}