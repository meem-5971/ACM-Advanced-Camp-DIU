#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
ll n,q;
cin>>n>>q;
vector<ll>a(n+1);
map<ll,ll>sum;
sum[0]=0;
ll tot=0;
for(int i=1;i<=n;i++){
    cin>>a[i];
    tot+=a[i];
    sum[i]=tot;
}
while(q--){
    ll l,r,k;
    cin>>l>>r>>k;
    ll more=(r-l+1)*k*1ll;
    ll ans=sum[n]-sum[r]+sum[l-1];
    ans+=more;
    if(ans%2==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}
return 0;
}