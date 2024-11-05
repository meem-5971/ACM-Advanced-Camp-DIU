#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
int mult_ct[N];
int vis[N];
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int n;
cin>>n;
vector<int>a(n);

for(int i=0; i<n; i++){
    int x;
    cin>>x;
    vis[x]++;
}

for(int i=1;i<N;i++){
    for(int j=i;j<N;j+=i){
    mult_ct[i]+= vis[j];
    }
}

int q;
cin>>q;
 
while(q--){
    int l,r;
    cin>>l>>r;
   int ans=0;
    ans+=mult_ct[l]+mult_ct[r];
    
    ll lc=l*r*1ll/__gcd(l,r);
    if(lc<N){
            ans-=(mult_ct[lc]);
    }

    cout<<ans<<'\n';
}

return 0;
}