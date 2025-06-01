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
map<ll,ll>mp;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    mp[a]+=b;
}
for(auto u:mp){
    if(k-u.second <=0){
        cout<<u.first<<endl;
        break;
    }
    k-=u.second;
}
 
return 0;
}