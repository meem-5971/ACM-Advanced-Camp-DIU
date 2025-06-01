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
map<ll,ll>mp;
set<ll>st;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
    st.insert(a[i]);
}
ll cnt=0;
for(auto u:mp){
    if(u.second%2==0) cnt++;
}
if(cnt%2==0) cout<<st.size()<<endl;
else cout<<st.size()-1<<endl;
return 0;
}