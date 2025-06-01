#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
     int n;
     cin>>n;
     vector<ll>a(n);   
     vector<ll>b(n);
     vector<ll>c(n);

     for(int i=0;i<n;i++){
      cin>>a[i];
     }
      for(int i=0;i<n;i++){
      cin>>b[i];
     }
      for(int i=0;i<n;i++){
      cin>>c[i];
     }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     sort(c.begin(),c.end());
     ll ans=0;
     for(int i=0;i<n;i++){
      ll x=b[i];
      ll y=lower_bound(a.begin(),a.end(),x)-a.begin();
      ll z=c.end()-upper_bound(c.begin(),c.end(),x);
      ans+=y*z;
     }
     cout<<ans<<endl;
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}