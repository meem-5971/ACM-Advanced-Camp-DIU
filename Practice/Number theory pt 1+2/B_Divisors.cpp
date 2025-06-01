#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e8+7;

ll count(ll num) {
    ll cnt = 0;
   for (ll i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            cnt++;
            if (i != num / i) { 
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n,m;
cin>>n>>m;
ll res=n;
ll mx=0;
for(int i=n;i<=m;i++){
    ll divisors=count(i);
    if(divisors>mx){
        mx=divisors;
        res=i;
    }
    else if(divisors==mx && i<res){
        res=i;
    }
}

    cout<<"Between "<<n<<" and "<<m<<", "<<res<<" has a maximum of "<<mx<<" divisors."<<endl;


}
return 0;
}