#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<ll>a(n);
ll mn=INT_MAX, mx=INT_MIN;
map<ll,ll>mp;
for(int i=0;i<n;i++){
 cin>>a[i];
 mx=max(a[i],mx);
 mn=min(a[i],mn);
 mp[a[i]]++;
}
cout<<mx-mn<<" ";
if(mx==mn) cout<<n*(n-1LL)/2<<endl;
else cout<<mp[mx]*mp[mn]<<endl;
 
return 0;
}