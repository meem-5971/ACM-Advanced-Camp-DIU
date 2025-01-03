#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
vector<pair<ll,ll>>v;
map<ll,ll>mp;
ll x=k/n;
for(int i=0;i<n;i++){
ll a;
cin>>a;
v.push_back({a,i});
mp[i]=x;

}
sort(v.begin(),v.end());
ll rem=k%n;

if(rem>0){
    for(int i=0;i<rem;i++){
     ll a=v[i].second;
   mp[a]++;
    }
}
for(auto &u:mp){
    cout<<u.second<<endl;
}

return 0;
}