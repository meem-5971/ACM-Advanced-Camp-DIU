#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=998244353;

ll fibo(ll n){
   if (n == 0) return 0;
    if (n == 1) return 1;
    ll a = 0, b = 1, c;
    for (ll i = 2; i <= n; ++i) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return b;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll n;
cin>>n;
cout<<fibo(n)<<"\n";
return 0;
}