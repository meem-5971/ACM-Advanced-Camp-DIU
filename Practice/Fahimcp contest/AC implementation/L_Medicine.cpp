#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
map<int,ll>mp;
int sum=0;
vector<pair<ll,ll>>pq(n);
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
 mp[1]+=y;
 mp[x+1]-=y;

}

ll tot=0;
for(auto u:mp){
    tot+=u.second;
    if(tot<=k){
        cout<<u.first<<endl;
        break;
    }

}
return 0;
}