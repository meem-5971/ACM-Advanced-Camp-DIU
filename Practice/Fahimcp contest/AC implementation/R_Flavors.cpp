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
vector<vector<ll>>a(1e6);
ll k=0;
for(int i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    a[x].push_back(y);
    k=max(k,x);
}
vector<ll>unq;
vector<ll>res;
for(int i=1;i<=k;i++){
auto &pos=a[i];
if(pos.empty()) continue;
sort(pos.rbegin(),pos.rend());
unq.push_back(pos[0]);
if(pos.size() >= 2){
    res.push_back(pos[0]+(pos[1]/2));
}
}
sort(unq.rbegin(),unq.rend());

res.push_back(unq[0]+unq[1]);


cout<<*max_element(res.begin(),res.end())<<endl;

return 0;
}