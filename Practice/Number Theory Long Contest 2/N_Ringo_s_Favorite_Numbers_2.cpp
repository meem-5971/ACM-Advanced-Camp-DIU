#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=200;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
int n;
cin>>n;
map<int,bool>vis;
map<ll,ll>mp;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
   // vis[x%200]=true;
    mp[x%200]++;
}
ll ans=0;
for(auto &u:mp){
  //  cout<<" "<<vis[i]<<" "<<mp[i]<<endl;
    ans+=1ll*((u.second*(u.second-1))/2);
}
cout<<ans<<endl;

 
return 0;
}